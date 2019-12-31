package domain.weather.useCase

import domain.weather.entities.Weather
import domain.weather.repos.WeatherRepo
import rxProxy.Observable
import rxProxy.factories.RxFactories

class ObserveCurrentWeatherForACityUseCaseImpl(
    private val weatherRepo: WeatherRepo,
    private val rxFactories: RxFactories
): ObserveCurrentWeatherForACityUseCase {

    override fun buildUseCase(params: ObserveCurrentWeatherForACityUseCase.Params): Observable<Weather> {
        return rxFactories.getObservableFactory()
                .just(weatherRepo.getWeatherForOneCity(params.cityId))
                .delay(5000)
    }
}