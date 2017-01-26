/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBAppSwitcherScrollingViewDelegate <NSObject>
@required
-(id)switcherScroller:(id)arg1 viewForDisplayItem:(id)arg2;
-(BOOL)switcherScroller:(id)arg1 isDisplayItemRemovable:(id)arg2;
-(BOOL)switcherScrollerIsRelayoutBlocked:(id)arg1;
-(CGSize*)switcherScrollerItemSize:(id)arg1 forOrientation:(long long)arg2;
-(double)switcherScrollerDistanceBetweenItemCenters:(id)arg1 forOrientation:(long long)arg2;
-(void)switcherScroller:(id)arg1 contentOffsetChanged:(double)arg2;
-(void)switcherScroller:(id)arg1 itemTapped:(id)arg2;
-(void)switcherScrollerBeganPanning:(id)arg1;
-(void)switcherScroller:(id)arg1 displayItemWantsToBeRemoved:(id)arg2;
-(BOOL)switcherScroller:(id)arg1 displayItemWantsToBeKeptInViewHierarchy:(id)arg2;
-(void)switcherScrollerDidEndScrolling:(id)arg1;
-(void)switcherScrollerBeganMoving:(id)arg1;
-(double)reachabilityOffsetForSwitcherScroller:(id)arg1;

@end

