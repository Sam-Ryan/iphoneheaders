/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABAbstractViewController.h>
#import <libobjc.A.dylib/CNContactViewControllerAddContactPresenter.h>
#import <libobjc.A.dylib/CNAvatarCardControllerDelegate.h>
#import <libobjc.A.dylib/ABNewPersonViewControllerDelegate.h>
#import <libobjc.A.dylib/ABMembersControllerDelegate.h>
#import <libobjc.A.dylib/ABViewControllerBannerViewProtocol.h>
#import <libobjc.A.dylib/ABPersonEditDelegate.h>

@class ABMembersController, _UIAccessDeniedView, CNAvatarCardController, CNContactStore, CNContact, NSString;

@interface ABMembersViewController : ABAbstractViewController <CNContactViewControllerAddContactPresenter, CNAvatarCardControllerDelegate, ABNewPersonViewControllerDelegate, ABMembersControllerDelegate, ABViewControllerBannerViewProtocol, ABPersonEditDelegate> {

	ABMembersController* _membersController;
	int _insertionProperty;
	id _insertionValue;
	id _insertionLabel;
	int _rightButtonBehavior;
	int _leftButtonBehavior;
	BOOL _shouldHandleExternalChangeOnPersonViewControllers;
	_UIAccessDeniedView* _accessDeniedView;
	CNAvatarCardController* _cardController;
	CNContactStore* _contactStore;

}

@property (readonly) BOOL allowsCancel; 
@property (readonly) BOOL allowsCardEditing; 
@property (readonly) BOOL shouldShowGroups; 
@property (readonly) CNContact * unsavedContact; 
@property (readonly) BOOL isSearchingWithNoContactSelected; 
@property (nonatomic,readonly) _UIAccessDeniedView * accessDeniedView;              //@synthesize accessDeniedView=_accessDeniedView - In the implementation block
@property (nonatomic,retain) CNAvatarCardController * cardController;               //@synthesize cardController=_cardController - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                         //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)applicationDidResume;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)loadView;
-(id)tableView;
-(id)model;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_AB0*)arg1 ;
-(id)defaultPNGName;
-(BOOL)canHandleSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateView;
-(id)initWithModel:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)refreshEverythingNow;
-(int)abViewControllerType;
-(void)modelDatabaseChange:(id)arg1 ;
-(BOOL)shouldShowGroups;
-(void)membersControllerWillStartSearching:(id)arg1 ;
-(void)membersControllerDidEndServerSearch:(id)arg1 ;
-(void)membersControllerWillEndSearching:(id)arg1 ;
-(void)membersControllerDidEndSearching:(id)arg1 ;
-(BOOL)selectAndScrollMemberVisible:(void*)arg1 ;
-(BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3 ;
-(BOOL)showCardForPerson:(void*)arg1 animate:(BOOL)arg2 ;
-(void)showInsertEditorForPerson:(void*)arg1 animate:(BOOL)arg2 ;
-(void)personWasSelected:(void*)arg1 ;
-(BOOL)membersController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2 ;
-(BOOL)allowsShowingPersonsCards;
-(void)scrollMemberToTop:(void*)arg1 ;
-(void)resetStateForDisplayedFilterChange;
-(void)cancelSearching:(id)arg1 ;
-(void)setBannerTitle:(id)arg1 value:(id)arg2 ;
-(void)_applicationEnteringForeground;
-(void)_applicationEnteringBackground;
-(void)_updateForModel;
-(void)updateNavigationButtonsAnimated:(BOOL)arg1 ;
-(void)startRefreshingAccount;
-(void)cancelRefreshingAccount;
-(BOOL)allowsCancel;
-(BOOL)allowsCardEditing;
-(void)presentGroupsViewController;
-(void)addPerson:(id)arg1 ;
-(void)updateLeftNavigationButtonAnimated:(BOOL)arg1 ;
-(void)updateNavigationButtonsInSearchMode:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CNAvatarCardController *)cardController;
-(id)membersController;
-(void)addPersonWithContact:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentAddContactViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)addContactPresenter;
-(BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3 selectAndScrollToPerson:(BOOL)arg4 ;
-(void)resetInsertionData;
-(void)updateNavigationButtonsInSearchMode:(BOOL)arg1 ;
-(void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 informDelegate:(BOOL)arg3 ;
-(void)reallyHandleExternalChangeOnPersonViewControllers;
-(void)handleExternalChangeOnPersonViewControllers;
-(void)personWasDeleted;
-(CNContactStore *)contactStore;
-(id)presentingViewControllerForAvatarCardController:(id)arg1 ;
-(long long)avatarCardController:(id)arg1 presentationResultForLocation:(CGPoint)arg2 ;
-(void)nameUpdatedForPerson:(void*)arg1 ;
-(void)linksUpdatedForPerson:(void*)arg1 ;
-(void)preferredPersonDidChangeToPerson:(void*)arg1 ;
-(void)insertProperty:(int*)arg1 insertValue:(id*)arg2 insertLabel:(id*)arg3 ;
-(BOOL)personViewController:(id)arg1 shouldContinueAfterEditingConfirmed:(BOOL)arg2 forPerson:(void*)arg3 ;
-(BOOL)isSearchingWithNoContactSelected;
-(BOOL)isNavigationButtonEnabled:(int)arg1 ;
-(CNContact *)unsavedContact;
-(id)indexPathForMember:(void*)arg1 ;
-(BOOL)showCardForPerson:(void*)arg1 animate:(BOOL)arg2 selectAndScrollToPerson:(BOOL)arg3 ;
-(void)peoplePickerNavigationControllerNavigationBarStoppedAnimating:(id)arg1 ;
-(void)model:(id)arg1 localChangeWithInfo:(CFDictionaryRef)arg2 ;
-(void)setCardController:(CNAvatarCardController *)arg1 ;
-(void)loadState;
-(void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 ;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(_UIAccessDeniedView *)accessDeniedView;
-(void)updateTitle;
-(void)setAddressBook:(void*)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
@end

