/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureInputPort, NSString;

@interface AVCaptureMetadataInputInternal : NSObject {

	AVCaptureInputPort* metadataPort;
	NSString* sourceID;
	opaqueCMFormatDescriptionRef desc;
	OpaqueCMClockRef clock;
	OpaqueCMBlockBufferRef emptyBoxedMetadata;

}
@end

