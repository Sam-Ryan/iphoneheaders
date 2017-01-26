/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSFetchRequest, NSManagedObjectID;

@interface _PHFetchRequestWrapper : NSObject <NSCopying> {

	unsigned long long _hash;
	NSFetchRequest* _fetchRequest;
	NSManagedObjectID* _containerIdentifier;

}

@property (nonatomic,readonly) NSFetchRequest * fetchRequest;                        //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long hash;                              //@synthesize hash=_hash - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSFetchRequest *)fetchRequest;
-(NSManagedObjectID *)containerIdentifier;
-(id)initWithFetchRequest:(id)arg1 containerIdentifier:(id)arg2 ;
@end

