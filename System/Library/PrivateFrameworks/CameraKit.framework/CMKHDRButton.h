/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CMKExpandableMenuButton.h>

@class UIImageView;

@interface CMKHDRButton : CMKExpandableMenuButton {

	BOOL _allowsAutomaticHDR;
	UIImageView* __glyphView;

}

@property (assign,nonatomic) int HDRMode; 
@property (assign,nonatomic) BOOL allowsAutomaticHDR;                 //@synthesize allowsAutomaticHDR=_allowsAutomaticHDR - In the implementation block
@property (nonatomic,readonly) UIImageView * _glyphView;              //@synthesize _glyphView=__glyphView - In the implementation block
-(void)reloadData;
-(id)headerView;
-(void)_commonCMKHDRButtonInitialization;
-(long long)numberOfMenuItems;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
-(void)setHDRMode:(int)arg1 ;
-(int)HDRMode;
-(id)initWithExpansionOrientation:(long long)arg1 ;
-(void)setAllowsAutomaticHDR:(BOOL)arg1 ;
-(UIImageView *)_glyphView;
-(id)hiddenIndexesWhileCollapsed;
-(int)modeForIndex:(long long)arg1 ;
-(long long)indexForMode:(int)arg1 ;
-(void)_updateCurrentGlyphImage;
-(id)_currentGlyphImage;
-(void)prepareHeaderViewForExpanding:(BOOL)arg1 ;
-(BOOL)allowsAutomaticHDR;
@end

