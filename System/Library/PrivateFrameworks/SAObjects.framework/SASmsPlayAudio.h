/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASmsSms;

@interface SASmsPlayAudio : SABaseClientBoundCommand

@property (nonatomic,retain) SASmsSms * message; 
+(id)playAudio;
+(id)playAudioWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)_afui_usefulUserResultType;
-(SASmsSms *)message;
-(void)setMessage:(SASmsSms *)arg1 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(id)encodedClassName;
@end

