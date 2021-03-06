/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol MPAVRoutingTableViewCellDelegate;
@class UILabel, UISwitch, UIView, MPAVRoute;

@interface MPAVRoutingTableViewCell : UITableViewCell {

	UILabel* _mirroringLabel;
	UISwitch* _mirroringSwitch;
	UIView* _mirroringSeparatorView;
	BOOL _mirroringSwitchVisible;
	BOOL _debugCell;
	id<MPAVRoutingTableViewCellDelegate> _delegate;
	MPAVRoute* _route;

}

@property (assign,nonatomic,__weak) id<MPAVRoutingTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPAVRoute * route;                                                 //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) BOOL mirroringSwitchVisible;                                       //@synthesize mirroringSwitchVisible=_mirroringSwitchVisible - In the implementation block
@property (assign,getter=isDebugCell,nonatomic) BOOL debugCell;                                 //@synthesize debugCell=_debugCell - In the implementation block
-(void)setDelegate:(id<MPAVRoutingTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MPAVRoutingTableViewCellDelegate>)delegate;
-(void)setRoute:(MPAVRoute *)arg1 ;
-(MPAVRoute *)route;
-(void)_configureLabel:(id)arg1 ;
-(BOOL)_shouldShowMirroringAsEnabledForRoute:(id)arg1 ;
-(void)setMirroringSwitchVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_mirroringSwitchValueDidChange:(id)arg1 ;
-(void)setMirroringSwitchVisible:(BOOL)arg1 ;
-(void)setDebugCell:(BOOL)arg1 ;
-(BOOL)mirroringSwitchVisible;
-(BOOL)isDebugCell;
@end

