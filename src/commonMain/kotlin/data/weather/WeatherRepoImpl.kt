package data.weather

import domain.weather.entities.Weather
import domain.weather.repos.WeatherRepo

class WeatherRepoImpl: WeatherRepo {

    override fun getWeatherForOneCity(cityId: String): Weather {
        return Weather(
            temperature = 32.5,
            status = "Ensoleille"
        )
    }
}