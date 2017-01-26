/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:32 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLAssetContainerList.h>
#import <libobjc.A.dylib/PLMomentContainer.h>

@class NSOrderedSet, NSString;

@interface PLMomentLibrary : PLManagedObject <PLAssetContainerList, PLMomentContainer>

@property (nonatomic,retain) NSOrderedSet * moments; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long containersCount; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(void)addSingletonObjectsToContext:(id)arg1 ;
+(id)sharedMomentLibraryInManagedObjectContext:(id)arg1 ;
+(id)sharedMomentLibraryInManagedObjectContext:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(BOOL)isEmpty;
-(void)prepareForDeletion;
-(void)removeMomentsObject:(id)arg1 ;
-(void)insertObject:(id)arg1 inMomentsAtIndex:(unsigned long long)arg2 ;
-(void)removeMoments:(id)arg1 ;
-(void)addMoments:(id)arg1 ;
-(void)removeObjectFromMomentsAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInMomentsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)insertMoments:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeMomentsAtIndexes:(id)arg1 ;
-(void)replaceMomentsAtIndexes:(id)arg1 withMoments:(id)arg2 ;
-(void)addMomentsObject:(id)arg1 ;
-(id)containers;
-(unsigned long long)containersCount;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;
-(id)_typeDescription;
@end

