/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
@interface Reachability : NSObject {

	BOOL _alwaysReturnLocalWiFiStatus;
	SCNetworkReachabilityRef _reachabilityRef;
	unsigned _flags;

}

@property (assign) unsigned flags;              //@synthesize flags=_flags - In the implementation block
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
+(id)reachabilityWithHostName:(id)arg1 ;
-(void)dealloc;
-(BOOL)connectionRequired;
-(void)resetFlags;
-(long long)localWiFiStatusForFlags:(unsigned)arg1 ;
-(long long)networkStatusForFlags:(unsigned)arg1 ;
-(long long)currentReachabilityStatus;
-(BOOL)startNotifier;
-(void)stopNotifier;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)flags;
@end

