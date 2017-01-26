/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObjectNSCopying, OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSString, NSMutableArray, NSObject;

@interface AVChapterMetadataItemInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigAssetRef figAsset;
	long long chapterGroupIndex;
	long long chapterIndex;
	NSString* chapterType;
	NSString* extendedLanguageTag;
	NSString* languageCode;
	NSString* chapterDataType;
	id<NSObject><NSCopying> value;
	SCD_Struct_CM5 time;
	SCD_Struct_CM5 duration;
	long long valueStatus;
	int valueErrorCode;
	NSMutableArray* completions;
	NSObject*<OS_dispatch_queue> readWriteQueue;

}
@end

