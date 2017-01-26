/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIPress, UIPressesEvent;

@interface UIGestureDelayedPress : NSObject <NSCopying> {

	long long _delayCount;
	BOOL _cloneForSecondDelivery;
	UIPress* _press;
	UIPress* _stateWhenDelayed;
	UIPress* _stateWhenDelivered;
	UIPressesEvent* _event;

}

@property (retain) UIPress * press;                           //@synthesize press=_press - In the implementation block
@property (retain) UIPress * stateWhenDelayed;                //@synthesize stateWhenDelayed=_stateWhenDelayed - In the implementation block
@property (retain) UIPress * stateWhenDelivered;              //@synthesize stateWhenDelivered=_stateWhenDelivered - In the implementation block
@property (retain) UIPressesEvent * event;                    //@synthesize event=_event - In the implementation block
@property (assign) BOOL cloneForSecondDelivery;               //@synthesize cloneForSecondDelivery=_cloneForSecondDelivery - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIPressesEvent *)event;
-(void)setEvent:(UIPressesEvent *)arg1 ;
-(void)setStateWhenDelayed:(UIPress *)arg1 ;
-(BOOL)cloneForSecondDelivery;
-(long long)decrementDelayCount;
-(void)incrementDelayCount;
-(long long)delayCount;
-(long long)phaseForDelivery;
-(double)timestampForDelivery;
-(UIPress *)stateWhenDelayed;
-(UIPress *)stateWhenDelivered;
-(void)setStateWhenDelivered:(UIPress *)arg1 ;
-(void)setCloneForSecondDelivery:(BOOL)arg1 ;
-(void)setPress:(UIPress *)arg1 ;
-(void)saveCurrentPressState;
-(UIPress *)press;
@end

