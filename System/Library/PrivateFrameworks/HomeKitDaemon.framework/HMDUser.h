/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, HMDHome, NSString, NSData, NSUUID, NSObject;

@interface HMDUser : NSObject <NSSecureCoding> {

	NSMutableArray* _relayAccessTokens;
	BOOL _remoteGateway;
	HMDHome* _home;
	NSString* _userID;
	NSString* _relayIdentifier;
	NSString* _pairingUsername;
	NSData* _publicKey;
	NSUUID* _uuid;
	unsigned long long _privilege;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (assign,nonatomic,__weak) HMDHome * home;                                     //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) NSString * userID;                                           //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                                               //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * pairingUsername;                         //@synthesize pairingUsername=_pairingUsername - In the implementation block
@property (nonatomic,copy,readonly) NSData * publicKey;                                 //@synthesize publicKey=_publicKey - In the implementation block
@property (assign,getter=isRemoteGateway,nonatomic) BOOL remoteGateway;                 //@synthesize remoteGateway=_remoteGateway - In the implementation block
@property (getter=isCurrentUser,nonatomic,readonly) BOOL currentUser; 
@property (assign,nonatomic) unsigned long long privilege;                              //@synthesize privilege=_privilege - In the implementation block
@property (nonatomic,copy) NSString * relayIdentifier;                                  //@synthesize relayIdentifier=_relayIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * encodingRemoteDisplayName; 
+(BOOL)supportsSecureCoding;
+(id)currentUserWithPriviledge:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(NSString *)displayName;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(BOOL)isCurrentUser;
-(NSData *)publicKey;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(NSString *)userID;
-(NSString *)pairingUsername;
-(NSString *)relayIdentifier;
-(void)setRelayIdentifier:(NSString *)arg1 ;
-(BOOL)isRemoteGateway;
-(BOOL)mergeFromUser:(id)arg1 ;
-(unsigned long long)privilege;
-(void)setUserID:(NSString *)arg1 ;
-(void)configureWithHome:(id)arg1 ;
-(void)removeRelayAccessTokenForAccessory:(id)arg1 ;
-(id)initWithUserID:(id)arg1 pairingUsername:(id)arg2 publicKey:(id)arg3 privilege:(unsigned long long)arg4 ;
-(id)relayAccessTokenForAccessory:(id)arg1 ;
-(void)addRelayAccessToken:(id)arg1 ;
-(void)updatePairingUsername:(id)arg1 publicKey:(id)arg2 ;
-(id)residentCopy;
-(id)userCopy;
-(void)removeRelayAccessToken:(id)arg1 ;
-(id)relayAccessTokens;
-(void)setRemoteGateway:(BOOL)arg1 ;
-(NSString *)encodingRemoteDisplayName;
-(BOOL)containsRelayAccessToken:(id)arg1 ;
-(void)setPrivilege:(unsigned long long)arg1 ;
@end

