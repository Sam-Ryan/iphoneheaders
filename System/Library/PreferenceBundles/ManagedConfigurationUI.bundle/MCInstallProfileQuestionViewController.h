/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:35:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol MCProfileQuestionsControllerDelegate;
@class MCUIFieldCollection, NSString, UIAlertView, UITextField;

@interface MCInstallProfileQuestionViewController : UITableViewController <PSStateRestoration, UITextFieldDelegate> {

	MCUIFieldCollection* _fieldCollection;
	NSString* _previousResponseValue;
	BOOL _waitingForPasscodePreflight;
	int _outDirection;
	UIAlertView* _activeAlert;
	BOOL _showingKeyboard;
	BOOL _isLastQuestion;
	id<MCProfileQuestionsControllerDelegate> _questionsDelegate;
	UITextField* _textField;

}

@property (assign,nonatomic,__weak) id<MCProfileQuestionsControllerDelegate> questionsDelegate;              //@synthesize questionsDelegate=_questionsDelegate - In the implementation block
@property (assign,nonatomic) int outDirection;                                                               //@synthesize outDirection=_outDirection - In the implementation block
@property (nonatomic,retain) UITextField * textField;                                                        //@synthesize textField=_textField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2 ;
-(void)dealloc;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)alertViewCancel:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setOutDirection:(int)arg1 ;
-(UITextField *)textField;
-(void)_showKeyboard:(BOOL)arg1 ;
-(int)outDirection;
-(void)_setup;
-(void)_updateNavigationBar;
-(void)setTextField:(UITextField *)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)_showProgressIndicator;
-(void)_cancelActiveAlert:(BOOL)arg1 ;
-(id)initWithUserInput:(id)arg1 ;
-(void)stopWaitingForMoreInput;
-(void)updateWithUserInput:(id)arg1 ;
-(void)waitForMoreInput;
-(void)_questionFieldEmpty:(id)arg1 ;
-(void)_questionFieldNotEmpty:(id)arg1 ;
-(void)_hideKeyboard:(BOOL)arg1 ;
-(void)_continueOrFinish;
-(void)_preflightCurrentPayload;
-(void)_processResponseAndContinue;
-(void)_cancelInput;
-(void)_nextButtonClicked;
-(void)_cancelButtonClicked;
-(void)_disableRightButton;
-(void)_showNavButtonsAnimated:(BOOL)arg1 ;
-(void)_enableRightButton;
-(void)_tellDelegateDidFinishWithUserInputResponses:(id)arg1 ;
-(void)_finishInput;
-(void)_continueWithCurrentField;
-(void)_retryCurrentPasswordFieldWithError:(id)arg1 ;
-(void)_showErrorAlertWithError:(id)arg1 ;
-(void)_hideProgressIndicator;
-(void)_didFinishPasscodePreflightWithError:(id)arg1 ;
-(void)_didFinishPreflightWithError:(id)arg1 ;
-(void)_retryWithCurrentField;
-(void)_retryPayload;
-(void)_skipPayload;
-(void)_textFieldValueChanged:(id)arg1 ;
-(void)_configureQuestionField:(id)arg1 ;
-(void)_cancelPayload;
-(id<MCProfileQuestionsControllerDelegate>)questionsDelegate;
-(id)initWithFieldCollection:(id)arg1 ;
-(void)setQuestionsDelegate:(id<MCProfileQuestionsControllerDelegate>)arg1 ;
@end

