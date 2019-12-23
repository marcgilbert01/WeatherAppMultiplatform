package com.nowtv.domain.common

abstract class BaseMapperToPresentation<SOURCE, TARGET> {

    abstract fun mapToPresentation(toBeTransformed: SOURCE): TARGET

    fun mapToPresentation(list: List<SOURCE>): List<TARGET> {
        return list.map { mapToPresentation(it) }
    }
}