/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskOperation.h>

@class NSError, CATTaskClient;

@interface CATRemoteTaskOperation : CATTaskOperation {

	NSError* mClientError;
	CATTaskClient* _client;

}

@property (nonatomic,readonly) CATTaskClient * client;              //@synthesize client=_client - In the implementation block
+(BOOL)isCancelable;
+(id)invalidRemoteTaskWithRequest:(id)arg1 error:(id)arg2 ;
-(BOOL)isAsynchronous;
-(void)cancel;
-(void)main;
-(void)fetchProgress;
-(void)operationWillFinish;
-(id)initWithRequest:(id)arg1 client:(id)arg2 ;
-(void)clientFailedWithError:(id)arg1 ;
-(void)processMessage:(id)arg1 ;
-(id)initWithRequest:(id)arg1 clientError:(id)arg2 ;
-(void)cancelOperationIfNeeded;
-(void)updateProgressWithRemoteProgress:(id)arg1 ;
-(void)updateCompletedUnitCount:(long long)arg1 andTotalUnitCount:(long long)arg2 ;
-(CATTaskClient *)client;
@end
