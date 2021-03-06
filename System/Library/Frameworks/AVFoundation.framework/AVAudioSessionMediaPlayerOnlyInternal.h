/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVAudioSessionDelegateMediaPlayerOnly;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSString, NSDictionary;

@interface AVAudioSessionMediaPlayerOnlyInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigPlayerRef figPlayer;
	BOOL isAppAudioSession;
	BOOL isActive;
	NSString* category;
	NSString* mode;
	NSDictionary* activationContext;
	BOOL usingLongFormAudio;
	id<AVAudioSessionDelegateMediaPlayerOnly> delegate;

}
@end

