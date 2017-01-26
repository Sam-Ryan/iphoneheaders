/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSString, NSUUID;

@interface UIDevice : NSObject {

	long long _numDeviceOrientationObservers;
	float _batteryLevel;
	struct {
		unsigned batteryMonitoringEnabled : 1;
		unsigned proximityMonitoringEnabled : 1;
		unsigned expectsFaceContactInLandscape : 1;
		unsigned orientation : 3;
		unsigned batteryState : 2;
		unsigned proximityState : 1;
		unsigned hasTouchPadOverride : 1;
		unsigned hasTouchPad : 1;
	}  _deviceFlags;

}

@property (nonatomic,readonly) NSString * hwMachine; 
@property (assign,nonatomic) long long orientation; 
@property (nonatomic,retain,readonly) NSString * buildVersion; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * localizedModel; 
@property (nonatomic,readonly) NSString * systemName; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) long long orientation; 
@property (nonatomic,readonly) NSUUID * identifierForVendor; 
@property (getter=isGeneratingDeviceOrientationNotifications,nonatomic,readonly) BOOL generatesDeviceOrientationNotifications; 
@property (assign,getter=isBatteryMonitoringEnabled,nonatomic) BOOL batteryMonitoringEnabled; 
@property (nonatomic,readonly) long long batteryState; 
@property (nonatomic,readonly) float batteryLevel; 
@property (assign,getter=isProximityMonitoringEnabled,nonatomic) BOOL proximityMonitoringEnabled; 
@property (nonatomic,readonly) BOOL proximityState; 
@property (getter=isMultitaskingSupported,nonatomic,readonly) BOOL multitaskingSupported; 
@property (nonatomic,readonly) long long userInterfaceIdiom; 
@property (assign,setter=_setBacklightLevel:,nonatomic) float _backlightLevel; 
+(BOOL)_isLowEnd;
+(id)modelSpecificLocalizedStringKeyForKey:(id)arg1 ;
+(id)currentDevice;
+(long long)currentDeviceOrientationAllowingAmbiguous:(BOOL)arg1 ;
+(BOOL)_isWatch;
+(BOOL)_isWatchCompanion;
-(NSString *)hwMachine;
-(BOOL)_notesDeviceSupportsBodyLettpress;
-(CGSize)_notesDeviceDrawingSize;
-(BOOL)_notesLowEndHardware;
-(id)_notesProductType;
-(id)_deviceInfoForKey:(CFStringRef)arg1 ;
-(long long)_graphicsQualityIncludingMediumN41:(BOOL)arg1 ;
-(id)_mediumQualityProductsIncludingN41:(BOOL)arg1 ;
-(id)_currentProduct;
-(long long)sbf_bannerGraphicsQuality;
-(long long)sbf_controlCenterGraphicsQuality;
-(id)_tapticEngine;
-(BOOL)_supportsHapticFeedback;
-(long long)_keyboardGraphicsQuality;
-(long long)_predictionGraphicsQuality;
-(void)_setProximityState:(BOOL)arg1 ;
-(long long)_graphicsQuality;
-(BOOL)_supportsDeepColor;
-(BOOL)_supportsForceTouch;
-(BOOL)_hasGraphicsQualityOverride;
-(void)_setBatteryState:(long long)arg1 ;
-(void)_setBatteryLevel:(float)arg1 ;
-(BOOL)_isTTYEnabled;
-(BOOL)_hasTouchPad;
-(void)_setHasTouchPad:(BOOL)arg1 ;
-(void)_setGraphicsQualityOverride:(long long)arg1 ;
-(void)_clearGraphicsQualityOverride;
-(void)_enableDeviceOrientationEvents:(BOOL)arg1 ;
-(long long)userInterfaceIdiom;
-(void)_unregisterForSystemSounds:(id)arg1 ;
-(void)_registerForSystemSounds:(id)arg1 ;
-(NSString *)name;
-(void)setOrientation:(long long)arg1 ;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)isGeneratingDeviceOrientationNotifications;
-(long long)orientation;
-(void)_setActiveUserInterfaceIdiom:(long long)arg1 ;
-(void)_setBacklightLevel:(float)arg1 ;
-(float)_backlightLevel;
-(void)setProximityMonitoringEnabled:(BOOL)arg1 ;
-(BOOL)isProximityMonitoringEnabled;
-(NSString *)systemVersion;
-(BOOL)_isSystemSoundEnabled;
-(void)beginGeneratingDeviceOrientationNotifications;
-(void)endGeneratingDeviceOrientationNotifications;
-(NSString *)model;
-(void)_playSystemSound:(unsigned)arg1 ;
-(id)_deviceInfoForKey:(CFStringRef)arg1 ;
-(void)_updateSystemSoundActiveStatus:(id)arg1 ;
-(id)_defaultSimulatorName;
-(NSString *)localizedModel;
-(NSString *)systemName;
-(NSString *)buildVersion;
-(NSUUID *)identifierForVendor;
-(BOOL)isBatteryMonitoringEnabled;
-(void)setBatteryMonitoringEnabled:(BOOL)arg1 ;
-(long long)batteryState;
-(float)batteryLevel;
-(void)_setExpectsFaceContactInLandscape:(BOOL)arg1 ;
-(BOOL)proximityState;
-(BOOL)isMultitaskingSupported;
-(void)playInputClick;
-(float)_softwareDimmingAlpha;
-(void)_playInputSelectSound;
-(void)_playInputDeleteSound;
@end

