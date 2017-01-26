/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, MPAVItem, MPAVController, NSHashTable;

@interface RUPreviewSession : NSObject {

	NSArray* _items;
	MPAVItem* _currentItem;
	MPAVController* _player;
	NSHashTable* _sessionObservers;
	double _customTrackPreviewDuration;

}

@property (nonatomic,readonly) double currentItemDuration; 
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) MPAVItem * currentItem; 
@property (assign,nonatomic) double customTrackPreviewDuration;              //@synthesize customTrackPreviewDuration=_customTrackPreviewDuration - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;                         //@synthesize items=_items - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
-(void)dealloc;
-(NSArray *)items;
-(void)start;
-(id)initWithItems:(id)arg1 ;
-(MPAVItem *)currentItem;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(void)_playbackStateChangedNotification:(id)arg1 ;
-(void)_unregisterForPlayerNotifications;
-(void)_registerForPlayerNotifications;
-(double)currentTime;
-(BOOL)isPlaying;
-(void)_isExplicitTracksEnabledDidChangeNotification:(id)arg1 ;
-(void)stopWithOptions:(long long)arg1 fadeoutDuration:(double)arg2 ;
-(void)_didStopWithOptions:(long long)arg1 finalItem:(id)arg2 didFinalItemPlayToCompletion:(BOOL)arg3 ;
-(void)_didChangeFromItem:(id)arg1 toItem:(id)arg2 ;
-(double)currentItemDuration;
-(void)addSessionObserver:(id)arg1 ;
-(void)removeSessionObserver:(id)arg1 ;
-(double)customTrackPreviewDuration;
-(void)setCustomTrackPreviewDuration:(double)arg1 ;
-(void)_itemWillChangeNotification:(id)arg1 ;
@end

