/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSLock;

@interface GEOMapMatchRequester : NSObject {

	NSMapTable* _pendingRequests;
	NSLock* _pendingRequestsLock;

}
+(id)sharedRequester;
-(void)dealloc;
-(id)init;
-(void)cancelRequest:(id)arg1 ;
-(void)startRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
@end

