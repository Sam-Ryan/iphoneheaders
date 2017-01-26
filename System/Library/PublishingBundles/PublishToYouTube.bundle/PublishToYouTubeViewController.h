/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:01:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PublishingBundles/PublishToYouTube.bundle/PublishToYouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <libobjc.A.dylib/YTAuthenticatorDelegate.h>

@protocol PublishToYouTubeAgentDelegate;
@class UIAlertView, YTCategoriesRequest, NSArray, NSURL, NSString, UITableView, UIView, CategoryCell, NSMutableArray, PLTableViewEditableCell, UITableViewCell, UIPickerView, PublishContainerView, PublishFooterTextView, UIButton, ACAccountStore, SLGoogleWebAuthController;

@interface PublishToYouTubeViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIPickerViewDelegate, YTAuthenticatorDelegate> {

	id<PublishToYouTubeAgentDelegate> _delegate;
	UIAlertView* _loginPopup;
	YTCategoriesRequest* _request;
	NSArray* _categories;
	int _categoriesRequestRetryCount;
	UIAlertView* _categoriesErrorAlert;
	UIAlertView* _authenticationFailedAlert;
	UIAlertView* _accountAlert;
	UIAlertView* _captchaRequiredAlert;
	NSURL* _captchaURL;
	NSString* _cachedAccountName;
	UITableView* _table;
	UIView* _containerView;
	CategoryCell* _categoryCell;
	NSMutableArray* _tagCells;
	PLTableViewEditableCell* _titleCell;
	PLTableViewEditableCell* _descriptionCell;
	PLTableViewEditableCell* _optionCells[2];
	UITableViewCell* _accessCells[3];
	UITableViewCell* _accountCell;
	UIPickerView* _picker;
	UIView* _pickerContainer;
	PublishContainerView* _footerContainerView;
	PublishFooterTextView* _footerTextView;
	UIButton* _footerLinkView;
	BOOL _showingPicker;
	float _descriptionHeight;
	BOOL _publishEnabled;
	NSString* _defaultCategory;
	BOOL _publishDidCancel;
	BOOL _userDidStartEditing;
	BOOL _showHDSection;
	BOOL _enableHDSection;
	int _option;
	int _access;
	long long _hdSize;
	long long _sdSize;
	BOOL _showingAuthSheet;
	ACAccountStore* _accountStore;
	SLGoogleWebAuthController* _webAuthController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)publish;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(int)option;
-(void)automaticKeyboardDidShow:(id)arg1 ;
-(void)automaticKeyboardDidHide:(id)arg1 ;
-(void)editableCellDidBeginEditing:(id)arg1 ;
-(void)editableCellReturnPressed:(id)arg1 ;
-(void)editableCell:(id)arg1 textChanged:(id)arg2 ;
-(void)editableTagCellEndOfTagCharacterPressed:(id)arg1 ;
-(int)access;
-(void)authenticatorNeedsToken:(id)arg1 ;
-(void)categoriesRequest:(id)arg1 receivedCategories:(id)arg2 ;
-(void)categoriesRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_selectComedyPickerRow;
-(id)_categoryCell;
-(void)_updateAccountCell;
-(void)_addNewTagCell;
-(void)_unshrinkView;
-(void)_shrinkView;
-(void)orderOutKeyboard;
-(long long)_indexOfBlankTagCellOtherThan:(id)arg1 ;
-(void)resignResponder;
-(id)initShowingHDSection:(BOOL)arg1 enableHDSection:(BOOL)arg2 hdSize:(long long)arg3 sdSize:(long long)arg4 ;
-(id)publishTitle;
-(id)publishDescription;
-(id)publishTags;
-(id)publishCategory;
-(id)publishPrivacyStatus;
-(void)setEnableHDUploadOption:(BOOL)arg1 ;
-(void)containerViewFrameDidChangeWithSplitKeyboard:(BOOL)arg1 ;
-(void)_authenticationStateChanged:(id)arg1 ;
-(void)_cleanupCategoriesRequest;
-(void)_requestCategories;
-(id)_singleCharacterTag;
-(void)termsOfUsePressed:(id)arg1 ;
-(id)_accountString;
-(void)_setCategories:(id)arg1 ;
-(void)_updateNavigationBarWithTitleText:(id)arg1 ;
-(void)_showLoginPopup;
-(void)_refreshToken:(/*^block*/id)arg1 ;
-(void)sheetReturnKeyPressed:(id)arg1 ;
-(void)_showPicker;
-(void)_hidePicker;
@end

