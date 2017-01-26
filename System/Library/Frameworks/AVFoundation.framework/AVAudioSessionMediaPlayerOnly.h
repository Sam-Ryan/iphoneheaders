/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAudioSessionMediaPlayerOnlyInternal, NSString;

@interface AVAudioSessionMediaPlayerOnly : NSObject {

	AVAudioSessionMediaPlayerOnlyInternal* _audioSession;

}

@property (assign) id<AVAudioSessionDelegateMediaPlayerOnly> delegate; 
@property (readonly) NSString * category; 
@property (readonly) NSString * mode; 
@property (readonly) double preferredHardwareSampleRate; 
@property (readonly) double preferredIOBufferDuration; 
@property (readonly) BOOL inputIsAvailable; 
@property (readonly) double currentHardwareSampleRate; 
@property (readonly) long long currentHardwareInputNumberOfChannels; 
@property (readonly) long long currentHardwareOutputNumberOfChannels; 
@property (readonly) BOOL canEnterPIPMode; 
+(void)initialize;
-(void)setDelegate:(id<AVAudioSessionDelegateMediaPlayerOnly>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AVAudioSessionDelegateMediaPlayerOnly>)delegate;
-(NSString *)category;
-(NSString *)mode;
-(BOOL)canEnterPIPMode;
-(id)_weakReference;
-(void)_removeFPListeners;
-(void)_addFPListeners;
-(void)_setFigPlayer:(OpaqueFigPlayerRef)arg1 ;
-(BOOL)setActive:(BOOL)arg1 withFlags:(long long)arg2 error:(id*)arg3 ;
-(BOOL)setUsingLongFormAudio:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setPreferredHardwareSampleRate:(double)arg1 error:(id*)arg2 ;
-(BOOL)setPreferredIOBufferDuration:(double)arg1 error:(id*)arg2 ;
-(double)preferredHardwareSampleRate;
-(double)preferredIOBufferDuration;
-(BOOL)inputIsAvailable;
-(double)currentHardwareSampleRate;
-(long long)currentHardwareInputNumberOfChannels;
-(long long)currentHardwareOutputNumberOfChannels;
-(BOOL)setActive:(BOOL)arg1 error:(id*)arg2 ;
-(void)setApplicationAudioSession:(BOOL)arg1 ;
-(BOOL)isApplicationAudioSession;
-(BOOL)setCategory:(id)arg1 error:(id*)arg2 ;
-(BOOL)setMode:(id)arg1 error:(id*)arg2 ;
-(BOOL)setActivationContext:(id)arg1 error:(id*)arg2 ;
@end

