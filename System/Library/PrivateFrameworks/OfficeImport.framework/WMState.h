/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMState.h>

@class CMOutlineState, NSMutableDictionary, WDText;

@interface WMState : CMState {

	CMOutlineState* currentListState;
	CMOutlineState* outlineState;
	NSMutableDictionary* listStates;
	WDText* mLastHeader;
	WDText* mLastFooter;
	unsigned mCurrentPage;
	unsigned long long mBlockIndex;
	unsigned long long mRunIndex;
	float mTopMargin;
	float mLeftMargin;
	float mPageHeight;
	BOOL mIsFrame;
	BOOL mIsFrameStart;
	BOOL mIsFrameEnd;
	BOOL mIsHeaderOrFooter;
	float mTotalPageHeight;

}
-(void)dealloc;
-(id)init;
-(float)topMargin;
-(void)setCurrentPage:(unsigned)arg1 ;
-(unsigned)currentPage;
-(float)leftMargin;
-(float)pageHeight;
-(BOOL)isHeaderOrFooter;
-(float)pageOffset;
-(float)totalPageHeight;
-(void)setTotalPageHeight:(float)arg1 ;
-(unsigned long long)runIndex;
-(void)setRunIndex:(unsigned long long)arg1 ;
-(BOOL)isCurrentListId:(unsigned long long)arg1 ;
-(id)listStateForListWithId:(int)arg1 settingUpStateIfNeededWithDocument:(id)arg2 ;
-(void)setCurrentListState:(id)arg1 ;
-(id)currentListState;
-(void)setBlockIndex:(unsigned long long)arg1 ;
-(BOOL)isFrame;
-(unsigned long long)blockIndex;
-(void)setIsFrame:(BOOL)arg1 ;
-(void)setIsFrameStart:(BOOL)arg1 ;
-(void)setIsFrameEnd:(BOOL)arg1 ;
-(BOOL)isFrameEnd;
-(BOOL)isFrameStart;
-(void)setTopMargin:(float)arg1 ;
-(void)setLeftMargin:(float)arg1 ;
-(void)setPageHeight:(float)arg1 ;
-(void)setLastHeader:(id)arg1 ;
-(id)lastHeader;
-(void)setIsHeaderOrFooter:(BOOL)arg1 ;
-(void)setLastFooter:(id)arg1 ;
-(id)lastFooter;
-(void)clearCurrentListState;
-(BOOL)isCurrentListStateOverridden;
-(id)listStateForListId:(unsigned long long)arg1 ;
-(void)setListState:(id)arg1 forListId:(unsigned long long)arg2 ;
-(id)outlineState;
@end

