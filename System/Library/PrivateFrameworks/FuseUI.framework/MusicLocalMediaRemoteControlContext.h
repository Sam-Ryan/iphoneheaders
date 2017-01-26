/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MusicAVPlayer, MPAVItem;

@interface MusicLocalMediaRemoteControlContext : NSObject {

	MusicAVPlayer* _player;
	MPAVItem* _currentlyPlayingItem;
	unsigned long long _itemPersistentID;

}

@property (nonatomic,readonly) MusicAVPlayer * player;                           //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) MPAVItem * currentlyPlayingItem;                  //@synthesize currentlyPlayingItem=_currentlyPlayingItem - In the implementation block
@property (nonatomic,readonly) unsigned long long itemPersistentID;              //@synthesize itemPersistentID=_itemPersistentID - In the implementation block
-(MusicAVPlayer *)player;
-(id)initWithPlayer:(id)arg1 mediaRemoteOptions:(id)arg2 ;
-(MPAVItem *)currentlyPlayingItem;
-(unsigned long long)itemPersistentID;
@end

