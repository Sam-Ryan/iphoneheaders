/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ActiveSyncSettings.bundle/ActiveSyncSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccessUI/DASettingsAccountsUIController.h>
#import <libobjc.A.dylib/DAAutoDiscoveryConsumer.h>

@class ASExchangeIdView;

@interface ASSettingsAccountsUIController : DASettingsAccountsUIController <DAAutoDiscoveryConsumer> {

	unsigned _diagsVisibleValue;
	long long _autodiscoveryState;
	ASExchangeIdView* _exchangeIdView;

}

@property (assign,nonatomic) long long autodiscoveryState;                   //@synthesize autodiscoveryState=_autodiscoveryState - In the implementation block
@property (assign,nonatomic) unsigned diagsVisibleValue;                     //@synthesize diagsVisibleValue=_diagsVisibleValue - In the implementation block
@property (nonatomic,retain) ASExchangeIdView * exchangeIdView;              //@synthesize exchangeIdView=_exchangeIdView - In the implementation block
+(BOOL)isHotmailAccount;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3 ;
-(void)account:(id)arg1 wasAutoDiscovered:(BOOL)arg2 error:(id)arg3 ;
-(id)account;
-(id)accountSpecifiers;
-(void)setAutodiscoveryState:(long long)arg1 ;
-(ASExchangeIdView *)exchangeIdView;
-(void)setExchangeIdView:(ASExchangeIdView *)arg1 ;
-(id)_specifiersForMinimalAutodiscovery;
-(id)_specifiersForOptionalServerAutodiscovery;
-(id)_specifiersForCompletedAutodiscovery;
-(id)localizedAccountTitleString;
-(void)_transitionToOptionalServerAutodiscovery;
-(void)_transitionToCompletedAutodiscovery;
-(BOOL)autodiscoverAccount;
-(void)_tryUpdatingCompositeValueWithId:(id)arg1 fromValue:(id)arg2 forKey:(id)arg3 ;
-(id)localizedValidationFailureTitleString;
-(id)newDefaultAccount;
-(BOOL)transitionsAfterInitialSetup;
-(id)_defaultAccountDescription;
-(id)localizedConfirmSaveUnvalidatedAccountTitleString;
-(id)localizedConfirmSaveUnvalidatedAccountMessageString;
-(id)localizedAccountSetupTitleString;
-(long long)autodiscoveryState;
-(unsigned)diagsVisibleValue;
-(void)setDiagsVisibleValue:(unsigned)arg1 ;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountPropertyWithSpecifier:(id)arg1 ;
-(BOOL)validateAccount;
-(BOOL)haveEnoughValues;
@end
