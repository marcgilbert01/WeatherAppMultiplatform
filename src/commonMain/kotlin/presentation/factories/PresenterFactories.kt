package presentation.factories

import presentation.OneCityContract

interface PresenterFactories {

    fun createOneCityPresenter(view: OneCityContract.View): OneCityContract.Presenter
}