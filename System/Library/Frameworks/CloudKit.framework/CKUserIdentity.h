/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CKRecordID, NSData;

@interface CKUserIdentity : NSObject <NSSecureCoding> {

	BOOL _hasiCloudAccount;
	BOOL _hasiCloudAccountSupportingSharing;
	NSString* _firstName;
	NSString* _lastName;
	CKRecordID* _userRecordID;
	NSString* _emailAddress;
	NSData* _protectionData;

}

@property (nonatomic,copy,readonly) NSString * localizedDisplayName; 
@property (nonatomic,copy) NSString * firstName;                                  //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                                   //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) CKRecordID * userRecordID;                             //@synthesize userRecordID=_userRecordID - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                               //@synthesize emailAddress=_emailAddress - In the implementation block
@property (assign,nonatomic) BOOL hasiCloudAccount;                               //@synthesize hasiCloudAccount=_hasiCloudAccount - In the implementation block
@property (assign,nonatomic) BOOL hasiCloudAccountSupportingSharing;              //@synthesize hasiCloudAccountSupportingSharing=_hasiCloudAccountSupportingSharing - In the implementation block
@property (nonatomic,retain) NSData * protectionData;                             //@synthesize protectionData=_protectionData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_init;
-(BOOL)hasiCloudAccount;
-(BOOL)hasiCloudAccountSupportingSharing;
-(NSString *)emailAddress;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)initWithEmailAddress:(id)arg1 ;
-(NSString *)localizedDisplayName;
-(id)CKPropertiesDescription;
-(id)ckShortDescription;
-(void)setProtectionData:(NSData *)arg1 ;
-(NSData *)protectionData;
-(void)setHasiCloudAccount:(BOOL)arg1 ;
-(void)setHasiCloudAccountSupportingSharing:(BOOL)arg1 ;
-(id)initWithUserRecordID:(id)arg1 ;
-(void)setUserRecordID:(CKRecordID *)arg1 ;
-(CKRecordID *)userRecordID;
@end

