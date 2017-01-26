/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BRCNotificationPipe;

@interface BRCNotificationGatherer : NSObject {

	BRCNotificationPipe* _pipe;
	/*^block*/id _gatherReply;

}
-(id)init;
-(void)invalidate;
-(void)done;
-(id)initWithNotificationPipe:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)continueGatheringWithBatchSize:(long long)arg1 ;
@end
