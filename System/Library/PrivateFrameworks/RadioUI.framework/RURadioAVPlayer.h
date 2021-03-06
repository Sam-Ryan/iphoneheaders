/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUAVPlayer.h>

@protocol OS_dispatch_queue;
@class RURadioStationPlaybackMetadata, NSObject, RadioStation;

@interface RURadioAVPlayer : MPUAVPlayer {

	BOOL _checkedDefaultsForLastPlayedStation;
	RURadioStationPlaybackMetadata* _lastPlayedStationMetadata;
	NSObject*<OS_dispatch_queue> _lastPlayedStationSaveQueue;
	NSObject*<OS_dispatch_queue> _radioUIAccessQueue;
	BOOL _banningCurrentItemShouldSkipToNextItem;

}

@property (nonatomic,readonly) RadioStation * currentStation; 
@property (nonatomic,retain) RURadioStationPlaybackMetadata * lastPlayedStationMetadata; 
@property (assign,nonatomic) BOOL banningCurrentItemShouldSkipToNextItem;                             //@synthesize banningCurrentItemShouldSkipToNextItem=_banningCurrentItemShouldSkipToNextItem - In the implementation block
-(void)dealloc;
-(id)init;
-(void)_itemLikedStateDidChangeNotification:(id)arg1 ;
-(void)_previewSessionDidStopNotification:(id)arg1 ;
-(void)_feederContentsDidChangeNotification:(id)arg1 ;
-(RURadioStationPlaybackMetadata *)lastPlayedStationMetadata;
-(void)_updateLastPlayedStationMetadata;
-(void)setLastPlayedStationMetadata:(RURadioStationPlaybackMetadata *)arg1 ;
-(RadioStation *)currentStation;
-(BOOL)banningCurrentItemShouldSkipToNextItem;
-(void)setBanningCurrentItemShouldSkipToNextItem:(BOOL)arg1 ;
-(BOOL)beginPlaybackWithCoordinator:(id)arg1 ;
-(BOOL)beginOrTogglePlaybackWithCoordinator:(id)arg1 ;
@end

