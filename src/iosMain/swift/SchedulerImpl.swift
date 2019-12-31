import WeatherAppMultiplatform
import RxSwift

class SchedulerImpl: Rx_proxyScheduler {
    
    private let scheduler: ImmediateSchedulerType
    
    init(schedulerType: RxSwift.ImmediateSchedulerType ) {
        self.scheduler = schedulerType
    }
}

