/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAction.h>

@class NSString;

@interface MCActionTrigger : MCAction {

	NSString* _actionKey;

}

@property (copy) NSString * actionKey;              //@synthesize actionKey=_actionKey - In the implementation block
+(id)actionTriggerForTargetPlugObjectID:(id)arg1 withActionKey:(id)arg2 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(void)demolish;
-(id)description;
-(void)setActionKey:(NSString *)arg1 ;
-(NSString *)actionKey;
-(id)imprint;
@end

