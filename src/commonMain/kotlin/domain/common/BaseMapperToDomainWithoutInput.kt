package com.nowtv.domain.common

abstract class BaseMapperToDomainWithoutInput<TARGET> {

    abstract fun mapToDomain(): TARGET
}