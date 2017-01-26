/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:00:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TPPageLayoutInfoProvider.h>
#import <iWorkImport/TSWPLayoutOwner.h>
#import <iWorkImport/TPLayoutStateConsumer.h>
#import <iWorkImport/TPLayoutStateProvider.h>

@class TPDocumentRoot, TSWPLayoutManager, TPSearchCanvasDelegate, TPFootnoteLayoutController, NSMutableArray, TPPageLayoutState, NSDate, TSUMutablePointerSet, NSString;

@interface TPPageController : NSObject <TPPageLayoutInfoProvider, TSWPLayoutOwner, TPLayoutStateConsumer, TPLayoutStateProvider> {

	TPDocumentRoot* _documentRoot;
	TSWPLayoutManager* _bodyLayoutManager;
	TPSearchCanvasDelegate* _offscreenSearchDelegate;
	TPFootnoteLayoutController* _footnoteLayoutController;
	NSMutableArray* _sectionHints;
	multimap<unsigned long, TPPageLayout *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, TPPageLayout *> > >* _pageLayoutCache;
	TPPageLayoutState* _layoutState;
	BOOL _checkedForBackUp;
	NSMutableArray* _pageGeneratorStack;
	BOOL _handleBackgroundLayoutScheduled;
	int _bgLayoutStatus;
	NSDate* _bgLayoutStartDate;
	unsigned long long _lastKnownPageCount;
	unsigned long long _completePageCount;
	BOOL _shouldUpdatePageCount;
	unsigned long long _didLayOutPageIndex;
	unsigned long long _currentPageBeingLaidOut;
	TSUMutablePointerSet* _layoutObservers;
	int _backgroundLayoutEnabled;
	int _backgroundLayoutSuspendCount;
	int _isScrolling;
	BOOL _isObservingNotifications;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL backgroundLayoutEnabled; 
@property (nonatomic,readonly) unsigned long long firstPageIndexNeedingLayout; 
@property (nonatomic,readonly) unsigned long long pageCount;                                //@synthesize lastKnownPageCount=_lastKnownPageCount - In the implementation block
-(BOOL)isSectionInfo:(id)arg1 onPage:(unsigned long long)arg2 ;
-(BOOL)shouldHeaderFooterBeVisibleForPageIndex:(unsigned long long)arg1 ;
-(BOOL)canProvideInfoForPageIndex:(unsigned long long)arg1 ;
-(id)headerFooterProviderForPageIndex:(unsigned long long)arg1 ;
-(id)masterDrawableProviderForPageIndex:(unsigned long long)arg1 ;
-(int)contentFlagsForPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)pageNumberForPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)pageCountForPageIndex:(unsigned long long)arg1 ;
-(id)p_sectionAtSectionIndex:(unsigned long long)arg1 ;
-(id)p_pageMasterForPageIndex:(unsigned long long)arg1 inSection:(id)arg2 sectionHint:(id)arg3 ;
-(BOOL)canProvideNumberingInfoForPageIndex:(unsigned long long)arg1 ;
-(NSRange)p_rangeOfContinuousSectionsAtPageIndex:(unsigned long long)arg1 startPage:(unsigned long long*)arg2 ;
-(void)d_timeLayout;
-(id)i_columnPriorToPageIndex:(unsigned long long)arg1 ;
-(const TSWPTopicNumberHints*)i_topicHintsPriorToPageIndex:(unsigned long long)arg1 ;
-(id)i_columnAfterPageIndex:(unsigned long long)arg1 ;
-(const TSWPTopicNumberHints*)i_topicHintsAfterPageIndex:(unsigned long long)arg1 ;
-(id)i_firstChildHintAfterPageIndex:(unsigned long long)arg1 ;
-(id)i_pageHintForPageIndex:(unsigned long long)arg1 ;
-(BOOL)i_shouldLayoutBodyVertically;
-(void)i_inflateColumnsInBodyLayout:(id)arg1 ;
-(void)i_trimPageAtIndex:(unsigned long long)arg1 toCharIndex:(unsigned long long)arg2 removeFootnoteLayoutCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4 ;
-(void)i_inflateFootnotesInFootnoteContainer:(id)arg1 ;
-(void)i_registerPageLayout:(id)arg1 ;
-(void)i_unregisterPageLayout:(id)arg1 ;
-(void)i_setNeedsDynamicLayoutForLayoutController:(id)arg1 onPageIndex:(unsigned long long)arg2 ;
-(id)initWithDocumentRoot:(id)arg1 ;
-(BOOL)caresAboutStorageChanges;
-(void)layoutManagerNeedsLayout:(id)arg1 ;
-(void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3 ;
-(id)textWrapper;
-(id)p_pageInfoForPageAtIndex:(unsigned long long)arg1 ;
-(id)pageInfoForPageIndex:(unsigned long long)arg1 ;
-(void)layoutThroughPageIndex:(unsigned long long)arg1 ;
-(void)withPageLayoutAtIndex:(unsigned long long)arg1 executeBlock:(/*^block*/id)arg2 ;
-(BOOL)isLayoutComplete;
-(unsigned long long)firstPageIndexNeedingLayout;
-(void)suspendBackgroundLayout;
-(void)resumeBackgroundLayout;
-(void)p_destroyBodyLayoutState;
-(void)p_updateBackgroundLayoutStartDate;
-(void)p_scheduleImmediateBGLayout;
-(void)layoutThroughPageIndex:(unsigned long long)arg1 forLayoutController:(id)arg2 ;
-(void)p_layoutThroughPageIndex:(unsigned long long)arg1 forLayoutController:(id)arg2 clearOffscreenInfos:(BOOL)arg3 ;
-(unsigned long long)p_pageIndexForCharIndex:(unsigned long long)arg1 caretAffinity:(int)arg2 forceLayout:(BOOL)arg3 searchAfterLayoutPoint:(BOOL)arg4 ;
-(NSRange)p_bodyRangeForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 allowAfterLayoutPoint:(BOOL)arg3 ;
-(NSRange)p_anchoredRangeForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 allowAfterLayoutPoint:(BOOL)arg3 ;
-(NSRange)p_footnoteLayoutRangeForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 allowAfterLayoutPoint:(BOOL)arg3 ;
-(id)p_pageHintForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 allowAfterLayoutPoint:(BOOL)arg3 ;
-(unsigned long long)p_pageIndexForAnchoredCharIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 searchAfterLayoutPoint:(BOOL)arg3 ;
-(unsigned long long)p_pageIndexForFootnoteIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 searchAfterLayoutPoint:(BOOL)arg3 ;
-(NSRange)pageRangeForSelection:(id)arg1 outEndIsValid:(BOOL*)arg2 ;
-(id)p_pageIndexPathForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 allowAfterLayoutPoint:(BOOL)arg3 ;
-(id)p_sectionHintForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 allowAfterLayoutPoint:(BOOL)arg3 ;
-(id)p_cachedPageLayoutForPageIndex:(unsigned long long)arg1 preferredLayoutController:(id)arg2 ;
-(void)withPageLayoutAtIndex:(unsigned long long)arg1 preferredLayoutController:(id)arg2 executeBlock:(/*^block*/id)arg3 ;
-(void)p_withPageLayoutAtIndex:(unsigned long long)arg1 preferredLayoutController:(id)arg2 executeBlock:(/*^block*/id)arg3 ;
-(BOOL)p_isLayoutComplete;
-(BOOL)okToAnchorDrawables:(id)arg1 toPageIndex:(unsigned long long)arg2 ;
-(BOOL)p_canAnchorDrawable:(id)arg1 toPageLayout:(id)arg2 ;
-(id)p_pageInfosForBodySelection:(id)arg1 ;
-(NSRange)pageRangeOfSectionIndex:(unsigned long long)arg1 ;
-(unsigned long long)pageIndexForFootnoteIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 ;
-(id)p_pageInfosForAttachmentAtBodyCharIndex:(unsigned long long)arg1 selectionPath:(id)arg2 ;
-(unsigned long long)pageIndexForAnchoredCharIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 ;
-(unsigned long long)p_layoutEndCharIndex;
-(unsigned long long)p_textPageIndexPrecedingPageIndex:(unsigned long long)arg1 ;
-(void)p_setNeedsLayoutOnPageIndex:(unsigned long long)arg1 ;
-(BOOL)p_isBackgroundLayoutActive;
-(void)p_invalidatePageIndex:(unsigned long long)arg1 ;
-(void)p_scheduleBGLayout;
-(id)p_pageHintForPageIndexPath:(id)arg1 ;
-(void)p_notifyObserversDidInvalidate;
-(id)p_lastValidPageHint;
-(unsigned long long)p_pageIndexContainingIndex:(unsigned long long)arg1 ofType:(int)arg2 ;
-(unsigned long long)p_lastValidTextPageIndex;
-(id)p_lastValidTextPageHint;
-(void)p_processWidowsAndInflationForLayoutController:(id)arg1 ;
-(void)p_checkForBackUp;
-(void)p_layoutNextPageForLayoutController:(id)arg1 dirtyRange:(NSRange)arg2 ;
-(void)p_didLayout;
-(void)p_prepareLayoutStateForNextPage;
-(void)p_prepareSectionHintForNextPage;
-(void)p_preparePageHintForNextPage;
-(void)p_notifyObserversWillLayoutWhileSyncing:(BOOL)arg1 ;
-(void)p_layoutIntoPageLayout:(id)arg1 outDidSync:(BOOL*)arg2 ;
-(void)p_notifyObserversDidLayoutWhileSyncing:(BOOL)arg1 ;
-(void)p_syncFromNextPageWithDirtyRange:(NSRange)arg1 ;
-(void)p_removeFinishedPageGenerators;
-(void)p_advanceSectionIndex;
-(void)p_layoutTextIntoPageLayout:(id)arg1 outDidSync:(BOOL*)arg2 ;
-(void)p_updateNonTextHintAtPageIndexPath:(id)arg1 ;
-(void)p_layoutFootnotesIntoPageLayout:(id)arg1 ;
-(void)p_updateTextHintAtPageIndexPath:(id)arg1 withTarget:(id)arg2 ;
-(unsigned long long)p_layoutEndFootnoteIndex;
-(id)p_textPageHintPrecedingPageIndexPath:(id)arg1 ;
-(id)p_pageHintPrecedingPageIndexPath:(id)arg1 ;
-(id)p_textPageHintPrecedingPageIndex:(unsigned long long)arg1 ;
-(void)p_resetPageGenerators;
-(void)p_cancelBGLayout;
-(void)p_updatePageCount;
-(void)p_handleBGLayoutStatusChange;
-(void)p_handleBackgroundLayout;
-(void)p_backgroundLayoutReadEntry;
-(void)p_handleBackgroundLayoutMainThreadEntry;
-(void)p_setBackgroundLayoutStartDate:(id)arg1 ;
-(void)p_layoutNextPageOnce;
-(void)archivedLayoutState:(id)arg1 setSectionIndex:(unsigned long long)arg2 ;
-(void)archivedLayoutState:(id)arg1 setSectionPageIndex:(unsigned long long)arg2 ;
-(void)archivedLayoutState:(id)arg1 setDocumentPageIndex:(unsigned long long)arg2 ;
-(void)archivedLayoutState:(id)arg1 setLastPageCount:(unsigned long long)arg2 ;
-(BOOL)archivedLayoutState:(id)arg1 setSectionHints:(id)arg2 ;
-(BOOL)archivedLayoutState:(id)arg1 setBodyLength:(unsigned long long)arg2 ;
-(unsigned long long)sectionIndexForArchivedLayoutState:(id)arg1 ;
-(unsigned long long)sectionPageIndexForArchivedLayoutState:(id)arg1 ;
-(unsigned long long)documentPageIndexForArchivedLayoutState:(id)arg1 ;
-(unsigned long long)lastPageCountForArchivedLayoutState:(id)arg1 ;
-(id)sectionHintsForArchivedLayoutState:(id)arg1 ;
-(unsigned long long)bodyLengthForArchivedLayoutState:(id)arg1 ;
-(void)scheduleImmediateBackgroundLayout;
-(NSRange)bodyRangeForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 ;
-(NSRange)anchoredRangeForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 ;
-(NSRange)footnoteLayoutRangeForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 ;
-(BOOL)pageBeginsWithPaginatedAttachment:(unsigned long long)arg1 ;
-(BOOL)pageEndsWithPaginatedAttachment:(unsigned long long)arg1 ;
-(BOOL)pageAtIndexHasBody:(unsigned long long)arg1 ;
-(unsigned long long)pageIndexForCharIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 ;
-(unsigned long long)sectionIndexForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 ;
-(NSRange)sectionBodyRangeForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 ;
-(unsigned long long)sectionPageIndexForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 ;
-(NSRange)sectionPageRangeForPageIndex:(unsigned long long)arg1 forceLayout:(BOOL)arg2 outEndIsValid:(BOOL*)arg3 ;
-(void)accquireLockAndPerformAction:(/*^block*/id)arg1 ;
-(BOOL)isLayoutCompleteThroughPageIndex:(unsigned long long)arg1 ;
-(BOOL)isLayoutInProgress;
-(id)footnoteLayoutController;
-(BOOL)okToAnchorDrawable:(id)arg1 toPageIndex:(unsigned long long)arg2 ;
-(id)pageInfosForInfo:(id)arg1 withSelectionPath:(id)arg2 ;
-(void)p_setNeedsLayoutFromSectionIndexToEnd:(unsigned long long)arg1 ;
-(void)p_forceRestartLayout;
-(void)p_insertPageLayoutIntoCache:(id)arg1 ;
-(void)p_removePageLayoutFromCache:(id)arg1 ;
-(id)p_textPageHintFollowingPageIndexPath:(id)arg1 ;
-(BOOL)backgroundLayoutEnabled;
-(void)dealloc;
-(unsigned long long)pageCount;
-(double)headerHeight;
-(double)footerHeight;
-(void)didScroll:(id)arg1 ;
-(void)willZoom:(id)arg1 ;
-(void)didZoom:(id)arg1 ;
-(void)willScroll:(id)arg1 ;
-(void)addLayoutObserver:(id)arg1 ;
-(void)removeLayoutObserver:(id)arg1 ;
-(void)setBackgroundLayoutEnabled:(BOOL)arg1 ;
-(void)teardown;
@end

