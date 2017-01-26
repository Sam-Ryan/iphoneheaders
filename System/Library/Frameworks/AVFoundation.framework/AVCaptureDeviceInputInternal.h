/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVCallbackCancellation;
@class AVCaptureDevice, NSArray, AVWeakReference;

@interface AVCaptureDeviceInputInternal : NSObject {

	AVCaptureDevice* device;
	NSArray* ports;
	BOOL ready;
	BOOL authorizedForCamera;
	AVWeakReference* weakReference;
	id<AVCallbackCancellation> deviceOpenCallbackInvoker;

}
-(void)dealloc;
@end

