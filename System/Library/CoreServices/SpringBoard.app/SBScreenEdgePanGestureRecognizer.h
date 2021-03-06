/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:23 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIScreenEdgePanGestureRecognizer.h>

@interface SBScreenEdgePanGestureRecognizer : UIScreenEdgePanGestureRecognizer {

	BOOL _shouldUseGrapeFlags;
	double _grabberActiveZoneWidth;

}

@property (assign,nonatomic) double grabberActiveZoneWidth;                                      //@synthesize grabberActiveZoneWidth=_grabberActiveZoneWidth - In the implementation block
@property (assign,nonatomic,__weak) id<SBSystemGestureRecognizerDelegate> delegate; 
@property (assign,nonatomic) BOOL shouldUseGrapeFlags;                                           //@synthesize shouldUseGrapeFlags=_shouldUseGrapeFlags - In the implementation block
-(BOOL)isLocationWithinGrabberActiveZone;
-(void)sb_commonInitScreenEdgePanGestureRecognizer;
-(double)grabberActiveZoneWidth;
-(void)setGrabberActiveZoneWidth:(double)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setShouldUseGrapeFlags:(BOOL)arg1 ;
-(BOOL)shouldUseGrapeFlags;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 ;
-(BOOL)_shouldUseGrapeFlags;
-(CGPoint)_locationForTouch:(id)arg1 ;
-(long long)_touchInterfaceOrientation;
@end

