/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString;

@interface SAUISayIt : SABaseClientBoundCommand

@property (nonatomic,retain) id<SAAceSerializable> context; 
@property (nonatomic,copy) NSNumber * listenAfterSpeaking; 
@property (nonatomic,copy) NSString * message; 
+(id)sayIt;
+(id)sayItWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)_afui_usefulUserResultType;
-(id<SAAceSerializable>)context;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setContext:(id<SAAceSerializable>)arg1 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(NSNumber *)listenAfterSpeaking;
-(void)setListenAfterSpeaking:(NSNumber *)arg1 ;
-(id)encodedClassName;
@end

