/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPContainedObject.h>
#import <iWorkImport/KNSlideCollection.h>

@class KNSlideNode, NSMutableOrderedSet, NSMutableArray, NSMutableDictionary, TSUPointerKeyDictionary, NSArray, NSString;

@interface KNSlideTree : TSPContainedObject <KNSlideCollection> {

	NSMutableOrderedSet* mSlideNodes;
	NSMutableArray* mDisplayedSlideNodeCache;
	NSMutableDictionary* mSlideNodesForUniqueIdentifiersCache;
	NSMutableDictionary* mSlideNodesForFormulaReferenceNamesCache;
	TSUPointerKeyDictionary* mFormulaReferenceNamesForSlideNodesCache;

}

@property (nonatomic,readonly) NSArray * slideNodes; 
@property (nonatomic,readonly) NSArray * visibleSlideNodes; 
@property (nonatomic,retain) NSArray * displayedSlideNodes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) KNSlideNode * defaultSlideNodeForNewSelection; 
+(id)slideNodeDepthMapToCleanUpSlideNodes:(id)arg1 atDepths:(id)arg2 minimumValidDepth:(unsigned long long)arg3 ;
+(id)slideNodeDepthMapToCleanUpSlideNodes:(id)arg1 minimumValidDepth:(unsigned long long)arg2 ;
-(void)saveToArchive:(SlideTreeArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const SlideTreeArchive*)arg1 unarchiver:(id)arg2 owner:(id)arg3 ;
-(NSArray *)slideNodes;
-(unsigned long long)slideNumberForSlideNode:(id)arg1 ;
-(NSArray *)visibleSlideNodes;
-(id)formulaReferenceNameForSlideNode:(id)arg1 ;
-(id)slideNodeForFormulaReferenceName:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(id)slideNamesMatchingPrefix:(id)arg1 ;
-(void)addSlideNode:(id)arg1 atDepth:(unsigned long long)arg2 dolcContext:(id)arg3 ;
-(unsigned long long)indexOfSlideNode:(id)arg1 ;
-(id)slideNodeAtIndex:(unsigned long long)arg1 ignoreHiddenNodes:(BOOL)arg2 ;
-(id)slideNodeAfterSlideNode:(id)arg1 omitSkippedSlideNodes:(BOOL)arg2 omitCollapsedSlideNodes:(BOOL)arg3 ;
-(id)slideNodeBeforeSlideNode:(id)arg1 omitSkippedSlideNodes:(BOOL)arg2 omitCollapsedSlideNodes:(BOOL)arg3 ;
-(id)childrenOfSlideNode:(id)arg1 ;
-(void)invalidateSlideNameCache;
-(id)descendantsOfSlideNode:(id)arg1 omitSkippedSlideNodes:(BOOL)arg2 omitCollapsedSlideNodes:(BOOL)arg3 ;
-(void)addSlideNodeForDocumentUpgrade:(id)arg1 atDepth:(unsigned long long)arg2 ;
-(void)p_clearSlideNodeCache;
-(void)p_logSlideTreeErrorWithMessage:(id)arg1 slideNodesOrderBeforeEdit:(id)arg2 depthsBeforeEdit:(id)arg3 ;
-(BOOL)slideNodeIsDisplayed:(id)arg1 ;
-(void)setDisplayedSlideNodes:(NSArray *)arg1 ;
-(void)p_cacheSlideNodes;
-(id)slidesUsingMasterSlide:(id)arg1 ;
-(id)parentOfSlideNode:(id)arg1 ;
-(id)orderedSlideNodesInSelection:(id)arg1 ;
-(KNSlideNode *)defaultSlideNodeForNewSelection;
-(void)insertSlideNodes:(id)arg1 atIndexes:(id)arg2 slideNodesChangingDepths:(id)arg3 depthsOfSlideNodesChangingDepths:(id)arg4 dolcContext:(id)arg5 ;
-(void)moveSlideNodes:(id)arg1 fromIndexes:(id)arg2 toIndexes:(id)arg3 slideNodesChangingDepths:(id)arg4 depthsOfSlideNodesChangingDepths:(id)arg5 ;
-(void)removeSlideNodesAtIndexes:(id)arg1 slideNodesChangingDepths:(id)arg2 depthsOfSlideNodesChangingDepths:(id)arg3 ;
-(NSArray *)displayedSlideNodes;
-(void)reloadDisplayedNodes;
-(id)unhiddenSlideNodeAtIndex:(unsigned long long)arg1 ;
-(id)slideNodeWithUniqueIdentifier:(id)arg1 ;
-(unsigned long long)visiblePageCountIsSeparatedByBuilds:(BOOL)arg1 ;
-(unsigned long long)byBuildPageIndexForSlideIndex:(unsigned long long)arg1 andEventIndex:(unsigned long long)arg2 ;
-(void)slideIndex:(unsigned long long*)arg1 andEventIndex:(unsigned long long*)arg2 forByBuildPageIndex:(unsigned long long)arg3 ;
-(unsigned long long)numberOfSlidesUsingMasterSlide:(id)arg1 ;
-(id)slideNodesInAscendingOrder:(id)arg1 ;
-(void)dealloc;
-(id)objectEnumerator;
-(BOOL)isEmpty;
-(id)initWithOwner:(id)arg1 ;
-(void)removeAll;
@end

