/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBThermalDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,nonatomic) BOOL wasConnectedToWiFiWhenBrickedForThermalConditions; 
@property (nonatomic,readonly) BOOL suppressThermalWarning; 
-(void)setSuppressThermalWarning:(BOOL)arg1 ;
-(BOOL)suppressThermalWarning;
-(void)setWasConnectedToWiFiWhenBrickedForThermalConditions:(BOOL)arg1 ;
-(BOOL)wasConnectedToWiFiWhenBrickedForThermalConditions;
-(void)_bindAndRegisterDefaults;
@end

