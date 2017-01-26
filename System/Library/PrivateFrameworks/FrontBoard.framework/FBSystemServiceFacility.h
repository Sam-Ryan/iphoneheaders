/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBProcessObserver.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/FBSystemServiceServer.h>

@class NSString, FBServiceClientAuthenticator, NSMutableSet, FBSSerialQueue, NSSet;

@interface FBSystemServiceFacility : NSObject <FBProcessObserver, BSDescriptionProviding, FBSystemServiceServer> {

	NSString* _identifier;
	FBServiceClientAuthenticator* _authenticator;
	NSMutableSet* _clients;
	FBSSerialQueue* _queue;
	BOOL _invalidated;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain,readonly) FBSSerialQueue * queue;                                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain,readonly) FBServiceClientAuthenticator * authenticator;              //@synthesize authenticator=_authenticator - In the implementation block
@property (nonatomic,retain,readonly) NSSet * clients;                                           //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain,readonly) NSSet * prerequisiteMilestones; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(NSString *)identifier;
-(FBSSerialQueue *)queue;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 clientAuthenticator:(id)arg3 ;
-(void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2 ;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(void)sendMessage:(id)arg1 withType:(long long)arg2 toClients:(id)arg3 ;
-(NSSet *)prerequisiteMilestones;
-(void)_clientDidDisconnect:(id)arg1 ;
-(void)_handleMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(void)_clientDidConnect:(id)arg1 withMessage:(id)arg2 completion:(/*^block*/id)arg3 ;
-(Class)classForClient:(id)arg1 ;
-(void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3 ;
-(BOOL)_queue_clientIsAuthenticated:(id)arg1 error:(out id*)arg2 ;
-(id)_facilityClientForClient:(id)arg1 ;
-(void)noteClientDidSuspend:(id)arg1 ;
-(void)noteClientDidResume:(id)arg1 ;
-(NSSet *)clients;
-(FBServiceClientAuthenticator *)authenticator;
@end

