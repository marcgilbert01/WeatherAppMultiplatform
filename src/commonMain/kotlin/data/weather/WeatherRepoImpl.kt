package data.weather

import domain.weather.entities.Weather
import domain.weather.repos.WeatherRepo
import io.ktor.client.HttpClient
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.request.get
import io.ktor.client.request.post
import io.ktor.client.request.url
import io.ktor.http.ContentType
import io.ktor.http.contentType
import kotlin.coroutines.Continuation

class WeatherRepoImpl: WeatherRepo {

    override fun getWeatherForOneCity(cityId: String): Weather {




        return Weather()

    }



    private suspend fun getJson(callback: Continuation<String>): Int {


        val client = HttpClient()
        // Get the content of an URL.
        val firstBytes = client.get<ByteArray>("https://127.0.0.1:8080/a")


    }

}