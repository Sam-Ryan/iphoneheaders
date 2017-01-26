/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSManagedObjectID, NSEntityDescription;

@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying> {

	int _cd_rc;
	int _cd_version;
	NSManagedObjectID* _cd_objectID;
	struct {
		unsigned _readOnly : 1;
		unsigned _reservedFlags : 31;
	}  _cd_flags;
	unsigned _cd_nullFlags_;

}

@property (nonatomic,readonly) NSEntityDescription * entity; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
+(void)_entityDeallocated;
+(Class)classForEntity:(id)arg1 ;
+(unsigned)newBatchAllocation:(id*)arg1 count:(unsigned)arg2 withOwnedObjectIDs:(id*)arg3 ;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(id)_snapshot_;
-(id)_descriptionValues;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)description;
-(id)copy;
-(id)mutableCopy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isDeallocating;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)_tryRetain;
-(NSEntityDescription *)entity;
-(id)initWithObjectID:(id)arg1 ;
-(NSManagedObjectID *)objectID;
-(void)finalize;
@end

