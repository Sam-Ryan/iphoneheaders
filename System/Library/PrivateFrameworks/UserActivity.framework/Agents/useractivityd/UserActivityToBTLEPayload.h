/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:21:23 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSString, NSDate, NSData, NSURL, NSError;

@interface UserActivityToBTLEPayload : NSObject {

	NSUUID* _uniqueIdentifier;
	NSString* _title;
	NSDate* _when;
	NSData* _userInfoPayload;
	NSURL* _webpageURL;
	NSData* _streamsData;
	NSString* _teamID;
	NSString* _activityType;
	NSUUID* _ununiqueIdentifier;
	NSError* _error;

}

@property (copy) NSUUID * uniqueIdentifier;              //@synthesize ununiqueIdentifier=_ununiqueIdentifier - In the implementation block
@property (copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (copy) NSDate * when;                          //@synthesize when=_when - In the implementation block
@property (copy) NSData * userInfoPayload;               //@synthesize userInfoPayload=_userInfoPayload - In the implementation block
@property (copy) NSURL * webpageURL;                     //@synthesize webpageURL=_webpageURL - In the implementation block
@property (copy) NSData * streamsData;                   //@synthesize streamsData=_streamsData - In the implementation block
@property (copy) NSString * teamID;                      //@synthesize teamID=_teamID - In the implementation block
@property (copy) NSString * activityType;                //@synthesize activityType=_activityType - In the implementation block
@property (copy) NSError * error;                        //@synthesize error=_error - In the implementation block
-(id)init:(id)arg1 title:(id)arg2 date:(id)arg3 userInfoPayload:(id)arg4 teamID:(id)arg5 activityType:(id)arg6 ;
-(id)encodeAsData;
-(id)initWithNSError:(id)arg1 ;
-(NSData *)userInfoPayload;
-(void)setUserInfoPayload:(NSData *)arg1 ;
-(NSURL *)webpageURL;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(NSString *)teamID;
-(NSData *)streamsData;
-(void)setStreamsData:(NSData *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(NSString *)activityType;
-(id)initWithData:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setTeamID:(NSString *)arg1 ;
-(void)setWhen:(NSDate *)arg1 ;
-(NSDate *)when;
@end

