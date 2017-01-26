/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:52:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/PSUISoftwareUpdateManagerDelegate.h>

@class PSUISoftwareUpdateManager, PSSpecifier, PSSoftwareUpdateTitleCell, NSError, NSString, UsageStorageController;

@interface PSUISoftwareUpdateController : PSListController <DevicePINControllerDelegate, UITableViewDelegate, PSUISoftwareUpdateManagerDelegate> {

	PSUISoftwareUpdateManager* _manager;
	PSSpecifier* _titleGroup;
	PSSoftwareUpdateTitleCell* _titleCell;
	PSSpecifier* _installButtonGroup;
	PSSpecifier* _installButtonSpecifier;
	NSError* _suError;
	BOOL _disableInstallButton;
	BOOL _showingTerms;
	NSString* _devicePasscode;
	UsageStorageController* _usageStorageController;
	BOOL _hideInsufficientStorageUI;
	BOOL _refreshOnNextAppearance;
	/*^block*/id _devicePasscodeCompletion;

}

@property (nonatomic,retain) NSError * SUError;                      //@synthesize suError=_suError - In the implementation block
@property (nonatomic,copy) id devicePasscodeCompletion;              //@synthesize devicePasscodeCompletion=_devicePasscodeCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)willEnterForeground;
-(void)resumeDownload:(id)arg1 ;
-(void)updateState;
-(Class)tableViewClass;
-(id)controllerForSpecifier:(id)arg1 ;
-(void)devicePINControllerDidDismissPINPane:(id)arg1 ;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)setSUError:(id)arg1 disableButton:(BOOL)arg2 reload:(BOOL)arg3 ;
-(void)refreshState;
-(void)showStorageHelpLinkIfNeededOnFooterForGroup:(id)arg1 error:(id)arg2 ;
-(id)specifiersForState:(int)arg1 ;
-(void)manager:(id)arg1 didTransitionToState:(int)arg2 fromState:(int)arg3 error:(id)arg4 ;
-(void)setSUError:(NSError *)arg1 ;
-(void)downloadAndInstall:(id)arg1 ;
-(void)install:(id)arg1 ;
-(void)autoInstallCancelPrompt:(id)arg1 ;
-(void)presentError:(id)arg1 ;
-(void)setShowsTermsProgress:(BOOL)arg1 ;
-(void)autoInstallCancel:(id)arg1 ;
-(void)detailedReleaseNotesDonePressed:(id)arg1 ;
-(void)setDevicePasscodeCompletion:(id)arg1 ;
-(id)devicePasscodeCompletion;
-(void)manager:(id)arg1 downloadProgressChanged:(id)arg2 displayStyle:(int)arg3 ;
-(void)manager:(id)arg1 promptForDevicePasscodeWithCompletion:(/*^block*/id)arg2 ;
-(void)manager:(id)arg1 scanFoundUpdate:(id)arg2 error:(id)arg3 ;
-(void)manager:(id)arg1 download:(id)arg2 failedWithError:(id)arg3 ;
-(NSError *)SUError;
-(id)specifiers;
@end

