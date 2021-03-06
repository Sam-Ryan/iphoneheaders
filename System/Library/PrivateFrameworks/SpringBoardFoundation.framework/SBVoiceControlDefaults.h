/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBVoiceControlDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) BOOL disableVoiceControlForBluetoothRequests; 
@property (nonatomic,readonly) BOOL disableHandlerActions; 
@property (getter=isVoiceControlLoggingEnabled,nonatomic,readonly) BOOL voiceControlLoggingEnabled; 
-(void)setDisableVoiceControlForBluetoothRequests:(BOOL)arg1 ;
-(BOOL)disableVoiceControlForBluetoothRequests;
-(void)setDisableHandlerActions:(BOOL)arg1 ;
-(BOOL)disableHandlerActions;
-(void)setVoiceControlLoggingEnabled:(BOOL)arg1 ;
-(BOOL)isVoiceControlLoggingEnabled;
-(void)_bindAndRegisterDefaults;
@end

