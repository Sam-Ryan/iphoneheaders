/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureBracketedStillImageSettings.h>

@interface AVCaptureManualExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings {

	SCD_Struct_CM5 _exposureDuration;
	float _ISO;

}

@property (readonly) SCD_Struct_CM5 exposureDuration;              //@synthesize exposureDuration=_exposureDuration - In the implementation block
@property (readonly) float ISO;                                    //@synthesize ISO=_ISO - In the implementation block
+(id)manualExposureSettingsWithExposureDuration:(SCD_Struct_CM5)arg1 ISO:(float)arg2 ;
-(id)description;
-(SCD_Struct_CM5)exposureDuration;
-(float)ISO;
-(id)_initManualExposureSettingsWithExposureDuration:(SCD_Struct_CM5)arg1 ISO:(float)arg2 ;
@end

