/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:27:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKit/UIButton.h>

@class UIImage;

@interface TSKCenterTilingButton : UIButton {

	UIImage* mLeftCapImage_Normal;
	UIImage* mLeftCapImage_Disabled;
	UIImage* mLeftCapImage_Active;
	UIImage* mLeftCapImage_Selected;
	UIImage* mLeftCapImage_ActiveSelected;
	UIImage* mRightCapImage_Normal;
	UIImage* mRightCapImage_Disabled;
	UIImage* mRightCapImage_Active;
	UIImage* mRightCapImage_Selected;
	UIImage* mRightCapImage_ActiveSelected;
	UIImage* mCenterTileImage_Normal;
	UIImage* mCenterTileImage_Disabled;
	UIImage* mCenterTileImage_Active;
	UIImage* mCenterTileImage_Selected;
	UIImage* mCenterTileImage_ActiveSelected;
	UIImage* mLeftCenterTileImage_Normal;
	UIImage* mLeftCenterTileImage_Disabled;
	UIImage* mLeftCenterTileImage_Active;
	UIImage* mLeftCenterTileImage_Selected;
	UIImage* mLeftCenterTileImage_ActiveSelected;
	UIImage* mRightCenterTileImage_Normal;
	UIImage* mRightCenterTileImage_Disabled;
	UIImage* mRightCenterTileImage_Active;
	UIImage* mRightCenterTileImage_Selected;
	UIImage* mRightCenterTileImage_ActiveSelected;
	int mTilingType;

}
-(void)p_resetBackgroundImageForState:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 andTilingType:(int)arg2 ;
-(id)leftCapImageForState:(unsigned long long)arg1 ;
-(id)rightCapImageForState:(unsigned long long)arg1 ;
-(id)centerTileImageForState:(unsigned long long)arg1 ;
-(id)leftCenterTileImageForState:(unsigned long long)arg1 ;
-(id)rightCenterTileImageForState:(unsigned long long)arg1 ;
-(void)p_tileButtedToCapLtoR:(id)arg1 inRect:(CGRect)arg2 ;
-(void)p_tileButtedToCapRtoL:(id)arg1 inRect:(CGRect)arg2 ;
-(void)p_tileHorizCenterOutwardwithLeft:(id)arg1 andRight:(id)arg2 inRect:(CGRect)arg3 ;
-(void)p_tileSimple:(id)arg1 inRect:(CGRect)arg2 ;
-(void)setLeftCapImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setRightCapImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setCenterTileImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setLeftCenterTileImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setRightCenterTileImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
@end

