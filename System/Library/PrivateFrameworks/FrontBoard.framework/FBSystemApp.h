/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <UIKit/UIApplication.h>
#import <libobjc.A.dylib/FBSceneClient.h>
#import <libobjc.A.dylib/FBSSceneUpdater.h>
#import <libobjc.A.dylib/BKSSystemApplicationDelegate.h>
#import <libobjc.A.dylib/FBSceneClientProvider.h>

@class FBDisplayLayoutTransition, FBSceneClientProviderInvalidationAction, NSMutableDictionary, NSMapTable, NSString;

@interface FBSystemApp : UIApplication <FBSceneClient, FBSSceneUpdater, BKSSystemApplicationDelegate, FBSceneClientProvider> {

	CFBooleanRef _darkboot;
	CFBooleanRef _wasDarkboot;
	FBDisplayLayoutTransition* _interfaceOrientationTransition;
	FBSceneClientProviderInvalidationAction* _invalidationAction;
	NSMutableDictionary* _scenesByIdentifier;
	NSMapTable* _hostsByIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)registerAsSystemApp;
+(BOOL)rendersLocally;
+(Class)_applicationInfoClass;
+(BOOL)supportsAsynchronousApplicationLoading;
+(BOOL)shouldFixMainThreadPriority;
+(BOOL)shouldCheckInWithBackboard;
+(void)initializeSystemServices;
+(void)preFrontBoardInitializationHook;
+(void)postFrontBoardInitializationHook;
+(BOOL)systemApplicationShouldWaitForDataMigration:(id)arg1 ;
+(BOOL)systemApplicationIsAliveForWatchdog:(id)arg1 ;
-(void)_accessibilityAddRecentlyActivatedBundleIdFromSwitcher:(id)arg1 ;
-(void)_accessibilityRemoveRecentlyActivatedBundleIdFromSwitcher:(id)arg1 ;
-(id)_accessibilityRecentlyActivatedApplicationBundleIdentifiers;
-(BOOL)isSuspended;
-(id)init;
-(BOOL)isFrontBoard;
-(BOOL)_saveSnapshotWithName:(id)arg1 ;
-(BOOL)isSuspendedUnderLock;
-(BOOL)openURL:(id)arg1 ;
-(BOOL)isSuspendedEventsOnly;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(id)_newSceneForWindow:(id)arg1 oldDisplay:(id)arg2 newDisplay:(id)arg3 ;
-(BOOL)handleDoubleHeightStatusBarTap:(long long)arg1 ;
-(void)resetIdleTimerAndUndim;
-(BOOL)canOpenURL:(id)arg1 ;
-(void)noteActiveInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(void)noteActiveInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithSettings:(id)arg2 fromOrientation:(long long)arg3 ;
-(void)beginTransaction;
-(void)_noteApplicationDidFinishLaunching;
-(BOOL)isBootingDark;
-(long long)_interfaceOrientationRotationDirectionFromOrientation:(long long)arg1 toOrientation:(long long)arg2 ;
-(void)_updateSceneSettingsForScene:(id)arg1 layer:(id)arg2 ;
-(void)host:(id)arg1 configureWithInitialClientSettings:(id)arg2 ;
-(void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)host:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)registerDelegate:(id)arg1 forSceneID:(id)arg2 ;
-(void)unregisterDelegateForSceneID:(id)arg1 ;
-(BOOL)willObserveLayersManually;
-(void)scene:(id)arg1 didAttachLayer:(id)arg2 ;
-(void)scene:(id)arg1 didUpdateLayer:(id)arg2 ;
-(void)scene:(id)arg1 didDetachLayer:(id)arg2 ;
-(void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 ;
-(void)registerInvalidationAction:(id)arg1 ;
-(id)registerHost:(id)arg1 ;
-(void)unregisterHost:(id)arg1 ;
-(id)fbsSceneWithIdentifier:(id)arg1 ;
-(BOOL)wasBootedDark;
-(void)sendActionsToBackboard:(id)arg1 ;
-(unsigned long long)lastExitReason;
-(void)_setDarkBoot:(BOOL)arg1 ;
-(void)endTransaction;
@end

