/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface _DECScheduler : NSObject {

	NSObject*<OS_xpc_object> _executionCriteria;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;              //@synthesize block=_block - In the implementation block
-(id)block;
-(void)setBlock:(id)arg1 ;
-(id)initWithActivityIdentifier:(id)arg1 andExecutionCriteria:(id)arg2 ;
@end

