/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/pipelined
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <pipelined/pipelined-Structs.h>
@interface DelayedBlockHandle : NSObject {

	/*^block*/id _cb;

}

@property (assign,nonatomic) BOOL cancelled; 
+(id)dispatch_after:(duration<long long, std::__1::ratio<1, 1000000000> >)arg1 block:(/*^block*/id)arg2 onQueue:(id)arg3 ;
+(id)dispatch_after:(duration<long long, std::__1::ratio<1, 1000000000> >)arg1 block:(/*^block*/id)arg2 ;
-(id)init:(/*^block*/id)arg1 ;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
@end

