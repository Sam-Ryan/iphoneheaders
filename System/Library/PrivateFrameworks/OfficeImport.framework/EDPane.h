/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDReference;

@interface EDPane : NSObject {

	double mXSplitPosition;
	double mYSplitPosition;
	EDReference* mTopLeftCell;
	int mActivePane;
	int mPaneState;

}
+(id)pane;
-(void)dealloc;
-(id)init;
-(id)description;
-(int)activePane;
-(double)xSplitPosition;
-(double)ySplitPosition;
-(id)topLeftCell;
-(int)paneState;
-(void)setTopLeftCell:(id)arg1 ;
-(void)setXSplitPosition:(double)arg1 ;
-(void)setYSplitPosition:(double)arg1 ;
-(void)setActivePane:(int)arg1 ;
-(void)setPaneState:(int)arg1 ;
@end

