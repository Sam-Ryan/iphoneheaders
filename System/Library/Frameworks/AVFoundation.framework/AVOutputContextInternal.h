/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSObject, AVWeakReference;

@interface AVOutputContextInternal : NSObject {

	NSObject*<OS_dispatch_queue> pickerQueue;
	OpaqueFigEndpointPickerRef endpointPicker;
	CFStringRef contextUUID;
	BOOL isSystemPicker;
	unsigned long long pickerFeature;
	AVWeakReference* weakReference;
	int applicationPID;

}
@end

