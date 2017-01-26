/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:23 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class SBSearchBackdropView, UIView;

@interface _SBSearchControllerView : UIView {

	SBSearchBackdropView* _searchBackdropView;
	UIView* _searchContainerView;
	UIView* _searchContentView;

}

@property (assign,nonatomic,__weak) SBSearchBackdropView * searchBackdropView;              //@synthesize searchBackdropView=_searchBackdropView - In the implementation block
@property (assign,nonatomic,__weak) UIView * searchContainerView;                           //@synthesize searchContainerView=_searchContainerView - In the implementation block
@property (assign,nonatomic,__weak) UIView * searchContentView;                             //@synthesize searchContentView=_searchContentView - In the implementation block
-(SBSearchBackdropView *)searchBackdropView;
-(void)setSearchBackdropView:(SBSearchBackdropView *)arg1 ;
-(void)setSearchContainerView:(UIView *)arg1 ;
-(void)setSearchContentView:(UIView *)arg1 ;
-(UIView *)searchContentView;
-(UIView *)searchContainerView;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

