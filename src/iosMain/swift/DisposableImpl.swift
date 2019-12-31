import RxSwift
import WeatherAppMultiplatform

class DisposableImpl : Rx_proxyDisposable {
    
    init(disposable: RxSwift.Disposable) {
        self.disposable = disposable
    }
    
    private var disposable: RxSwift.Disposable
    
    func dispose() {
        disposable.dispose()
    }

    func isDisposed() -> Bool {
        return false
    }
}
