/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAction.h>

@class NSMutableArray, NSArray;

@interface MCActionGroup : MCAction {

	NSMutableArray* _actions;

}

@property (nonatomic,readonly) NSArray * actions;                              //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) unsigned long long countOfActions; 
+(id)actionGroup;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(void)insertActions:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)actionAtIndex:(unsigned long long)arg1 ;
-(void)removeActionsAtIndices:(id)arg1 ;
-(void)insertAction:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)moveActionsAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)demolish;
-(id)init;
-(id)description;
-(NSArray *)actions;
-(void)removeAllActions;
-(void)addAction:(id)arg1 ;
-(void)addActions:(id)arg1 ;
-(unsigned long long)countOfActions;
-(id)imprint;
@end

