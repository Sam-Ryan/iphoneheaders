/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <MapsLockScreen/MNBannerView.h>

@class MNGuidanceManeuverView, UILabel, UIImageView, MNNavManeuverBannerItem;

@interface MNStarkBannerView : MNBannerView {

	MNGuidanceManeuverView* _maneuverView;
	UILabel* _distanceLabel;
	UILabel* _instructionsLabel;
	UIImageView* _shieldImageView;
	CGPoint _shieldCenterPoint;

}

@property (nonatomic,readonly) MNNavManeuverBannerItem * navManeuverBannerItem; 
-(void)_setInstructionsText:(id)arg1 ;
-(void)updateFromBannerItem;
-(CGPoint)_centerPointOffset;
-(MNNavManeuverBannerItem *)navManeuverBannerItem;
-(id)_instructionsTextAttributes;
-(void)_setDistanceText:(id)arg1 ;
-(void)_updateDuringLayoutInstructionsFromItemForAvailableWidth:(double)arg1 ;
-(id)_textShadow;
-(void)layoutSubviews;
-(id)initWithContext:(id)arg1 ;
@end
