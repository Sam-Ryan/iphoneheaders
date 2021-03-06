/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:35:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MCUIAppSigner : NSObject {

	BOOL _appsRequireTrust;
	BOOL _appsRequireVerification;
	BOOL _hasFreeDeveloperProvisioningProfile;
	BOOL _hasUniversalProvisioningProfile;
	NSString* _displayName;
	NSString* _identity;
	NSArray* _applications;
	NSArray* _profiles;
	long long _numberOfAppsRequiringVerification;

}

@property (nonatomic,retain) NSString * displayName;                                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * identity;                                      //@synthesize identity=_identity - In the implementation block
@property (nonatomic,retain) NSArray * applications;                                   //@synthesize applications=_applications - In the implementation block
@property (nonatomic,retain) NSArray * profiles;                                       //@synthesize profiles=_profiles - In the implementation block
@property (assign,nonatomic) BOOL appsRequireTrust;                                    //@synthesize appsRequireTrust=_appsRequireTrust - In the implementation block
@property (assign,nonatomic) BOOL appsRequireVerification;                             //@synthesize appsRequireVerification=_appsRequireVerification - In the implementation block
@property (assign,nonatomic) long long numberOfAppsRequiringVerification;              //@synthesize numberOfAppsRequiringVerification=_numberOfAppsRequiringVerification - In the implementation block
@property (assign,nonatomic) BOOL hasFreeDeveloperProvisioningProfile;                 //@synthesize hasFreeDeveloperProvisioningProfile=_hasFreeDeveloperProvisioningProfile - In the implementation block
@property (assign,nonatomic) BOOL hasUniversalProvisioningProfile;                     //@synthesize hasUniversalProvisioningProfile=_hasUniversalProvisioningProfile - In the implementation block
+(id)enterpriseAppSignersWithOutDeveloperAppSigners:(id*)arg1 ;
+(id)_uppProfilesBySignerIDWithOutFreeDevProfilesBySignerID:(id*)arg1 ;
+(void)_addProfile:(id)arg1 toSignerIdentity:(id)arg2 inDictionary:(id)arg3 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)identity;
-(NSArray *)applications;
-(void)setIdentity:(NSString *)arg1 ;
-(BOOL)isTrusted;
-(NSArray *)profiles;
-(BOOL)hasFreeDeveloperProvisioningProfile;
-(BOOL)hasUniversalProvisioningProfile;
-(id)_displayNameFromIdentity:(id)arg1 hasFreeDev:(BOOL)arg2 hasUPP:(BOOL)arg3 ;
-(BOOL)_isTrustRequiredForBundleIDs:(id)arg1 outIsVerificationRequired:(BOOL*)arg2 outNotVerifiedAppCount:(long long*)arg3 ;
-(void)setAppsRequireTrust:(BOOL)arg1 ;
-(void)setAppsRequireVerification:(BOOL)arg1 ;
-(void)setNumberOfAppsRequiringVerification:(long long)arg1 ;
-(BOOL)appsRequireTrust;
-(BOOL)appsRequireVerification;
-(long long)numberOfAppsRequiringVerification;
-(id)initWithIdentity:(id)arg1 applications:(id)arg2 profiles:(id)arg3 hasUPP:(BOOL)arg4 hasFreeDeveloper:(BOOL)arg5 ;
-(void)refreshApplicatons;
-(void)addApplication:(id)arg1 ;
-(void)removeApplication:(id)arg1 ;
-(void)removeApplications:(id)arg1 ;
-(void)setProfiles:(NSArray *)arg1 ;
-(void)setHasFreeDeveloperProvisioningProfile:(BOOL)arg1 ;
-(void)setHasUniversalProvisioningProfile:(BOOL)arg1 ;
-(void)setApplications:(NSArray *)arg1 ;
@end

