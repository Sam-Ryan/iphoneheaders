/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:22 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBCommandTabSettings : _UISettings {

	BOOL _dimmingView;
	double _numberOfAppsLandscape;
	double _numberOfAppsPortrait;
	double _barHeight;
	double _barEdgeMarginLandscape;
	double _barEdgeMarginPortrait;
	double _iconMargin;
	double _selectionSquareSize;

}

@property (assign,nonatomic) BOOL dimmingView;                           //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,nonatomic) double numberOfAppsLandscape;               //@synthesize numberOfAppsLandscape=_numberOfAppsLandscape - In the implementation block
@property (assign,nonatomic) double numberOfAppsPortrait;                //@synthesize numberOfAppsPortrait=_numberOfAppsPortrait - In the implementation block
@property (assign,nonatomic) double barHeight;                           //@synthesize barHeight=_barHeight - In the implementation block
@property (assign,nonatomic) double barEdgeMarginLandscape;              //@synthesize barEdgeMarginLandscape=_barEdgeMarginLandscape - In the implementation block
@property (assign,nonatomic) double barEdgeMarginPortrait;               //@synthesize barEdgeMarginPortrait=_barEdgeMarginPortrait - In the implementation block
@property (assign,nonatomic) double iconMargin;                          //@synthesize iconMargin=_iconMargin - In the implementation block
@property (assign,nonatomic) double selectionSquareSize;                 //@synthesize selectionSquareSize=_selectionSquareSize - In the implementation block
+(id)settingsControllerModule;
-(void)setNumberOfAppsLandscape:(double)arg1 ;
-(void)setNumberOfAppsPortrait:(double)arg1 ;
-(void)setBarHeight:(double)arg1 ;
-(void)setBarEdgeMarginLandscape:(double)arg1 ;
-(void)setBarEdgeMarginPortrait:(double)arg1 ;
-(void)setIconMargin:(double)arg1 ;
-(void)setSelectionSquareSize:(double)arg1 ;
-(double)numberOfAppsLandscape;
-(double)numberOfAppsPortrait;
-(double)barEdgeMarginLandscape;
-(double)barEdgeMarginPortrait;
-(double)selectionSquareSize;
-(void)setDefaultValues;
-(double)barHeight;
-(BOOL)dimmingView;
-(void)setDimmingView:(BOOL)arg1 ;
-(double)iconMargin;
@end

