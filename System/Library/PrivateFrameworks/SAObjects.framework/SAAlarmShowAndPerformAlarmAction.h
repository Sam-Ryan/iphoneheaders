/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SAAlarmShowAndPerformAlarmAction : SABaseClientBoundCommand

@property (nonatomic,retain) id<SAAlarmAlarmAction> alarmAction; 
+(id)showAndPerformAlarmAction;
+(id)showAndPerformAlarmActionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(id<SAAlarmAlarmAction>)alarmAction;
-(void)setAlarmAction:(id<SAAlarmAlarmAction>)arg1 ;
-(id)encodedClassName;
@end

