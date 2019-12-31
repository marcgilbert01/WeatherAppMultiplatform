import RxSwift
import WeatherAppMultiplatform

class SchedulerModuleImpl: Rx_proxySchedulerModule {
    
    let ioScheduler = SchedulerImpl(schedulerType: ConcurrentDispatchQueueScheduler(qos: .background))
    let uiScheduler = SchedulerImpl(schedulerType: MainScheduler.instance)

    func io() -> Rx_proxyScheduler {
        return ioScheduler
    }
    
    func ui() -> Rx_proxyScheduler {
        return uiScheduler
    }
    
    func computation() -> Rx_proxyScheduler {
        return ioScheduler
    }
}
