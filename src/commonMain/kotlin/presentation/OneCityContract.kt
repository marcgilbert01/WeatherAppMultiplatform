package presentation

interface OneCityContract {

    interface View {

        fun displayCurrentWeatherState(weatherState: String)

        fun displayCurrentTemperature(temperature: Double)
    }

    interface Presenter {

        fun onViewStart()

        fun onViewStop()
    }
}