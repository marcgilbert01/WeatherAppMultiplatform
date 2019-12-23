package domain.weather.useCase

import domain.weather.entities.Weather
import rxProxy.Observable

class ObserveCurrentWeatherForACityUseCaseImpl: ObserveCurrentWeatherForACityUseCase {

    override fun buildUseCase(params: ObserveCurrentWeatherForACityUseCase.Params): Observable<Weather> {
        TODO("not implemented") //To change body of created functions use File | Settings | File Templates.
    }
}