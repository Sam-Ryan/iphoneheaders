/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <UIKit/UIView.h>

@class SASportsMetadataGroup, UILabel, NSMutableArray;

@interface ACSportsAthleteStatGroupView : UIView {

	SASportsMetadataGroup* _metadataGroup;
	UILabel* _headerLabel;
	NSMutableArray* _statLabels;

}
-(void)_setStatLabelCount:(unsigned long long)arg1 ;
-(void)setMetadataGroup:(id)arg1 ;
-(void)_setupText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

