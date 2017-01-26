/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStoreCache.h>

@class NSSQLCore;

@interface NSSQLRowCache : NSPersistentStoreCache {

	NSSQLCore* _sqlCore;
	int _debug;

}
+(void)initialize;
-(void)forgetAllExternalData;
-(id)rowForObjectID:(id)arg1 ;
-(id)initWithSQLCore:(id)arg1 ;
-(id)adapter;
-(void)registerRow:(id)arg1 forObjectID:(NSScalarObjectID*)arg2 ;
-(id)rowForObjectID:(id)arg1 after:(double)arg2 ;
-(id)toManyForSourceObjectID:(id)arg1 forProperty:(id)arg2 after:(double)arg3 ;
-(void)registerToMany:(id)arg1 forSourceObjectID:(NSScalarObjectID*)arg2 forProperty:(id)arg3 andTimestamp:(double)arg4 ;
-(void)forgetRowForObjectID:(NSScalarObjectID*)arg1 ;
-(void)registerSnapshots:(id)arg1 ;
-(void)dealloc;
@end
