/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVPlayerItemLegibleOutputDependencyFactory, OS_dispatch_queue;
@class NSArray, AVWeakReferencingDelegateStorage, NSObject, AVWeakReference, NSString;

@interface AVPlayerItemLegibleOutputInternal : NSObject {

	id<AVPlayerItemLegibleOutputDependencyFactory> dependencyFactory;
	NSArray* nativeRepresentationSubtypes;
	AVWeakReferencingDelegateStorage* delegateStorage;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	AVWeakReference* weakReferenceToHost;
	BOOL suppressesPlayerRendering;
	double advanceInterval;
	NSString* textStylingResolution;

}
@end

