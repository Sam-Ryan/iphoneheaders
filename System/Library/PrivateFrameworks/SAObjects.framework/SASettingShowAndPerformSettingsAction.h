/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SASettingShowAndPerformSettingsAction : SABaseClientBoundCommand

@property (nonatomic,retain) id<SASettingSettingsAction> settingsAction; 
+(id)showAndPerformSettingsAction;
+(id)showAndPerformSettingsActionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(id<SASettingSettingsAction>)settingsAction;
-(void)setSettingsAction:(id<SASettingSettingsAction>)arg1 ;
-(id)encodedClassName;
@end

