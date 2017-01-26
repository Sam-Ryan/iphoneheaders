/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HMDAccessory, HMDUser, NSData;

@interface HMDRelayAccessToken : NSObject <NSSecureCoding> {

	NSUUID* _accessoryIdentifier;
	NSUUID* _userIdentifier;
	NSUUID* _identifier;
	HMDAccessory* _accessory;
	HMDUser* _user;
	NSData* _accessToken;

}

@property (nonatomic,readonly) NSUUID * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) HMDAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (assign,nonatomic,__weak) HMDUser * user;                        //@synthesize user=_user - In the implementation block
@property (nonatomic,copy,readonly) NSData * accessToken;                  //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,readonly) NSUUID * accessoryIdentifier;               //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * userIdentifier;                      //@synthesize userIdentifier=_userIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(HMDUser *)user;
-(void)setUser:(HMDUser *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(void)setUserIdentifier:(NSUUID *)arg1 ;
-(HMDAccessory *)accessory;
-(void)setAccessory:(HMDAccessory *)arg1 ;
-(void)configureWithHome:(id)arg1 ;
-(id)initWithAccessToken:(id)arg1 consentToken:(id)arg2 ;
-(NSData *)accessToken;
-(NSUUID *)accessoryIdentifier;
-(NSUUID *)userIdentifier;
@end

