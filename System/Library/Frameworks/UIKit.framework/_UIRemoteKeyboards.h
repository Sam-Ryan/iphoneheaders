/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIRemoteKeyboardDistributedViewSource.h>
#import <UIKit/_UIKeyboardArbitrationClient.h>
#import <UIKit/_UIRemoteKeyboardControllerDelegate.h>

@class NSHashTable, NSMutableArray, UIView, NSMutableSet, NSXPCConnection, _UIKeyboardChangedInformation, NSString, UIWindow, NSArray;

@interface _UIRemoteKeyboards : NSObject <_UIRemoteKeyboardDistributedViewSource, _UIKeyboardArbitrationClient, _UIRemoteKeyboardControllerDelegate> {

	NSHashTable* _windowControllers;
	int _ignoreLayoutSubviews;
	double _requiredLevel;
	NSMutableArray* _activePIDs;
	UIView* _keyboardSnapshot;
	BOOL _expectingInitialState;
	int _hostedCount;
	BOOL _hasFocus;
	BOOL _hadFocusBeforeOverlay;
	BOOL _expectedSuppression;
	int _externalSuppression;
	int _recursionCheck;
	NSMutableSet* _pendingKeyboardGrabs;
	BOOL _takingSnapshot;
	BOOL _updatingHeight;
	BOOL _handlingRemoteEvent;
	BOOL _currentKeyboard;
	NSXPCConnection* _connection;
	_UIKeyboardChangedInformation* _currentState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL keyboardVisible; 
@property (readonly) UIWindow * keyboardWindow; 
@property (readonly) double intersectionHeight; 
@property (readonly) BOOL keyboardActive; 
@property (readonly) BOOL remoteKeyboardUndocked; 
@property (assign,nonatomic) BOOL isSnapshotting; 
@property (readonly) BOOL oldPathForSnapshot; 
@property (readonly) BOOL updatingHeight;                                     //@synthesize updatingHeight=_updatingHeight - In the implementation block
@property (readonly) BOOL handlingRemoteEvent;                                //@synthesize handlingRemoteEvent=_handlingRemoteEvent - In the implementation block
@property (retain) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (readonly) id<_UIKeyboardArbitration> proxy; 
@property (retain) _UIKeyboardChangedInformation * currentState;              //@synthesize currentState=_currentState - In the implementation block
@property (assign) BOOL currentKeyboard;                                      //@synthesize currentKeyboard=_currentKeyboard - In the implementation block
@property (retain,readonly) NSArray * currentHostedPIDs; 
+(BOOL)enabled;
+(id)sharedRemoteKeyboards;
+(BOOL)useSystemService;
+(id)createArbiterConnection;
-(void)setPlacement:(id)arg1 quietly:(BOOL)arg2 animated:(BOOL)arg3 generateSplitNotification:(BOOL)arg4 ;
-(void)completeTransition:(id)arg1 withInfo:(id)arg2 ;
-(void)startTransition:(id)arg1 withInfo:(id)arg2 ;
-(void)updateTransition:(id)arg1 withInfo:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)setSuppressingKeyboard:(BOOL)arg1 ;
-(void)checkState;
-(void)restorePreservedInputViewsIfNecessary;
-(_UIKeyboardChangedInformation *)currentState;
-(void)peekApplicationEvent:(id)arg1 ;
-(void)performOnDistributedControllers:(/*^block*/id)arg1 ;
-(BOOL)keyboardActive;
-(BOOL)remoteKeyboardUndocked;
-(UIWindow *)keyboardWindow;
-(void)queue_keyboardChanged:(id)arg1 onComplete:(/*^block*/id)arg2 ;
-(void)queue_keyboardChangedWithCompletion:(/*^block*/id)arg1 ;
-(void)queue_keyboardTransition:(id)arg1 event:(unsigned long long)arg2 withInfo:(id)arg3 onComplete:(/*^block*/id)arg4 ;
-(void)queue_keyboardSuppressed:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)queue_applicationLostFocusWithCompletion:(/*^block*/id)arg1 ;
-(void)didSuspend:(id)arg1 ;
-(void)performOnControllers:(/*^block*/id)arg1 ;
-(void)setCurrentState:(_UIKeyboardChangedInformation *)arg1 ;
-(void)setWindowLevel:(double)arg1 sceneLevel:(double)arg2 forScreen:(id)arg3 ;
-(BOOL)keyboardVisible;
-(void)prepareToMoveKeyboard:(CGRect)arg1 showing:(BOOL)arg2 forScreen:(id)arg3 ;
-(BOOL)oldPathForSnapshot;
-(BOOL)isSnapshotting;
-(BOOL)shouldAllowInputViewsRestoredForId:(id)arg1 ;
-(double)intersectionHeight;
-(BOOL)updatingHeight;
-(void)willResume:(id)arg1 ;
-(void)checkConnection;
-(void)willAddDeactivationReason:(id)arg1 ;
-(void)didRemoveDeactivationReason:(id)arg1 ;
-(void)applicationResume:(id)arg1 ;
-(void)stopConnection;
-(void)resetSnapshotWithWindowCheck:(BOOL)arg1 ;
-(NSXPCConnection *)connection;
-(void)keyboardChanged:(id)arg1 shouldConsiderSnapshottingKeyboard:(BOOL)arg2 isLocalEvent:(BOOL)arg3 ;
-(void)cleanSuppression;
-(void)queue_failedConnection:(id)arg1 ;
-(id<_UIKeyboardArbitration>)proxy;
-(BOOL)currentKeyboard;
-(NSArray *)currentHostedPIDs;
-(void)completeMoveKeyboardForWindow:(id)arg1 ;
-(void)setCurrentKeyboard:(BOOL)arg1 ;
-(void)keyboardChangedCompleted;
-(BOOL)allowedToShowKeyboard;
-(void)startConnection;
-(void)reloadForSnapshotting;
-(BOOL)wantsToShowKeyboardForWindow:(id)arg1 ;
-(void)setWindowEnabled:(BOOL)arg1 ;
-(BOOL)isOnScreenRotating;
-(id)viewHostForWindow:(id)arg1 ;
-(Class)keyboardWindowClass;
-(BOOL)needsToShowKeyboardForWindow:(id)arg1 ;
-(void)_performOnDistributedControllersExceptSelf:(/*^block*/id)arg1 ;
-(void)userSelectedApp:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)controllerDidLayoutSubviews:(id)arg1 ;
-(void)setIsSnapshotting:(BOOL)arg1 ;
-(void)sceneUpdated;
-(void)ignoreLayoutNotifications:(/*^block*/id)arg1 ;
-(void)registerController:(id)arg1 ;
-(void)unregisterController:(id)arg1 ;
-(id)prepareForHostedWindow;
-(void)finishWithHostedWindow;
-(void)addHostedWindowView:(id)arg1 fromPID:(int)arg2 ;
-(void)forceKeyboardAway;
-(BOOL)handlingRemoteEvent;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

