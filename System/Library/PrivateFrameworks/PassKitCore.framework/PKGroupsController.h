/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPassLibraryDelegate.h>

@protocol PKGroupsControllerDelegate;
@class PKPassLibrary, NSMutableArray, NSMutableDictionary, PKCatalog, NSArray, NSString;

@interface PKGroupsController : NSObject <PKPassLibraryDelegate> {

	PKPassLibrary* _passLibrary;
	unsigned long long _filters;
	unsigned long long _passTypeMask;
	NSMutableArray* _groups;
	NSMutableDictionary* _passesByUniqueID;
	NSMutableDictionary* _groupsByGroupID;
	NSMutableDictionary* _indicesByGroupID;
	NSMutableDictionary* _groupIDsByPassUniqueID;
	BOOL _suppressRemoteUpdates;
	BOOL _enqueueRemoteUpdates;
	PKCatalog* _catalogBeforeReordering;
	NSMutableArray* _enqueuedUpdates;
	NSArray* _localPasses;
	BOOL _limitedMode;
	BOOL _activePassesOnly;
	BOOL _reorderingEnabled;
	BOOL _shouldSeparatePaymentPasses;
	id<PKGroupsControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<PKGroupsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL reorderingEnabled;                               //@synthesize reorderingEnabled=_reorderingEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldSeparatePaymentPasses;                     //@synthesize shouldSeparatePaymentPasses=_shouldSeparatePaymentPasses - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<PKGroupsControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PKGroupsControllerDelegate>)delegate;
-(id)groupAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfGroup:(id)arg1 ;
-(void)passLibrary:(id)arg1 receivedUpdatedCatalog:(id)arg2 passes:(id)arg3 ;
-(void)objectSettingsDidChangeNotification:(id)arg1 ;
-(void)_updateStateWithCatalog:(id)arg1 passes:(id)arg2 notify:(BOOL)arg3 ;
-(void)_getPassesAndCatalogWithHandler:(/*^block*/id)arg1 ;
-(unsigned long long)_indexOfGroupID:(id)arg1 ;
-(void)_removeGroup:(id)arg1 notify:(BOOL)arg2 ;
-(id)_copyRemoteCatalog;
-(void)_moveGroup:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 notify:(BOOL)arg4 ;
-(void)_performEnqueuedUpdates;
-(void)_insertGroup:(id)arg1 atIndex:(unsigned long long)arg2 notify:(BOOL)arg3 ;
-(void)reloadGroupsAndNotify:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performOrEnqueueUpdate:(/*^block*/id)arg1 ;
-(void)_fixIndex:(unsigned long long)arg1 ;
-(id)_passesDictionaryFromSet:(id)arg1 ;
-(void)_insertLocalGroupsIntoCatalog:(id)arg1 withPassesByUniqueID:(id)arg2 ;
-(id)_updateAndCreateGroupsWithCatalog:(id)arg1 passesByUniqueID:(id)arg2 notify:(BOOL)arg3 ;
-(BOOL)_groupIDIsNew:(id)arg1 ;
-(void)_placeGroup:(id)arg1 atIndex:(unsigned long long)arg2 notify:(BOOL)arg3 ;
-(unsigned long long)_destinationIndexForGroupID:(id)arg1 catalogGroups:(id)arg2 skippingNewGroupsAfterIndex:(unsigned long long)arg3 ;
-(void)_fixIndicesFrom:(unsigned long long)arg1 ;
-(void)_fixIndicesFrom:(unsigned long long)arg1 through:(unsigned long long)arg2 ;
-(id)_groupsExcludingPayment;
-(void)preloadGroupsAndFrontFaceImages;
-(void)loadGroupsWithCompletion:(/*^block*/id)arg1 ;
-(void)reloadGroups;
-(BOOL)shouldSeparatePaymentPasses;
-(void)setShouldSeparatePaymentPasses:(BOOL)arg1 ;
-(void)loadGroupsSynchronously;
-(unsigned long long)groupCount;
-(unsigned long long)indexOfSeparationGroup;
-(void)handleUserPassDelete:(id)arg1 ;
-(BOOL)reorderingEnabled;
-(void)suppressRemoteUpdates:(BOOL)arg1 ;
-(void)enableRemoteUpdates;
-(void)moveGroupAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)reloadGroupsWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)groupIndexForPassUniqueID:(id)arg1 ;
-(id)initLimited;
-(void)addLocalPasses:(id)arg1 ;
-(id)initWithPassTypeMask:(unsigned long long)arg1 passFilters:(unsigned long long)arg2 ;
-(void)setReorderingEnabled:(BOOL)arg1 ;
@end

