/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:40 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class NSDate, MicroPaymentQueueRequest, NSString;

@interface LoadMicroPaymentQueueCountOperation : ISOperation <ISStoreURLOperationDelegate> {

	NSDate* _lastQueueCheckDate;
	long long _queueItemCount;
	MicroPaymentQueueRequest* _request;
	NSString* _urlBagKey;

}

@property (retain) NSDate * lastQueueCheckDate;                     //@synthesize lastQueueCheckDate=_lastQueueCheckDate - In the implementation block
@property (copy) MicroPaymentQueueRequest * request;                //@synthesize request=_request - In the implementation block
@property (retain) NSString * URLBagKey;                            //@synthesize urlBagKey=_urlBagKey - In the implementation block
@property (assign) long long queueItemCount;                        //@synthesize queueItemCount=_queueItemCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)lastQueueCheckDate;
-(BOOL)_loadCountReturningError:(id*)arg1 ;
-(BOOL)_setCountWithResponse:(id)arg1 error:(id*)arg2 ;
-(void)setQueueItemCount:(long long)arg1 ;
-(void)setLastQueueCheckDate:(NSDate *)arg1 ;
-(long long)queueItemCount;
-(void)dealloc;
-(MicroPaymentQueueRequest *)request;
-(void)run;
-(void)setRequest:(MicroPaymentQueueRequest *)arg1 ;
-(NSString *)URLBagKey;
-(void)setURLBagKey:(NSString *)arg1 ;
@end

