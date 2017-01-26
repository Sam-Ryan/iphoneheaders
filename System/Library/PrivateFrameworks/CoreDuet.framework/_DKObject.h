/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDictionary;

@interface _DKObject : NSObject <NSSecureCoding> {

	NSUUID* _UUID;
	NSDictionary* _metadata;

}

@property (retain) NSUUID * UUID;                      //@synthesize UUID=_UUID - In the implementation block
@property (copy) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(id)createObjectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 ;
+(id)fetchObjectWithUUID:(id)arg1 context:(id)arg2 ;
+(id)entityName;
+(BOOL)supportsSecureCoding;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(BOOL)copyFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 ;
-(double)valueDouble;
-(long long)valueInteger;
-(id)entityName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(NSUUID *)UUID;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
@end

