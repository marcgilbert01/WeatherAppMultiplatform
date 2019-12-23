package domain.weather.repos

import domain.weather.entities.Weather

interface WeatherRepo {

    fun getWeatherForOneCity(cityId: String): Weather

}