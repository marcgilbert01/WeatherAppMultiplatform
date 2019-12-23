#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class WAMWeather, WAMObserveCurrentWeatherForACityUseCaseParams, WAMKotlinThrowable, WAMKotlinArray;

@protocol WAMOneCityContractPresenter, WAMWeatherRepo, WAMUseCase, WAMObserveCurrentWeatherForACityUseCase, WAMRx_proxyObservable, WAMRx_proxyScheduler, WAMRx_proxyDisposable, WAMKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wnullability"

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface WAMMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface WAMMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface WAMNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface WAMByte : WAMNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface WAMUByte : WAMNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface WAMShort : WAMNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface WAMUShort : WAMNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface WAMInt : WAMNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface WAMUInt : WAMNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface WAMLong : WAMNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface WAMULong : WAMNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface WAMFloat : WAMNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface WAMDouble : WAMNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface WAMBoolean : WAMNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("BaseMapperToData")))
@interface WAMBaseMapperToData : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)mapToDataToBeTransformed:(id _Nullable)toBeTransformed __attribute__((swift_name("mapToData(toBeTransformed:)")));
- (NSArray<id> *)mapToDataList:(NSArray<id> *)list __attribute__((swift_name("mapToData(list:)")));
@end;

__attribute__((swift_name("BaseMapperToDomain")))
@interface WAMBaseMapperToDomain : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)mapToDomainToBeTransformed:(id _Nullable)toBeTransformed __attribute__((swift_name("mapToDomain(toBeTransformed:)")));
- (NSArray<id> *)mapToDomainList:(NSArray<id> *)list __attribute__((swift_name("mapToDomain(list:)")));
@end;

__attribute__((swift_name("BaseMapperToDomainWithoutInput")))
@interface WAMBaseMapperToDomainWithoutInput : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)mapToDomain __attribute__((swift_name("mapToDomain()")));
@end;

__attribute__((swift_name("BaseMapperToPresentation")))
@interface WAMBaseMapperToPresentation : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)mapToPresentationToBeTransformed:(id _Nullable)toBeTransformed __attribute__((swift_name("mapToPresentation(toBeTransformed:)")));
- (NSArray<id> *)mapToPresentationList:(NSArray<id> *)list __attribute__((swift_name("mapToPresentation(list:)")));
@end;

__attribute__((swift_name("UseCase")))
@protocol WAMUseCase
@required
- (id)buildUseCaseParams:(id _Nullable)params __attribute__((swift_name("buildUseCase(params:)")));
@end;

__attribute__((swift_name("UseCaseVoid")))
@protocol WAMUseCaseVoid
@required
- (id)buildUseCase __attribute__((swift_name("buildUseCase()")));
@end;

__attribute__((swift_name("OneCityContract")))
@protocol WAMOneCityContract
@required
@end;

__attribute__((swift_name("OneCityContractPresenter")))
@protocol WAMOneCityContractPresenter
@required
- (void)onViewStart __attribute__((swift_name("onViewStart()")));
- (void)onViewStop __attribute__((swift_name("onViewStop()")));
@end;

__attribute__((swift_name("OneCityContractView")))
@protocol WAMOneCityContractView
@required
- (void)displayCurrentTemperatureTemperature:(double)temperature __attribute__((swift_name("displayCurrentTemperature(temperature:)")));
- (void)displayCurrentWeatherStateWeatherState:(NSString *)weatherState __attribute__((swift_name("displayCurrentWeatherState(weatherState:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OneCityPresenter")))
@interface WAMOneCityPresenter : KotlinBase <WAMOneCityContractPresenter>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onViewStart __attribute__((swift_name("onViewStart()")));
- (void)onViewStop __attribute__((swift_name("onViewStop()")));
@end;

__attribute__((swift_name("WeatherRepo")))
@protocol WAMWeatherRepo
@required
- (WAMWeather *)getWeatherForOneCityCityId:(NSString *)cityId __attribute__((swift_name("getWeatherForOneCity(cityId:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherRepoImpl")))
@interface WAMWeatherRepoImpl : KotlinBase <WAMWeatherRepo>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (WAMWeather *)getWeatherForOneCityCityId:(NSString *)cityId __attribute__((swift_name("getWeatherForOneCity(cityId:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Weather")))
@interface WAMWeather : KotlinBase
- (instancetype)initWithStatus:(NSString * _Nullable)status temperature:(WAMInt * _Nullable)temperature __attribute__((swift_name("init(status:temperature:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (WAMInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (WAMWeather *)doCopyStatus:(NSString * _Nullable)status temperature:(WAMInt * _Nullable)temperature __attribute__((swift_name("doCopy(status:temperature:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) WAMInt * _Nullable temperature __attribute__((swift_name("temperature")));
@end;

__attribute__((swift_name("ObserveCurrentWeatherForACityUseCase")))
@protocol WAMObserveCurrentWeatherForACityUseCase <WAMUseCase>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ObserveCurrentWeatherForACityUseCaseParams")))
@interface WAMObserveCurrentWeatherForACityUseCaseParams : KotlinBase
- (instancetype)initWithCityId:(NSString *)cityId __attribute__((swift_name("init(cityId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (WAMObserveCurrentWeatherForACityUseCaseParams *)doCopyCityId:(NSString *)cityId __attribute__((swift_name("doCopy(cityId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cityId __attribute__((swift_name("cityId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ObserveCurrentWeatherForACityUseCaseImpl")))
@interface WAMObserveCurrentWeatherForACityUseCaseImpl : KotlinBase <WAMObserveCurrentWeatherForACityUseCase>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<WAMRx_proxyObservable>)buildUseCaseParams:(WAMObserveCurrentWeatherForACityUseCaseParams *)params __attribute__((swift_name("buildUseCase(params:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface WAMPlatform : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)platform __attribute__((swift_name("init()")));
- (NSString *)name __attribute__((swift_name("name()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sample")))
@interface WAMSample : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int32_t)checkMe __attribute__((swift_name("checkMe()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SampleKt")))
@interface WAMSampleKt : KotlinBase
+ (NSString *)hello __attribute__((swift_name("hello()")));
@end;

__attribute__((swift_name("Rx_proxyObservable")))
@protocol WAMRx_proxyObservable
@required
- (id<WAMRx_proxyObservable>)delayMillisec:(int64_t)millisec __attribute__((swift_name("delay(millisec:)")));
- (id<WAMRx_proxyObservable>)observeOnScheduler:(id<WAMRx_proxyScheduler>)scheduler __attribute__((swift_name("observeOn(scheduler:)")));
- (id<WAMRx_proxyDisposable>)subscribeOnNext:(void (^)(id _Nullable))onNext onError:(void (^)(WAMKotlinThrowable *))onError __attribute__((swift_name("subscribe(onNext:onError:)")));
- (id<WAMRx_proxyObservable>)subscribeOnScheduler:(id<WAMRx_proxyScheduler>)scheduler __attribute__((swift_name("subscribeOn(scheduler:)")));
@end;

__attribute__((swift_name("Rx_proxyScheduler")))
@protocol WAMRx_proxyScheduler
@required
@end;

__attribute__((swift_name("Rx_proxyDisposable")))
@protocol WAMRx_proxyDisposable
@required
- (void)dispose __attribute__((swift_name("dispose()")));
- (BOOL)isDisposed __attribute__((swift_name("isDisposed()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface WAMKotlinThrowable : KotlinBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(WAMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(WAMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (WAMKotlinArray *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) WAMKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface WAMKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(WAMInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<WAMKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol WAMKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
