/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAsset.h>

@class NSMutableSet, NSSet;

@interface MCAssetAudio : MCAsset {

	NSMutableSet* mSongs;

}

@property (readonly) NSSet * songs; 
-(void)removeSong:(id)arg1 ;
-(void)addSong:(id)arg1 ;
-(void)demolish;
-(NSSet *)songs;
-(BOOL)isInUse;
@end
