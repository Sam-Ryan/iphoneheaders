/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBUISceneConduit.h>
#import <libobjc.A.dylib/FBUISceneIdentity.h>

@protocol FBUISceneHostProxy, FBUISceneClientProxy;
@class FBUISceneSpecification, NSString;

@interface FBUISceneAgent : NSObject <FBUISceneConduit, FBUISceneIdentity> {

	FBUISceneSpecification* _specification;
	id<FBUISceneHostProxy> _hostProxy;
	id<FBUISceneClientProxy> _clientProxy;

}

@property (nonatomic,copy,readonly) FBUISceneSpecification * sceneSpecification;              //@synthesize specification=_specification - In the implementation block
@property (__weak) id<FBUISceneHostProxy> sceneHost;                                          //@synthesize hostProxy=_hostProxy - In the implementation block
@property (retain) id<FBUISceneClientProxy> sceneClient;                                      //@synthesize clientProxy=_clientProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * sceneIdentifier; 
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)handleUpdateClientSettingsEvent:(id)arg1 ;
-(void)handleIncomingActionsEvent:(id)arg1 ;
-(void)handleUpdateSettingsEvent:(id)arg1 ;
-(void)handleInvalidationEvent:(id)arg1 ;
-(void)handleOutgoingActionsEvent:(id)arg1 ;
-(FBUISceneSpecification *)sceneSpecification;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setSceneClient:(id<FBUISceneClientProxy>)arg1 ;
-(id<FBUISceneClientProxy>)sceneClient;
-(void)didInvalidateSceneHost:(id)arg1 ;
-(void)sceneHost:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)sceneHost:(id)arg1 destroySceneWithTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sceneHost:(id)arg1 didReceiveActions:(id)arg2 ;
-(NSString *)sceneIdentifier;
-(void)sceneClient:(id)arg1 didAttachLayer:(id)arg2 ;
-(void)sceneClient:(id)arg1 didUpdateLayer:(id)arg2 ;
-(void)sceneClient:(id)arg1 didDetachLayer:(id)arg2 ;
-(void)sceneClient:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneClient:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)didInvalidateSceneClient:(id)arg1 ;
-(void)setSceneHost:(id<FBUISceneHostProxy>)arg1 ;
-(id<FBUISceneHostProxy>)sceneHost;
-(id)initWithSceneSpecification:(id)arg1 ;
-(void)sceneHost:(id)arg1 registerSceneClient:(id)arg2 withInitialParameters:(id)arg3 ;
@end

