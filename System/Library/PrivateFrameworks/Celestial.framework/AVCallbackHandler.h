/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCondition;

@interface AVCallbackHandler : NSObject {

	id _target;
	SEL _action;
	SEL _mainThreadAction;
	NSCondition* _condition;
	id _params;

}

@property (assign) id target;                         //@synthesize target=_target - In the implementation block
@property (assign) SEL action;                        //@synthesize action=_action - In the implementation block
@property (assign) SEL mainThreadAction;              //@synthesize mainThreadAction=_mainThreadAction - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)setAction:(SEL)arg1 ;
-(SEL)mainThreadAction;
-(void)setCallbackParams:(id)arg1 ;
-(id)waitForCallbackParams;
-(BOOL)hasParams;
-(void)setMainThreadAction:(SEL)arg1 ;
@end

