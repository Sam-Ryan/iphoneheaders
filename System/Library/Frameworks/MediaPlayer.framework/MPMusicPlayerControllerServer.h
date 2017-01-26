/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMusicPlayerControllerServerInternal, MPAVController;

@interface MPMusicPlayerControllerServer : NSObject {

	MPMusicPlayerControllerServerInternal* _internal;

}

@property (nonatomic,readonly) MPAVController * player; 
+(id)sharedInstance;
+(void)startMusicPlayerControllerServerWithDelegate:(id)arg1 ;
+(BOOL)isMusicPlayerControllerServerRunning;
-(void)_runMigServer;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(MPAVController *)player;
@end

