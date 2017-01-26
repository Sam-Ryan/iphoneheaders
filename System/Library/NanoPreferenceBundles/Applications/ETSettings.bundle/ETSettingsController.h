/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:32:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/ETSettings.bundle/ETSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ETSettings/ETSettings-Structs.h>
#import <BridgePreferences/BPSNotificationAppController.h>
#import <ETSettings/ETSettingsPeopleViewControllerDelegate.h>
#import <ETSettings/ABPeoplePickerNavigationControllerPrivateMemberCellDelegate.h>

@class FKFriendsManager, PSSpecifier, PSTextFieldSpecifier, ETSettingsPeopleViewController, ABPeoplePickerNavigationController, NSMutableDictionary, NSString;

@interface ETSettingsController : BPSNotificationAppController <ETSettingsPeopleViewControllerDelegate, ABPeoplePickerNavigationControllerPrivateMemberCellDelegate> {

	FKFriendsManager* _friendsManager;
	PSSpecifier* _blockedSpecifier;
	PSTextFieldSpecifier* _groupTitleSpecifier;
	PSSpecifier* _peopleViewSpecifier;
	ETSettingsPeopleViewController* _currentPeopleViewController;
	ABPeoplePickerNavigationController* _peoplePickerController;
	void* _addressBook;
	NSMutableDictionary* _addPersonValueCache;
	ETSettingsPeopleViewController* _activeAddPersonViewController;
	BOOL _activePairedWatchSupportsFriendGroups;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void*)newAddressBookWithCallback:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(void)_showDetailViewForPerson:(id)arg1 ;
-(id)_textFieldForGroupNameSpecifier;
-(void)setGroupName:(id)arg1 specifier:(id)arg2 ;
-(void)_addPerson:(void*)arg1 animateView:(id)arg2 ;
-(id)groupName:(id)arg1 ;
-(id)_footerText;
-(void)settingsPeopleViewController:(id)arg1 requestDetailForPerson:(id)arg2 ;
-(void)settingsPeopleViewControllerAddPersonTapped:(id)arg1 ;
-(void)settingsPeopleViewControllerDidAppear:(id)arg1 ;
-(void)settingsPeopleViewController:(id)arg1 requestDeletionOfPerson:(id)arg2 ;
-(void)_showDeleteConfirmationForPeopleViewController:(id)arg1 ;
-(void)_showPeoplePickerForPeopleViewController:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(int*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2 ;
-(void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(BOOL)arg2 forPerson:(void*)arg3 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 withMemberCell:(id)arg5 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 withLinkedPeople:(CFArrayRef)arg3 memberCell:(id)arg4 ;
-(void)_dismissPeoplePicker;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(id)localizedPaneTitle;
-(id)_specifierForRowIndex:(id)arg1 ;
-(id)specifiers;
-(id)applicationBundleIdentifier;
@end
