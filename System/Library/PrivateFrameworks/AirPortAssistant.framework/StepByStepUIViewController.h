/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/AssistantSubUIViewController.h>

@class UIView, NetTopoMiniStaticLayout, UILabel, UIActivityIndicatorView;

@interface StepByStepUIViewController : AssistantSubUIViewController {

	UIView* topoView;
	NetTopoMiniStaticLayout* topoLayout;
	UIView* tableHeaderContainerView;
	UIView* justTextContainerView;
	UILabel* justTextLabel;
	UIView* tableFooterContainerView;
	UIView* spinnerWithStatusBelowView;
	UILabel* spinnerWithStatusBelowLabel;
	UIActivityIndicatorView* spinnerWithStatusBelowSpinner;
	int sbsMode;

}

@property (nonatomic,retain) UIView * topoView; 
@property (nonatomic,retain) NetTopoMiniStaticLayout * topoLayout; 
@property (nonatomic,retain) UIView * tableHeaderContainerView; 
@property (nonatomic,retain) UIView * justTextContainerView; 
@property (assign,nonatomic) UILabel * justTextLabel; 
@property (nonatomic,retain) UIView * tableFooterContainerView; 
@property (nonatomic,retain) UIView * spinnerWithStatusBelowView; 
@property (nonatomic,retain) UILabel * spinnerWithStatusBelowLabel; 
@property (nonatomic,retain) UIActivityIndicatorView * spinnerWithStatusBelowSpinner; 
@property (assign,nonatomic) int sbsMode; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setJustTextContainerView:(UIView *)arg1 ;
-(void)setSpinnerWithStatusBelowView:(UIView *)arg1 ;
-(void)setTopoView:(UIView *)arg1 ;
-(void)setTableHeaderContainerView:(UIView *)arg1 ;
-(void)stepByStepUpdateProgress:(id)arg1 forState:(int)arg2 ;
-(NetTopoMiniStaticLayout *)topoLayout;
-(UIView *)topoView;
-(void)setTopoLayout:(NetTopoMiniStaticLayout *)arg1 ;
-(UILabel *)justTextLabel;
-(UIView *)justTextContainerView;
-(void)setJustTextLabel:(UILabel *)arg1 ;
-(UIView *)spinnerWithStatusBelowView;
-(UIView *)tableHeaderContainerView;
-(UILabel *)spinnerWithStatusBelowLabel;
-(UIActivityIndicatorView *)spinnerWithStatusBelowSpinner;
-(void)setSpinnerWithStatusBelowLabel:(UILabel *)arg1 ;
-(void)setSpinnerWithStatusBelowSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setTableFooterContainerView:(UIView *)arg1 ;
-(UIView *)tableFooterContainerView;
-(void)syncTopoUIForTarget:(id)arg1 andSource:(id)arg2 andNetwork:(id)arg3 connectionType:(id)arg4 ;
-(int)sbsMode;
-(void)setSbsMode:(int)arg1 ;
@end

