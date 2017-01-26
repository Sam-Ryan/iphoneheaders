/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBUISceneClient.h>
#import <libobjc.A.dylib/FBSceneHost.h>

@protocol FBUISceneHostProxy, FBSceneClient, FBUISceneClientDelegate;
@class NSString, FBSDisplay, FBUISceneIdentity;

@interface FBUISceneClientBridge : NSObject <FBUISceneClient, FBSceneHost> {

	FBUISceneIdentity* _identity;
	id<FBUISceneHostProxy> _sceneHost;
	id<FBSceneClient> _legacyClient;
	id<FBUISceneClientDelegate> _delegate;

}

@property (nonatomic,copy,readonly) FBUISceneIdentity * identity;              //@synthesize identity=_identity - In the implementation block
@property (__weak) id<FBUISceneHostProxy> sceneHost;                           //@synthesize sceneHost=_sceneHost - In the implementation block
@property (retain) id<FBSceneClient> legacyClient;                             //@synthesize legacyClient=_legacyClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * sceneIdentifier; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,retain,readonly) FBSDisplay * display; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)identifier;
-(FBSDisplay *)display;
-(FBUISceneIdentity *)identity;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)client:(id)arg1 attachLayer:(id)arg2 ;
-(void)client:(id)arg1 updateLayer:(id)arg2 ;
-(void)client:(id)arg1 detachLayer:(id)arg2 ;
-(void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 ;
-(void)client:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)didInvalidateSceneHost:(id)arg1 ;
-(void)sceneHost:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)sceneHost:(id)arg1 destroySceneWithTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sceneHost:(id)arg1 didReceiveActions:(id)arg2 ;
-(NSString *)sceneIdentifier;
-(void)setSceneHost:(id<FBUISceneHostProxy>)arg1 ;
-(id<FBSceneClient>)legacyClient;
-(void)setLegacyClient:(id<FBSceneClient>)arg1 ;
-(id<FBUISceneHostProxy>)sceneHost;
-(void)registerWithDelegate:(id)arg1 ;
-(void)sceneHost:(id)arg1 registerWithInitialParameters:(id)arg2 ;
-(id)initWithSceneIdentity:(id)arg1 legacyClient:(id)arg2 ;
@end

