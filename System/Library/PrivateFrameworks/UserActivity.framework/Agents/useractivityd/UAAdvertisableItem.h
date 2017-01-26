/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:21:23 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSUUID, NSDictionary, NSDate, NSString, NSURL, UACornerActionManager, NSError;

@interface UAAdvertisableItem : NSObject {

	NSData* _encodedUserInfo;
	NSData* _encodedUserInfoOldCache;
	BOOL _eligibleForHandoff;
	BOOL _eligibleForSearch;
	BOOL _eligibleForPublicIndexing;
	NSUUID* _uuid;
	unsigned long long _type;
	NSDictionary* _options;
	unsigned long long _changeCount;
	NSDate* _activityDate;
	NSString* _title;
	NSString* _typeIdentifier;
	NSURL* _webpageURL;
	NSData* _streamsData;
	NSString* _dynamicIdentifier;
	NSString* _teamID;
	NSDate* _lastAdvertisedTime;
	UACornerActionManager* _manager;
	NSDate* _expirationDate;
	NSError* _encodedUserInfoError;

}

@property (copy) NSUUID * uuid;                                      //@synthesize uuid=_uuid - In the implementation block
@property (assign) unsigned long long type;                          //@synthesize type=_type - In the implementation block
@property (copy) NSString * typeIdentifier;                          //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (copy) NSString * dynamicIdentifier;                       //@synthesize dynamicIdentifier=_dynamicIdentifier - In the implementation block
@property (copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (copy) NSURL * webpageURL;                                 //@synthesize webpageURL=_webpageURL - In the implementation block
@property (copy) NSData * streamsData;                               //@synthesize streamsData=_streamsData - In the implementation block
@property (copy) NSData * encodedUserInfo; 
@property (readonly) NSData * encodedUserInfoOld; 
@property (copy) NSError * encodedUserInfoError;                     //@synthesize encodedUserInfoError=_encodedUserInfoError - In the implementation block
@property (copy) NSString * teamID;                                  //@synthesize teamID=_teamID - In the implementation block
@property (copy) NSDictionary * options;                             //@synthesize options=_options - In the implementation block
@property (assign) unsigned long long changeCount;                   //@synthesize changeCount=_changeCount - In the implementation block
@property (copy) NSDate * activityDate;                              //@synthesize activityDate=_activityDate - In the implementation block
@property (copy) NSDate * expirationDate;                            //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign) BOOL eligibleForHandoff;                          //@synthesize eligibleForHandoff=_eligibleForHandoff - In the implementation block
@property (assign) BOOL eligibleForSearch;                           //@synthesize eligibleForSearch=_eligibleForSearch - In the implementation block
@property (assign) BOOL eligibleForPublicIndexing;                   //@synthesize eligibleForPublicIndexing=_eligibleForPublicIndexing - In the implementation block
@property (retain) UACornerActionManager * manager;                  //@synthesize manager=_manager - In the implementation block
@property (copy,readonly) NSData * advertisingBytes; 
@property (retain) NSDate * lastAdvertisedTime;                      //@synthesize lastAdvertisedTime=_lastAdvertisedTime - In the implementation block
@property (readonly) BOOL needsUpdateBeforeAdvertising; 
-(id)initWithUUID:(id)arg1 manager:(id)arg2 ;
-(NSData *)advertisingBytes;
-(BOOL)matchesAdvertisingBytes:(id)arg1 ;
-(BOOL)eligibleToAdvertise;
-(BOOL)eligibleToAlwaysAdvertise;
-(void)setLastAdvertisedTime:(NSDate *)arg1 ;
-(BOOL)updateInformationFromSourceEvenIfClean:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSDate *)lastAdvertisedTime;
-(BOOL)updateInformationFromSourceWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSData *)encodedUserInfoOld;
-(BOOL)wasResumedOnAnotherDeviceWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)needsUpdateBeforeAdvertising;
-(id)copyUserActivityInfoWithUUID:(BOOL)arg1 ;
-(BOOL)eligibleForPublicIndexing;
-(NSURL *)webpageURL;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(void)setEligibleForHandoff:(BOOL)arg1 ;
-(void)setEligibleForSearch:(BOOL)arg1 ;
-(void)setEligibleForPublicIndexing:(BOOL)arg1 ;
-(NSString *)teamID;
-(UACornerActionManager *)manager;
-(NSDate *)activityDate;
-(id)logString;
-(void)setActivityDate:(NSDate *)arg1 ;
-(BOOL)eligibleForHandoff;
-(BOOL)eligibleForSearch;
-(NSString *)dynamicIdentifier;
-(void)setDynamicIdentifier:(NSString *)arg1 ;
-(NSData *)streamsData;
-(void)setStreamsData:(NSData *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSString *)title;
-(unsigned long long)changeCount;
-(void)setChangeCount:(unsigned long long)arg1 ;
-(BOOL)update:(id)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(NSString *)typeIdentifier;
-(NSUUID *)uuid;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(void)setUuid:(NSUUID *)arg1 ;
-(BOOL)isDirty;
-(id)statusString;
-(void)setTypeIdentifier:(NSString *)arg1 ;
-(void)setTeamID:(NSString *)arg1 ;
-(NSData *)encodedUserInfo;
-(void)setEncodedUserInfo:(NSData *)arg1 ;
-(void)setEncodedUserInfoError:(NSError *)arg1 ;
-(NSError *)encodedUserInfoError;
-(void)setManager:(UACornerActionManager *)arg1 ;
@end

