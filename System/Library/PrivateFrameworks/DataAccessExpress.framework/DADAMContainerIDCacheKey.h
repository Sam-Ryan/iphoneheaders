/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccessExpress/DataAccessExpress-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DADAMContainerIDCacheKey : NSObject <NSCopying> {

	NSString* _accountID;
	long long _dataclass;

}

@property (nonatomic,readonly) NSString * accountID;              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) long long dataclass;               //@synthesize dataclass=_dataclass - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAccountID:(id)arg1 andDataclass:(long long)arg2 ;
-(long long)dataclass;
-(NSString *)accountID;
@end

