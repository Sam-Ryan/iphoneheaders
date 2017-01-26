/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMKCaptureSessionConfigurationOptions : NSObject {

	BOOL _HDRDetectionEnabled;
	BOOL _use60FPSVideo;
	BOOL _useAlternateSlomoFront;
	BOOL _useAlternateSlomoRear;

}

@property (nonatomic,readonly) BOOL HDRDetectionEnabled;                 //@synthesize HDRDetectionEnabled=_HDRDetectionEnabled - In the implementation block
@property (nonatomic,readonly) BOOL use60FPSVideo;                       //@synthesize use60FPSVideo=_use60FPSVideo - In the implementation block
@property (nonatomic,readonly) BOOL useAlternateSlomoFront;              //@synthesize useAlternateSlomoFront=_useAlternateSlomoFront - In the implementation block
@property (nonatomic,readonly) BOOL useAlternateSlomoRear;               //@synthesize useAlternateSlomoRear=_useAlternateSlomoRear - In the implementation block
-(id)init;
-(BOOL)useAlternateSlomoFront;
-(BOOL)useAlternateSlomoRear;
-(BOOL)use60FPSVideo;
-(id)initWithHDRDetectionEnabled:(BOOL)arg1 use60FPSVideo:(BOOL)arg2 useAlternateSlomoFront:(BOOL)arg3 useAlternateSlomoRear:(BOOL)arg4 ;
-(BOOL)HDRDetectionEnabled;
@end

