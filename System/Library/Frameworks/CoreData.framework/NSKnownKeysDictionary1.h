/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSKnownKeysDictionary.h>

@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {

	int _cd_rc;
	int _count;
	NSKnownKeysMappingStrategy* _keySearch;
	id _values[0];

}
+(BOOL)accessInstanceVariablesDirectly;
+(id)initWithCoder:(id)arg1 ;
+(id)alloc;
+(id)init;
+(id)initWithDictionary:(id)arg1 ;
+(id)initWithCapacity:(unsigned long long)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)initWithObjects:(id*)arg1 forKeys:(id*)arg2 count:(unsigned long long)arg3 ;
+(id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)initWithSearchStrategy:(id)arg1 ;
+(id)initForKeys:(id)arg1 ;
-(Class)classForArchiver;
-(const id*)knownKeyValuesPointer;
-(unsigned long long)_valueCountByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)_setValues:(id*)arg1 retain:(BOOL)arg2 ;
-(void)_recount;
-(unsigned long long)_countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 forKeys:(BOOL)arg4 ;
-(void)getKeys:(id*)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(id)objectEnumerator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(void)setValues:(id*)arg1 ;
-(BOOL)_isDeallocating;
-(const id*)values;
-(BOOL)isEqualToDictionary:(id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(id)allValues;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)_tryRetain;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(void)setValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)mapping;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(void)getObjects:(id*)arg1 ;
@end

