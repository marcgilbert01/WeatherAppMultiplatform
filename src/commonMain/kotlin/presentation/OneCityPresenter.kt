package presentation

import domain.weather.useCase.ObserveCurrentWeatherForACityUseCase
import rx.Rx
import rxProxy.Disposable

class OneCityPresenter(
    private val view: OneCityContract.View,
    private val observeCurrentWeatherForACityUseCase: ObserveCurrentWeatherForACityUseCase
) : OneCityContract.Presenter{

    private var disposable: Disposable? = null

    override fun onViewStart() {
        disposable?.dispose()
        disposable = observeCurrentWeatherForACityUseCase
            .buildUseCase(ObserveCurrentWeatherForACityUseCase.Params("cityid"))
            .subscribeOn(Rx.factories.getSchedulerModule().io())
            .observeOn(Rx.factories.getSchedulerModule().ui())
            .subscribe({
                view.displayCurrentTemperature(it.temperature?:0.0)
                view.displayCurrentWeatherState(it.status?:"no data")
            },{
                println("marc "+it.message)
            })
    }

    override fun onViewStop() {
        disposable?.dispose()
    }
}