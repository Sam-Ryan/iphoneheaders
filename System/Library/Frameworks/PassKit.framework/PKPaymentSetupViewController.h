/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupPrivacyFooterViewDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class ACAccountStore, PKPaymentProvisioningController, PKPaymentCardOnFileDetailsViewController, PKPaymentWebService;

@interface PKPaymentSetupViewController : UIViewController <PKPaymentSetupPrivacyFooterViewDelegate> {

	ACAccountStore* _accountStore;
	BOOL _nextControllerPushed;
	PKPaymentProvisioningController* _provisioningController;
	PKPaymentCardOnFileDetailsViewController* _singleEligibleCardDetailsController;
	BOOL _allowsManualEntry;
	long long _context;
	id<PKPaymentSetupViewControllerDelegate> _delegate;

}

@property (nonatomic,retain,readonly) PKPaymentProvisioningController * provisioningController;              //@synthesize provisioningController=_provisioningController - In the implementation block
@property (assign,nonatomic) long long context;                                                              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) PKPaymentWebService * webService; 
@property (assign,nonatomic) BOOL allowsManualEntry;                                                         //@synthesize allowsManualEntry=_allowsManualEntry - In the implementation block
-(void)setDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<PKPaymentSetupViewControllerDelegate>)delegate;
-(void)loadView;
-(long long)context;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(unsigned long long)edgesForExtendedLayout;
-(void)setContext:(long long)arg1 ;
-(void)_next:(id)arg1 ;
-(id)_deviceSpecificLocalizedStringKeyForKey:(id)arg1 ;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3 ;
-(PKPaymentWebService *)webService;
-(PKPaymentProvisioningController *)provisioningController;
-(void)setAllowsManualEntry:(BOOL)arg1 ;
-(BOOL)allowsManualEntry;
-(void)privacyFooterLinkTapped:(id)arg1 ;
-(id)_configuredCardListViewControllerWithCardList:(id)arg1 ;
-(id)_configuredCardOnFileEntryViewControllerForCredential:(id)arg1 ;
-(id)_configuredManualCardEntryViewController;
-(void)_pushCardListViewController:(id)arg1 ;
-(void)_pushCardOnFileEntryViewControllerForCredential:(id)arg1 ;
-(void)_pushManualCardEntryViewController;
-(id)configuredNextActionViewController;
-(id)_contextSpecificStringForAggdKey:(id)arg1 ;
@end

