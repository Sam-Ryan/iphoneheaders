/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VKTileProvider;

@interface _VKTileProviderTimerTarget : NSObject {

	VKTileProvider* tileProvider;
	VKTileProvider* _tileProvider;

}

@property (assign,nonatomic) VKTileProvider * tileProvider;              //@synthesize tileProvider=_tileProvider - In the implementation block
-(void)timerFired:(id)arg1 ;
-(VKTileProvider *)tileProvider;
-(void)setTileProvider:(VKTileProvider *)arg1 ;
@end
