/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSInvocation;

@interface NSInvocationOperation : NSOperation {

	id _inv;
	id _exception;
	void* _reserved2;

}

@property (retain,readonly) NSInvocation * invocation; 
@property (retain,readonly) id result; 
-(void)dealloc;
-(id)init;
-(id)initWithInvocation:(id)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)main;
-(NSInvocation *)invocation;
-(id)result;
@end

