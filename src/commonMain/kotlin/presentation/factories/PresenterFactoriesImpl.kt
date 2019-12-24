package presentation.factories

import data.weather.WeatherRepoImpl
import domain.weather.useCase.ObserveCurrentWeatherForACityUseCaseImpl
import presentation.OneCityContract
import presentation.OneCityPresenter

class PresenterFactoriesImpl: PresenterFactories {

    override fun createOneCityPresenter(view: OneCityContract.View): OneCityContract.Presenter {
        return OneCityPresenter(
            view,
            ObserveCurrentWeatherForACityUseCaseImpl(WeatherRepoImpl())
        )
    }
}