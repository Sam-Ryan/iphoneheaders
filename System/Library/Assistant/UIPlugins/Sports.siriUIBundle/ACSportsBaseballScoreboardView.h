/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsPeriodicScoreboardView.h>

@class ACSportsMatchupLineScoreView, SASportsBaseballMatchup;

@interface ACSportsBaseballScoreboardView : ACSportsPeriodicScoreboardView {

	ACSportsMatchupLineScoreView* _hitsLineScoreView;
	ACSportsMatchupLineScoreView* _errorsLineScoreView;

}

@property (nonatomic,retain) SASportsBaseballMatchup * matchup; 
+(double)lineScoreRightPadding;
+(double)totalLineScoreLeftPadding;
+(id)totalLineScorePeriodName;
+(long long)extraLineScoreColumns;
+(BOOL)isCondensedScoreView;
-(void)didChangeMatchupFromMatchup:(id)arg1 ;
-(double)legendHeight;
-(void)setUnifiedLegendHeight:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

