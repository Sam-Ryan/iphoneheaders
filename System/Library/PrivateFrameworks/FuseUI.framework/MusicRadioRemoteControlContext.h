/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MusicAVPlayer, RadioStation, MPAVItem;

@interface MusicRadioRemoteControlContext : NSObject {

	MusicAVPlayer* _player;
	RadioStation* _radioStation;
	long long _trackID;
	MPAVItem* _currentlyPlayingItem;

}

@property (nonatomic,readonly) MusicAVPlayer * player;                       //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) RadioStation * radioStation;                  //@synthesize radioStation=_radioStation - In the implementation block
@property (nonatomic,readonly) long long trackID;                            //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) MPAVItem * currentlyPlayingItem;              //@synthesize currentlyPlayingItem=_currentlyPlayingItem - In the implementation block
-(MusicAVPlayer *)player;
-(id)initWithPlayer:(id)arg1 mediaRemoteOptions:(id)arg2 ;
-(MPAVItem *)currentlyPlayingItem;
-(RadioStation *)radioStation;
-(long long)trackID;
@end

