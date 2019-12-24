package domain.weather.useCase

import domain.weather.entities.Weather
import domain.weather.repos.WeatherRepo
import rx.Rx
import rxProxy.Observable

class ObserveCurrentWeatherForACityUseCaseImpl(
    private val weatherRepo: WeatherRepo
): ObserveCurrentWeatherForACityUseCase {

    override fun buildUseCase(params: ObserveCurrentWeatherForACityUseCase.Params): Observable<Weather> {
        return Rx.factories.getObservableFactory()
                .just(weatherRepo.getWeatherForOneCity(params.cityId))
                .delay(5000)
    }
}