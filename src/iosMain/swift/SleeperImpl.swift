import WeatherAppMultiplatform

class SleeperImpl: Rx_proxySleeper {
    func sleepFor(millisec: Int64) {
        sleep(UInt32(millisec))
    }
}
