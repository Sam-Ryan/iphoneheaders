/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@class KNUIState, KNTheme, KNSlideTree, TSSStylesheet, KNRecording, KNSoundtrack;

@interface KNShow : TSPObject {

	KNUIState* mUIState;
	KNTheme* mTheme;
	KNSlideTree* mSlideTree;
	TSSStylesheet* mStylesheet;
	KNRecording* mRecording;
	CGSize mSize;
	double mAutoplayTransitionDelay;
	double mAutoplayBuildDelay;
	double mIdleTimerDelay;
	int mMode;
	BOOL mLoopPresentation;
	BOOL mIdleTimerActive;
	BOOL mAutomaticallyPlaysUponOpen;
	BOOL mNeedsToUpdateThumbnails;
	BOOL mWasImportedAsPreUFF;
	BOOL mLocalizeDocument;
	KNSoundtrack* mSoundtrack;

}

@property (assign,nonatomic) CGSize size; 
@property (nonatomic,retain) KNUIState * uiState; 
@property (nonatomic,retain) KNTheme * theme; 
@property (nonatomic,retain) KNSlideTree * slideTree; 
@property (nonatomic,readonly) TSSStylesheet * stylesheet; 
@property (assign,nonatomic) double autoplayTransitionDelay; 
@property (assign,nonatomic) double autoplayBuildDelay; 
@property (assign,nonatomic) double idleTimerDelay; 
@property (assign,nonatomic) int mode; 
@property (nonatomic,retain) KNSoundtrack * soundtrack; 
@property (nonatomic,retain) KNRecording * recording; 
@property (assign,nonatomic) BOOL loopPresentation; 
@property (assign,nonatomic) BOOL idleTimerActive; 
@property (assign,nonatomic) BOOL automaticallyPlaysUponOpen; 
@property (nonatomic,readonly) BOOL slideNumbersVisible; 
@property (nonatomic,readonly) BOOL needsToUpdateThumbnails; 
@property (nonatomic,readonly) BOOL wasImportedAsPreUFF; 
@property (assign,nonatomic) BOOL localizeDocument; 
@property (nonatomic,readonly) BOOL allSlidesSkipped; 
+(id)showWithSize:(CGSize)arg1 context:(id)arg2 ;
+(unsigned long long)maximumWidthForExport;
+(unsigned long long)maximumHeightForExport;
+(unsigned long long)minimumWidth;
+(unsigned long long)maximumWidth;
+(unsigned long long)maximumHeight;
+(unsigned long long)minimumHeight;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(ShowArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const ShowArchive*)arg1 unarchiver:(id)arg2 ;
-(void)willModify;
-(void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1 ;
-(KNSlideTree *)slideTree;
-(BOOL)loopPresentation;
-(KNUIState *)uiState;
-(void)setUiState:(KNUIState *)arg1 ;
-(void)setLocalizeDocument:(BOOL)arg1 ;
-(id)initWithSize:(CGSize)arg1 context:(id)arg2 ;
-(unsigned long long)indexOfSlideNode:(id)arg1 ;
-(void)setSlideTree:(KNSlideTree *)arg1 ;
-(double)autoplayTransitionDelay;
-(void)setAutoplayTransitionDelay:(double)arg1 ;
-(double)autoplayBuildDelay;
-(void)setAutoplayBuildDelay:(double)arg1 ;
-(double)idleTimerDelay;
-(void)setIdleTimerDelay:(double)arg1 ;
-(void)setLoopPresentation:(BOOL)arg1 ;
-(BOOL)idleTimerActive;
-(void)setIdleTimerActive:(BOOL)arg1 ;
-(BOOL)automaticallyPlaysUponOpen;
-(void)setAutomaticallyPlaysUponOpen:(BOOL)arg1 ;
-(KNSoundtrack *)soundtrack;
-(void)setSoundtrack:(KNSoundtrack *)arg1 ;
-(BOOL)slideNumbersVisible;
-(id)slideNodeAtIndex:(unsigned long long)arg1 ;
-(id)slideNodesAtIndexes:(id)arg1 ;
-(BOOL)allSlidesSkipped;
-(BOOL)needsToUpdateThumbnails;
-(BOOL)wasImportedAsPreUFF;
-(BOOL)localizeDocument;
-(CGSize)size;
-(void)dealloc;
-(CGPoint)center;
-(void)setSize:(CGSize)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)setRecording:(KNRecording *)arg1 ;
-(KNRecording *)recording;
-(KNTheme *)theme;
-(TSSStylesheet *)stylesheet;
-(void)setTheme:(KNTheme *)arg1 ;
@end

