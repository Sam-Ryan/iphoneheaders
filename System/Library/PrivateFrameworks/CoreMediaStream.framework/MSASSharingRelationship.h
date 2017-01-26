/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDate;

@interface MSASSharingRelationship : NSObject <NSCopying> {

	BOOL _isMine;
	int _state;
	NSString* _GUID;
	NSString* _albumGUID;
	NSString* _email;
	NSArray* _emails;
	NSArray* _phones;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _fullName;
	NSString* _personID;
	NSDate* _subscriptionDate;

}

@property (getter=UID,nonatomic,retain) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;                    //@synthesize albumGUID=_albumGUID - In the implementation block
@property (nonatomic,retain) NSString * email;                        //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSArray * emails;                        //@synthesize emails=_emails - In the implementation block
@property (nonatomic,retain) NSArray * phones;                        //@synthesize phones=_phones - In the implementation block
@property (nonatomic,retain) NSString * fullName;                     //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * firstName;                    //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                     //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSDate * subscriptionDate;               //@synthesize subscriptionDate=_subscriptionDate - In the implementation block
@property (assign,nonatomic) int state;                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL isMine;                             //@synthesize isMine=_isMine - In the implementation block
+(id)MSASPSharingRelationshipFromProtocolDictionary:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(void)setSubscriptionDate:(NSDate *)arg1 ;
-(id)_fullName;
-(BOOL)isEqualToSharingRelationship:(id)arg1 ;
-(void)setGUID:(NSString *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(NSDate *)subscriptionDate;
-(void)setIsMine:(BOOL)arg1 ;
-(NSString *)albumGUID;
-(BOOL)isMine;
-(void)setAlbumGUID:(NSString *)arg1 ;
-(NSString *)email;
-(NSArray *)emails;
-(NSArray *)phones;
-(void)setEmails:(NSArray *)arg1 ;
-(void)setPhones:(NSArray *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)fullName;
-(NSString *)GUID;
@end

