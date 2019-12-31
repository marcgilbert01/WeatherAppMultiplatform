import WeatherAppMultiplatform
import RxSwift

class ObservableImpl<T> : Rx_proxyObservable {
    
    init(observable: RxSwift.Observable<T>) {
      self.swiftObservable = observable
    }

    var swiftObservable: RxSwift.Observable<T>
    
    func subscribe(onNext: @escaping (Any?) -> Void, onError: @escaping (KotlinThrowable) -> Void) -> Rx_proxyDisposable {
           return DisposableImpl(disposable:
            self.swiftObservable.subscribe { event in
                
                switch event {
                    
                case .next(let value):
                    onNext(value)
                case .error(let error):
                    onError(self.convertToKotlinThrowable(error: error))
                default:
                    break
                }
            }
           )
       }
    
    func subscribeOn(scheduler: Rx_proxyScheduler) -> Rx_proxyObservable {
        return self
    }
    
    func observeOn(scheduler: Rx_proxyScheduler) -> Rx_proxyObservable {
        return self
    }
    
    func delay(millisec: Int64) -> Rx_proxyObservable {
        return ObservableImpl(observable: swiftObservable.delay(
                .milliseconds(Int(millisec)),
                scheduler: MainScheduler.instance))
    }
    
    private func convertToKotlinThrowable (error: Error)-> KotlinThrowable {
        return KotlinThrowable(message: error.localizedDescription)
    }
}
