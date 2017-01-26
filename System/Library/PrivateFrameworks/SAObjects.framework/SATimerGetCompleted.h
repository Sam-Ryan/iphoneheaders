/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SATimerObject, NSString;

@interface SATimerGetCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SATimerObject * timer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)getCompleted;
+(id)getCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTimer:(SATimerObject *)arg1 ;
-(SATimerObject *)timer;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

