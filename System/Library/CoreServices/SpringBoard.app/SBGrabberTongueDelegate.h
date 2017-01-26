/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:23 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBGrabberTongueDelegate <NSObject>
@optional
-(double)grabberTongueCenterOnEdge:(id)arg1;
-(double)grabberTongueWidthOfGrabberFreeRegion:(id)arg1;
-(double)grabberTongueWidthOfActiveEdge:(id)arg1;
-(void)grabberTongueBeganPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
-(void)grabberTongueUpdatedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
-(void)grabberTongueEndedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
-(void)grabberTongueCanceledPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
-(void)grabberTongueWillPresent:(id)arg1;

@required
-(BOOL)grabberTongueOrPullEnabled:(id)arg1;
-(BOOL)grabberTongueRequiredOutsideGrabberFreeRegion:(id)arg1;
-(BOOL)grabberTongueRequiredForWholeEdge:(id)arg1;

@end

