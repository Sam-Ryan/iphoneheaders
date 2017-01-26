/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:34:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/HomeSettings.bundle/HomeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSettings/HomeSettings-Structs.h>
#import <Preferences/PSEditableListController.h>
#import <libobjc.A.dylib/HMHomeManagerDelegatePrivate.h>
#import <libobjc.A.dylib/HMHomeDelegatePrivate.h>

@class HMHomeManager, HOSHomeViewController, NSMutableArray, NSString;

@interface HOSSettingsController : PSEditableListController <HMHomeManagerDelegatePrivate, HMHomeDelegatePrivate> {

	BOOL _isiCloudSpecifiersValid;
	BOOL _isiCloudEnabled;
	BOOL _isUseiCloudDriveEnabled;
	BOOL _iCloudURLIsReachable;
	HMHomeManager* _homeManager;
	SCNetworkReachabilityRef _reachability;
	HOSHomeViewController* _detailController;
	NSMutableArray* _myHomes;
	NSMutableArray* _sharedHomes;
	NSMutableArray* _invitations;

}

@property (assign,nonatomic) BOOL iCloudURLIsReachable;                                    //@synthesize iCloudURLIsReachable=_iCloudURLIsReachable - In the implementation block
@property (assign,nonatomic,__weak) HMHomeManager * homeManager;                           //@synthesize homeManager=_homeManager - In the implementation block
@property (assign,nonatomic) SCNetworkReachabilityRef reachability;                        //@synthesize reachability=_reachability - In the implementation block
@property (assign,nonatomic,__weak) HOSHomeViewController * detailController;              //@synthesize detailController=_detailController - In the implementation block
@property (nonatomic,retain) NSMutableArray * myHomes;                                     //@synthesize myHomes=_myHomes - In the implementation block
@property (nonatomic,retain) NSMutableArray * sharedHomes;                                 //@synthesize sharedHomes=_sharedHomes - In the implementation block
@property (nonatomic,retain) NSMutableArray * invitations;                                 //@synthesize invitations=_invitations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateSpecifierForHome:(id)arg1 ;
-(id)createGroupSpecifierForMyHomes;
-(void)_queryIsiCloudEnabledAndReloadSpecifiers;
-(NSMutableArray *)myHomes;
-(id)createGroupSpecifierForNoHomes;
-(id)createSpecifierForInvitation:(id)arg1 ;
-(id)invitationsSpecifiers;
-(NSMutableArray *)sharedHomes;
-(void)_queryIsiCloudDriveEnabledAndReloadSpecifiers;
-(void)reset:(id)arg1 ;
-(void)deleteHome:(id)arg1 ;
-(BOOL)_invitationSpecifierCanBeRemoved:(id)arg1 ;
-(void)setMyHomes:(NSMutableArray *)arg1 ;
-(void)_setUseiCloudEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)_reallyReset;
-(id)_useiCloudDriveSpecifier;
-(void)showSectionsIfNecessary;
-(id)_useiCloudSpecifiers;
-(id)sharedHomesSpecifiers;
-(void)rejectInvitation:(id)arg1 ;
-(id)createSpecifierForHome:(id)arg1 ;
-(id)myHomesSpecifiers;
-(void)_updateIsUseiCloudDriveEnabled:(BOOL)arg1 ;
-(id)specifierForHome:(id)arg1 ;
-(void)setSharedHomes:(NSMutableArray *)arg1 ;
-(id)_isUseiCloudEnabled:(id)arg1 ;
-(void)_updateIsiCloudEnabled:(BOOL)arg1 ;
-(void)setInvitations:(NSMutableArray *)arg1 ;
-(id)specifierForInvitation:(id)arg1 ;
-(long long)specifierIndexForHome:(id)arg1 ;
-(id)resetSpecifiers;
-(id)createGroupSpecifierForSharedHomes;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)acceptInvitation:(id)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(NSMutableArray *)invitations;
-(void)homeDidUpdateName:(id)arg1 ;
-(void)home:(id)arg1 didRemoveUser:(id)arg2 ;
-(void)home:(id)arg1 didAddUser:(id)arg2 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(void)homeManager:(id)arg1 didRemoveHome:(id)arg2 ;
-(void)homeManager:(id)arg1 didAddHome:(id)arg2 ;
-(void)homeManager:(id)arg1 didUpdateStateForIncomingInvitations:(id)arg2 ;
-(BOOL)iCloudURLIsReachable;
-(void)setICloudURLIsReachable:(BOOL)arg1 ;
-(void)setDetailController:(HOSHomeViewController *)arg1 ;
-(HOSHomeViewController *)detailController;
-(id)specifiers;
-(HMHomeManager *)homeManager;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(SCNetworkReachabilityRef)reachability;
-(void)setReachability:(SCNetworkReachabilityRef)arg1 ;
@end

