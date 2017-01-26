/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:32 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLAssetContainerList.h>
#import <libobjc.A.dylib/PLMomentListData.h>

@class NSDate, NSData, NSOrderedSet, NSArray, PLMomentNameInfo, NSString;

@interface PLMomentList : PLManagedObject <PLAssetContainerList, PLMomentListData> {

	PLMomentNameInfo* _cachedNameInfo;
	BOOL _loadedNameInfo;

}

@property (assign,nonatomic) short granularityLevel; 
@property (assign,nonatomic) int sortIndex; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * title2; 
@property (nonatomic,retain) NSString * title3; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * representativeDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSOrderedSet * momentsForMegaMoment; 
@property (nonatomic,retain) NSOrderedSet * momentsForYear; 
@property (nonatomic,retain) NSData * reverseLocationData; 
@property (assign,nonatomic) BOOL reverseLocationDataIsValid; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * localizedTitle; 
@property (nonatomic,retain,readonly) NSArray * localizedLocationNames; 
@property (assign,nonatomic) short generationType; 
@property (nonatomic,retain) NSOrderedSet * moments; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long containersCount; 
@property (nonatomic,retain,readonly) NSObject*<NSCopying> uniqueObjectID; 
@property (nonatomic,retain) NSArray * userTitles; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)allMomentListsRequiringAnalysisInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)findOrCreateYearMomentListForYear:(long long)arg1 inManagedObjectContext:(id)arg2 ;
+(id)allMomentListsInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id*)arg3 ;
+(id)allMomentListsRequiringAnalysisInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id*)arg3 ;
+(id)allMomentListsInLibrary:(id)arg1 forLevel:(short)arg2 ;
+(id)descriptionForGranularityLevel:(short)arg1 ;
+(id)allMomentListsInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id*)arg3 returnsObjectsAsFaults:(BOOL)arg4 ;
+(id)allMomentListsInLibrary:(id)arg1 forLevel:(short)arg2 returnsObjectsAsFaults:(BOOL)arg3 ;
+(id)findOrCreateMegaMomentListForLeftoverMomentsInMonth:(long long)arg1 inYear:(long long)arg2 withDay:(long long)arg3 inManagedObjectContext:(id)arg4 ;
-(void)dealloc;
-(BOOL)isEmpty;
-(NSString *)localizedTitle;
-(void)delete;
-(void)awakeFromInsert;
-(void)willSave;
-(void)didTurnIntoFault;
-(BOOL)validateForInsert:(id*)arg1 ;
-(BOOL)validateForUpdate:(id*)arg1 ;
-(NSObject*<NSCopying>)uniqueObjectID;
-(NSOrderedSet *)moments;
-(void)removeMoments:(id)arg1 ;
-(void)addMoments:(id)arg1 ;
-(void)addMomentToFront:(id)arg1 ;
-(void)setMoments:(NSOrderedSet *)arg1 ;
-(id)momentListDebugDescription;
-(void)setUserTitles:(NSArray *)arg1 ;
-(NSArray *)userTitles;
-(void)_updateCachedNameInfoIfNeeded;
-(void)removeMomentsForMegaMomentObject:(id)arg1 ;
-(void)removeMomentsForYearObject:(id)arg1 ;
-(BOOL)_validateForInsertOrUpdate:(id*)arg1 ;
-(void)addMoments:(id)arg1 forMomentListLevel:(short)arg2 ;
-(void)removeMoments:(id)arg1 forMomentListLevel:(short)arg2 ;
-(void)addMoment:(id)arg1 forMegaMomentAtIndex:(unsigned long long)arg2 ;
-(void)addMomentsForMegaMomentObject:(id)arg1 ;
-(void)addMomentsForYearObject:(id)arg1 ;
-(void)addMomentsForMegaMoment:(id)arg1 ;
-(void)addMomentsForYear:(id)arg1 ;
-(void)removeMomentsForMegaMoment:(id)arg1 ;
-(void)removeMomentsForYear:(id)arg1 ;
-(void)insertObject:(id)arg1 inMomentsForMegaMomentAtIndex:(unsigned long long)arg2 ;
-(id)pl_debugDescription;
-(BOOL)isMeaningful;
-(void)removeObjectFromMomentsForMegaMomentAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInMomentsForMegaMomentAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)insertMomentsForMegaMoment:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeMomentsForMegaMomentAtIndexes:(id)arg1 ;
-(void)replaceMomentsForMegaMomentAtIndexes:(id)arg1 withMomentsForMegaMoment:(id)arg2 ;
-(void)insertObject:(id)arg1 inMomentsForYearAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromMomentsForYearAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInMomentsForYearAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)insertMomentsForYear:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeMomentsForYearAtIndexes:(id)arg1 ;
-(void)replaceMomentsForYearAtIndexes:(id)arg1 withMomentsForYear:(id)arg2 ;
-(void)addMoment:(id)arg1 forMomentListLevel:(short)arg2 ;
-(void)removeMoment:(id)arg1 forMomentListLevel:(short)arg2 ;
-(id)containers;
-(NSArray *)localizedLocationNames;
-(BOOL)supportsDiagnosticInformation;
-(id)diagnosticInformation;
-(unsigned long long)containersCount;
-(void)invalidateNameInfo;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;
-(id)_typeDescription;
@end

