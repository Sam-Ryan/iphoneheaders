/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMInvocationTrampoline : NSObject {

	id _target;

}

@property (retain) id target;              //@synthesize target=_target - In the implementation block
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)forwardInvocation:(id)arg1 ;
-(void)performInvocation:(id)arg1 ;
@end

