/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPlayButton.h>
#import <libobjc.A.dylib/MPUNowPlayingDelegate.h>

@class NSString;

@interface SPUISearchPlayButton : SKUIPlayButton <MPUNowPlayingDelegate> {

	BOOL _local;
	unsigned long long _trackID;

}

@property (assign) unsigned long long trackID;                      //@synthesize trackID=_trackID - In the implementation block
@property (getter=isLocal) BOOL local;                              //@synthesize local=_local - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)startListeningForPlayback;
+(void)stopListeningForPlayback;
-(id)init;
-(void)setTrackID:(unsigned long long)arg1 ;
-(void)nowPlayingController:(id)arg1 playbackStateDidChange:(BOOL)arg2 ;
-(void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(double)arg2 ;
-(unsigned long long)trackID;
-(BOOL)isLocal;
-(void)setLocal:(BOOL)arg1 ;
-(void)buttonPressed;
-(void)updateWithTrackID:(unsigned long long)arg1 local:(BOOL)arg2 ;
-(BOOL)thisTrackIsActive;
-(void)updateProgressForCurrentlyActiveTrackAnimated:(BOOL)arg1 ;
@end

