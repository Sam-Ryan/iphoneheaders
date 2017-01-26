/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAction.h>

@class NSString;

@interface MCStateOperation : MCAction {

	NSString* _stateKey;

}

@property (copy) NSString * stateKey;                          //@synthesize stateKey=_stateKey - In the implementation block
@property (assign,nonatomic) BOOL alwaysNotifies; 
@property (assign,nonatomic) BOOL recordsTime; 
+(id)stateOperationForTargetPlugObjectID:(id)arg1 withStateKey:(id)arg2 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(void)setAlwaysNotifies:(BOOL)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(void)setRecordsTime:(BOOL)arg1 ;
-(void)demolish;
-(BOOL)alwaysNotifies;
-(NSString *)stateKey;
-(BOOL)recordsTime;
-(void)setStateKey:(NSString *)arg1 ;
-(id)description;
-(id)imprint;
@end

