/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKNotification.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, CKRecordID;

@interface CKQueryNotification : CKNotification <NSSecureCoding> {

	long long _queryNotificationReason;
	NSDictionary* _recordFields;
	CKRecordID* _recordID;
	long long _databaseScope;

}

@property (assign,nonatomic) long long queryNotificationReason;              //@synthesize queryNotificationReason=_queryNotificationReason - In the implementation block
@property (nonatomic,copy) NSDictionary * recordFields;                      //@synthesize recordFields=_recordFields - In the implementation block
@property (nonatomic,copy) CKRecordID * recordID;                            //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) BOOL isPublicDatabase; 
@property (assign,nonatomic) long long databaseScope;                        //@synthesize databaseScope=_databaseScope - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithRemoteNotificationDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setQueryNotificationReason:(long long)arg1 ;
-(void)setRecordFields:(NSDictionary *)arg1 ;
-(long long)queryNotificationReason;
-(NSDictionary *)recordFields;
-(BOOL)isPublicDatabase;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(CKRecordID *)recordID;
-(void)setDatabaseScope:(long long)arg1 ;
-(id)CKPropertiesDescription;
-(long long)databaseScope;
@end

