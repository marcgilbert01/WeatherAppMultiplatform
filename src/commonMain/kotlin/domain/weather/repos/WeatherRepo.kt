package domain.weather.repos

import domain.weather.entities.Weather
import rxProxy.Observable

interface WeatherRepo {

    fun getWeatherForOneCity(cityId: String): Weather

}