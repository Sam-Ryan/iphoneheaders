/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAReminderDateTimeTriggerOffset : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * offsetTimeUnit; 
@property (nonatomic,copy) NSNumber * offsetValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dateTimeTriggerOffset;
+(id)dateTimeTriggerOffsetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)offsetTimeUnit;
-(void)setOffsetTimeUnit:(NSString *)arg1 ;
-(NSNumber *)offsetValue;
-(void)setOffsetValue:(NSNumber *)arg1 ;
-(id)encodedClassName;
@end

