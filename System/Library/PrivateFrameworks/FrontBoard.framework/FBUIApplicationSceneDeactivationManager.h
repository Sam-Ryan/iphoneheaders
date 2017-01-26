/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSceneManagerObserver.h>
#import <libobjc.A.dylib/FBSceneManagerInternalObserver.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableSet, NSMutableArray, FBScene, NSString;

@interface FBUIApplicationSceneDeactivationManager : NSObject <FBSceneManagerObserver, FBSceneManagerInternalObserver, BSDescriptionProviding> {

	NSMutableSet* _eligibleScenes;
	NSMutableArray* _activeBands;
	FBScene* _updatingScene;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)sceneManager:(id)arg1 amendSettings:(id)arg2 forUpdatingScene:(id)arg3 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(void)removeAssertion:(id)arg1 ;
-(BOOL)_isEligibleScene:(id)arg1 forSettings:(id)arg2 ;
-(void)_trackScene:(id)arg1 ;
-(BOOL)_isEligibleDisplay:(id)arg1 ;
-(id)_bandForSceneLevel:(double)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)_updateAllScenesForBand:(id)arg1 withTransitionContext:(id)arg2 ;
-(BOOL)_isEligibleProcess:(id)arg1 ;
-(BOOL)_areEligibleSceneSettings:(id)arg1 forProcess:(id)arg2 ;
-(unsigned long long)_deactivationReasonsForScene:(id)arg1 withSettings:(id)arg2 ;
-(void)_setDeactivationReasons:(unsigned long long)arg1 onScene:(id)arg2 withSettings:(id)arg3 ;
-(id)_deactivationBandsForLevel:(double)arg1 ;
-(BOOL)_isEligibleScene:(id)arg1 ;
-(void)_untrackScene:(id)arg1 ;
-(void)_noteSceneWillUpdate:(id)arg1 oldSettings:(id)arg2 newSettings:(id)arg3 ;
-(void)addAssertion:(id)arg1 withTransitionContext:(id)arg2 ;
@end

