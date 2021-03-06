/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReplayKit/ReplayKit-Structs.h>
#import <libobjc.A.dylib/RPPreviewViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol RPScreenRecorderDelegate;
@class NSString;

@interface RPScreenRecorder : NSObject <RPPreviewViewControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate> {

	BOOL _recording;
	BOOL _microphoneEnabled;
	BOOL _available;
	id<RPScreenRecorderDelegate> _delegate;
	unsigned long long _previousAudioSessionOptions;
	NSString* _previousAudioCategory;

}

@property (assign,nonatomic,__weak) id<RPScreenRecorderDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isRecording,nonatomic) BOOL recording;                              //@synthesize recording=_recording - In the implementation block
@property (assign,getter=isMicrophoneEnabled,nonatomic) BOOL microphoneEnabled;              //@synthesize microphoneEnabled=_microphoneEnabled - In the implementation block
@property (assign,getter=isAvailable,nonatomic) BOOL available;                              //@synthesize available=_available - In the implementation block
@property (assign,nonatomic) unsigned long long previousAudioSessionOptions;                 //@synthesize previousAudioSessionOptions=_previousAudioSessionOptions - In the implementation block
@property (nonatomic,retain) NSString * previousAudioCategory;                               //@synthesize previousAudioCategory=_previousAudioCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRecorder;
-(void)setDelegate:(id<RPScreenRecorderDelegate>)arg1 ;
-(void)dealloc;
-(id<RPScreenRecorderDelegate>)delegate;
-(void)setAvailable:(BOOL)arg1 ;
-(BOOL)isAvailable;
-(BOOL)isRecording;
-(void)setRecording:(BOOL)arg1 ;
-(void)clientWillResignActive;
-(void)clientDidBecomeActive;
-(void)updateRecordingAvailability;
-(id)applicationWindow;
-(void)setWindowRotationLocked:(BOOL)arg1 ;
-(void)setMicrophoneEnabled:(BOOL)arg1 ;
-(void)configureAudioSession;
-(unsigned)currentWindowLayerContextID;
-(CGSize)currentWindowSize;
-(void)stopRecordingWithAdditionalShareFileAttachment:(id)arg1 overrideShareMessage:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)restoreAudioSession;
-(void)stopRecordingWithHandler:(/*^block*/id)arg1 ;
-(void)setPreviousAudioSessionOptions:(unsigned long long)arg1 ;
-(void)setPreviousAudioCategory:(NSString *)arg1 ;
-(unsigned long long)previousAudioSessionOptions;
-(NSString *)previousAudioCategory;
-(void)discardRecordingWithHandler:(/*^block*/id)arg1 ;
-(void)notifyDelegateOfRecorderAvailability;
-(BOOL)isScreenRecordingSupportedOnDevice;
-(void)startRecordingWithMicrophoneEnabled:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopRecordingWithVideoURLHandler:(/*^block*/id)arg1 ;
-(void)stopRecordingWithError:(id)arg1 movieURL:(id)arg2 ;
-(BOOL)isMicrophoneEnabled;
@end

