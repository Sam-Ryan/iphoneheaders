/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:22 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBWorkspaceTransitionContext.h>

@class NSSet, SBWorkspaceEntity, SBWorkspaceApplication;

@interface SBWorkspaceApplicationTransitionContext : SBWorkspaceTransitionContext {

	/*^block*/id _resultBlock;
	BOOL _background;
	BOOL _fencesAnimations;
	BOOL _alwaysRunsWatchdog;
	BOOL _waitsForSceneUpdates;
	BOOL _sentActivationResult;
	long long _interfaceOrientation;
	long long _preferredInterfaceOrientation;

}

@property (assign,getter=isBackground,nonatomic) BOOL background;                         //@synthesize background=_background - In the implementation block
@property (assign,nonatomic) BOOL fencesAnimations;                                       //@synthesize fencesAnimations=_fencesAnimations - In the implementation block
@property (assign,nonatomic) BOOL alwaysRunsWatchdog;                                     //@synthesize alwaysRunsWatchdog=_alwaysRunsWatchdog - In the implementation block
@property (assign,nonatomic) BOOL waitsForSceneUpdates;                                   //@synthesize waitsForSceneUpdates=_waitsForSceneUpdates - In the implementation block
@property (nonatomic,copy) id resultBlock;                                                //@synthesize resultBlock=_resultBlock - In the implementation block
@property (nonatomic,copy,readonly) NSSet * applications; 
@property (nonatomic,copy,readonly) NSSet * previousApplications; 
@property (assign,nonatomic) long long interfaceOrientation;                              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) long long preferredInterfaceOrientation;                     //@synthesize preferredInterfaceOrientation=_preferredInterfaceOrientation - In the implementation block
@property (nonatomic,retain) SBWorkspaceEntity * activatingEntity; 
@property (nonatomic,retain) SBWorkspaceApplication * activatingApplication; 
-(void)setEntity:(id)arg1 forLayoutRole:(long long)arg2 ;
-(void)setActivatingApplication:(SBWorkspaceApplication *)arg1 ;
-(void)setWaitsForSceneUpdates:(BOOL)arg1 ;
-(void)setActivatingEntity:(SBWorkspaceEntity *)arg1 ;
-(void)sendActivationResultErrorCode:(long long)arg1 ;
-(id)previousApplicationForLayoutRole:(long long)arg1 ;
-(id)applicationForLayoutRole:(long long)arg1 ;
-(SBWorkspaceApplication *)activatingApplication;
-(id)previousEntityForLayoutRole:(long long)arg1 ;
-(id)entityForLayoutRole:(long long)arg1 ;
-(NSSet *)previousApplications;
-(id)_realActivatingEntity;
-(SBWorkspaceEntity *)activatingEntity;
-(id)sceneIdentifierForApplication:(id)arg1 ;
-(double)_watchdogScaleFactorForApplication:(id)arg1 ;
-(BOOL)hasSentActivationResult;
-(void)setApplication:(id)arg1 forLayoutRole:(long long)arg2 ;
-(void)setPreviousEntity:(id)arg1 forLayoutRole:(long long)arg2 ;
-(id)applicationForBundleID:(id)arg1 ;
-(id)previousApplicationForBundleID:(id)arg1 ;
-(id)sceneSettingsForApplication:(id)arg1 ;
-(id)sceneTransitionContextForApplication:(id)arg1 ;
-(id)sceneClientSettingsForApplication:(id)arg1 withSceneSettings:(id)arg2 ;
-(id)executionContextForApplication:(id)arg1 ;
-(BOOL)fencesAnimations;
-(void)setFencesAnimations:(BOOL)arg1 ;
-(BOOL)alwaysRunsWatchdog;
-(void)setAlwaysRunsWatchdog:(BOOL)arg1 ;
-(BOOL)waitsForSceneUpdates;
-(void)setPreferredInterfaceOrientation:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(id)_display;
-(void)setBackground:(BOOL)arg1 ;
-(BOOL)isBackground;
-(long long)preferredInterfaceOrientation;
-(NSSet *)applications;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
-(id)succinctDescriptionBuilder;
-(void)finalize;
@end

