/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@interface _CATTransportDidSendMessageOperation : CATOperation {

	/*^block*/id _block;

}

@property (nonatomic,copy) id block;              //@synthesize block=_block - In the implementation block
+(id)blockOperationWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isAsynchronous;
-(void)cancel;
-(BOOL)isCancelled;
-(void)main;
-(BOOL)isCanceled;
-(id)block;
-(void)setBlock:(id)arg1 ;
@end

