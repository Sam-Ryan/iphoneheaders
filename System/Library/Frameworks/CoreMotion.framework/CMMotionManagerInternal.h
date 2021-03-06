/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSOperationQueue, NSObject;

@interface CMMotionManagerInternal : NSObject {

	int fSampleLock;
	Dispatcher* fAccelerometerDispatcher;
	double fAccelerometerUpdateInterval;
	/*^block*/id fAccelerometerHandler;
	NSOperationQueue* fAccelerometerQueue;
	double fLastAccelerometerNotificationTimestamp;
	Sample fLatestAccelerometerSample;
	Dispatcher* fAmbientPressureDispatcher;
	double fAmbientPressureUpdateInterval;
	/*^block*/id fAmbientPressureHandler;
	NSOperationQueue* fAmbientPressureQueue;
	double fLastAmbientPressureNotificationTimestamp;
	Sample fLatestAmbientPressureSample;
	Dispatcher* fGyroDispatcher;
	double fGyroUpdateInterval;
	/*^block*/id fGyroHandler;
	NSOperationQueue* fGyroQueue;
	double fLastGyroNotificationTimestamp;
	Sample fLatestGyroSample;
	Dispatcher* fDeviceMotionDispatcher;
	double fDeviceMotionUpdateInterval;
	/*^block*/id fDeviceMotionHandler;
	NSOperationQueue* fDeviceMotionQueue;
	double fLastDeviceMotionNotificationTimestamp;
	Sample fLatestDeviceMotionSample;
	unsigned long long fAttitudeReferenceFrame;
	BOOL fCompassCalibrationHud;
	BOOL fShowCompassCalibrationHudOnResume;
	BOOL fHaveSentDeviceRequiresMovementError;
	unique_ptr<CLGeomagneticModelProvider_Type::Client, std::__1::default_delete<CLGeomagneticModelProvider_Type::Client> >* fGeomagneticModelProviderClient;
	SCD_Struct_CM17 fGeomagneticModel;
	BOOL fHaveSentTrueNorthUnavailableError;
	double fDeviceMotionStartTimestamp;
	Dispatcher* fMagnetometerDispatcher;
	double fMagnetometerUpdateInterval;
	/*^block*/id fMagnetometerHandler;
	NSOperationQueue* fMagnetometerQueue;
	double fLastMagnetometerNotificationTimestamp;
	Sample fLatestMagnetometerSample;
	BOOL fShowsDeviceMovementDisplay;
	Dispatcher* fPrivateAccelerometerDataDispatcher;
	/*function pointer*/void* fPrivateAccelerometerDataCallback;
	void* fPrivateAccelerometerDataCallbackInfo;
	Dispatcher* fPrivateGyroDataDispatcher;
	/*function pointer*/void* fPrivateGyroDataCallback;
	void* fPrivateGyroDataCallbackInfo;
	Dispatcher* fPrivateMagnetometerDataDispatcher;
	/*function pointer*/void* fPrivateMagnetometerDataCallback;
	void* fPrivateMagnetometerDataCallbackInfo;
	Dispatcher* fPrivateDeviceMotionDispatcher;
	/*function pointer*/void* fPrivateDeviceMotionCallback;
	void* fPrivateDeviceMotionCallbackInfo;
	BOOL fPrivateDeviceMotionUse9Axis;
	BOOL fPrivateUseAccelerometer;
	CLConnectionClient* fConnection;
	NSObject*<OS_dispatch_queue> fConnectionQueue;
	CFRunLoopTimerRef fWatchdogTimer;
	BOOL fSidebandSensorFusionEnabled;
	BOOL fSidebandSensorFusionLatency;
	BOOL fSidebandSensorFusionSnoop;
	unique_ptr<CLIspDataVisitor, std::__1::default_delete<CLIspDataVisitor> >* fSidebandVisitor;
	int fPrivatePowerConservationMode;
	/*function pointer*/void* fPrivateNotificationCallback;
	void* fPrivateNotificationCallbackInfo;
	Dispatcher* fPrivateDeviceMotionSensorStatusDispatcher;
	Dispatcher* fPrivateDeviceMotionAlgorithmDidResetDispatcher;
	/*function pointer*/void* fPrivateGyroBiasAndVarianceCallback;
	void* fPrivateGyroBiasAndVarianceCallbackInfo;
	Dispatcher* fPrivateGyroBiasAndVarianceDispatcher;
	/*function pointer*/void* fPrivateDeviceMotionCompassDataCallback;
	void* fPrivateDeviceMotionCompassDataCallbackInfo;
	Dispatcher* fPrivateDeviceMotionCompassDataDispatcher;
	/*function pointer*/void* fPrivateDeviceMotionCompassAlignmentCallback;
	void* fPrivateDeviceMotionCompassAlignmentCallbackInfo;
	Dispatcher* fPrivateDeviceMotionCompassAlignmentDispatcher;
	BOOL fInactive;

}
-(void)dealloc;
-(id)init;
-(void)teardownPrivate;
@end

