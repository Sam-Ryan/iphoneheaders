/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/GKSPerformance.framework/GKSPerformance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GKSPerformance/GKSPerformance-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AudioTier : NSObject <NSCopying> {

	unsigned mode;
	unsigned tier;
	unsigned duplication;
	unsigned bundling;
	unsigned codecPayload;
	unsigned codecBitrate;
	double duration;

}

@property (assign) unsigned mode; 
@property (assign) unsigned tier; 
@property (assign) unsigned duplication; 
@property (assign) unsigned bundling; 
@property (assign) unsigned codecPayload; 
@property (assign) unsigned codecBitrate; 
@property (assign) double duration; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(id)initWithMode:(unsigned)arg1 tier:(unsigned)arg2 duplication:(unsigned)arg3 bundling:(unsigned)arg4 codecPayload:(unsigned)arg5 codecBitrate:(unsigned)arg6 ;
-(unsigned)tier;
-(unsigned)duplication;
-(unsigned)bundling;
-(unsigned)codecPayload;
-(unsigned)codecBitrate;
-(void)setTier:(unsigned)arg1 ;
-(void)setDuplication:(unsigned)arg1 ;
-(void)setBundling:(unsigned)arg1 ;
-(void)setCodecPayload:(unsigned)arg1 ;
-(void)setCodecBitrate:(unsigned)arg1 ;
@end

