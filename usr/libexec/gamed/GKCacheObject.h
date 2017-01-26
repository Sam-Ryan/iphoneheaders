/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:10 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@interface GKCacheObject : NSManagedObject
+(id)objectsMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)uniqueAttributeName;
+(id)fetchRequestForContext:(id)arg1 ;
+(id)relationshipKeyPathsForPrefetch;
+(id)fetchSortDescriptors;
+(const void*)uniqueObjectIDLookupKey;
+(id)allObjectsInContext:(id)arg1 ;
+(unsigned long long)countObjectsMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)firstObjectMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(void)deleteObjectsMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)uniqueObjectIDLookupWithContext:(id)arg1 ;
+(id)attributesDescriptionsForAttributesWithKeys:(id)arg1 ;
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
-(id)imageCacheKeyPathsByKey;
-(void)deleteCachedImage:(id)arg1 ;
-(id)updateImagesWithImageURLs:(id)arg1 ;
-(BOOL)hasImages;
-(void)clearImages;
-(id)imageURLDictionary;
-(void)updateWithServerRepresentation:(id)arg1 ;
-(id)initWithManagedObjectContext:(id)arg1 ;
-(void)invalidate;
-(BOOL)isValid;
-(id)internalRepresentation;
@end

