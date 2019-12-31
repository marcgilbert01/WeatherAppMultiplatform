package presentation

import domain.weather.useCase.ObserveCurrentWeatherForACityUseCase
import rxProxy.Disposable
import rxProxy.factories.RxFactories

class OneCityPresenter(
    private val view: OneCityContract.View,
    private val observeCurrentWeatherForACityUseCase: ObserveCurrentWeatherForACityUseCase,
    private val rxFactories: RxFactories
) : OneCityContract.Presenter{

    private var disposable: Disposable? = null

    override fun onViewStart() {
        disposable?.dispose()
        disposable = observeCurrentWeatherForACityUseCase
            .buildUseCase(ObserveCurrentWeatherForACityUseCase.Params("cityid"))
            .subscribeOn(rxFactories.getSchedulerModule().io())
            .observeOn(rxFactories.getSchedulerModule().ui())
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