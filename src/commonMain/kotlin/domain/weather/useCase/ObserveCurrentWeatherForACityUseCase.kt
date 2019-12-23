package domain.weather.useCase

import com.nowtv.domain.common.UseCase
import domain.weather.entities.Weather
import rxProxy.Observable

interface ObserveCurrentWeatherForACityUseCase: UseCase<Observable<Weather>, ObserveCurrentWeatherForACityUseCase.Params> {

    override fun buildUseCase(params: Params): Observable<Weather>

    data class Params(val cityId: String)
}