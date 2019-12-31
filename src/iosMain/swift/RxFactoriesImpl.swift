import WeatherAppMultiplatform

class RxFactoriesImpl : Rx_proxyRxFactories {
    
    let observableFactory = ObservableFactoryImpl()
    let schedulerModule = SchedulerModuleImpl()
    let sleeper = SleeperImpl()
    
    func getObservableFactory() -> Rx_proxyObservableFactory {
        return observableFactory
    }
    
    func getSchedulerModule() -> Rx_proxySchedulerModule {
        return schedulerModule
    }
    
    func getSleeper() -> Rx_proxySleeper {
        return sleeper
    }
}
