/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TUSoundPlayer;

@interface TUCallSoundPlayer : NSObject {

	TUSoundPlayer* _player;

}

@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (nonatomic,retain) TUSoundPlayer * player;                       //@synthesize player=_player - In the implementation block
-(id)init;
-(BOOL)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2 ;
-(void)setPlayer:(TUSoundPlayer *)arg1 ;
-(TUSoundPlayer *)player;
-(BOOL)isPlaying;
-(void)stopPlaying;
@end
