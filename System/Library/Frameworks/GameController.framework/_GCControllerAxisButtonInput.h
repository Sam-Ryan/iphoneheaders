/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/_GCControllerButtonInput.h>

@class _GCControllerAxisInput;

@interface _GCControllerAxisButtonInput : _GCControllerButtonInput {

	_GCControllerAxisInput* _axis;
	BOOL _positive;

}

@property (assign,nonatomic,__weak) _GCControllerAxisInput * axis;              //@synthesize axis=_axis - In the implementation block
@property (getter=isPositive,nonatomic,readonly) BOOL positive;                 //@synthesize positive=_positive - In the implementation block
-(id)description;
-(float)value;
-(void)setAxis:(_GCControllerAxisInput *)arg1 ;
-(_GCControllerAxisInput *)axis;
-(BOOL)_setValue:(float)arg1 ;
-(id)collection;
-(BOOL)_setValueFromAxisButton:(float)arg1 queue:(id)arg2 ;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 queue:(id)arg2 ;
-(BOOL)isAnalog;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 ;
-(id)initWithAxis:(id)arg1 positive:(BOOL)arg2 ;
-(BOOL)_setValueFromAxisButton:(float)arg1 ;
-(BOOL)isPositive;
@end

