/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:52:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <Preferences/PSListItemsController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface PSUILTEOptionsController : PSListItemsController <UIAlertViewDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldShowVoiceOptions;
+(void)setVoiceEnabled:(BOOL)arg1 ;
+(BOOL)isVoiceEnabled;
+(void)_executeCTConnectionDependentBlock:(/*^block*/id)arg1 ;
+(unsigned long long)voiceAvailability;
+(BOOL)isOnCallOfSubType:(CFStringRef)arg1 ;
+(BOOL)isProvisioning;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)listItemSelected:(id)arg1 ;
-(void)updateProvisioning;
-(BOOL)presentOnCallAlertIfNeededForService:(unsigned long long)arg1 okayCompletion:(/*^block*/id)arg2 ;
-(void)presentCallCarrierAlert;
-(id)specifiers;
@end

