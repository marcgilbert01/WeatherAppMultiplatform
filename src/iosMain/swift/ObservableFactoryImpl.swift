import RxSwift
import WeatherAppMultiplatform

class ObservableFactoryImpl: Rx_proxyObservableFactory {
   
    func just(t: Any?) -> Rx_proxyObservable {
        return ObservableImpl(observable: RxSwift.Observable.just(t))
    }
}
