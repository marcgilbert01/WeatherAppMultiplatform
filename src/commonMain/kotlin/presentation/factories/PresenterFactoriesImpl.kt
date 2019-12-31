package presentation.factories

import data.weather.WeatherRepoImpl
import domain.weather.useCase.ObserveCurrentWeatherForACityUseCaseImpl
import presentation.OneCityContract
import presentation.OneCityPresenter
import rxProxy.factories.RxFactories

class PresenterFactoriesImpl(
    private val rxFactories: RxFactories
): PresenterFactories {

    override fun createOneCityPresenter(view: OneCityContract.View): OneCityContract.Presenter {
        return OneCityPresenter(
            view,
            ObserveCurrentWeatherForACityUseCaseImpl(WeatherRepoImpl(), rxFactories),
            rxFactories
        )
    }
}