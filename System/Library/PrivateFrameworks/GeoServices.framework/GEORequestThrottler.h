/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSLock;

@interface GEORequestThrottler : NSObject {

	NSMapTable* _throttleMap;
	NSLock* _lock;

}
+(id)sharedThrottler;
-(void)dealloc;
-(id)init;
-(unsigned long long)throttleStateLevelForKey:(id)arg1 ;
-(id)_throttlePolicyForKey:(id)arg1 ;
-(double)throttleStateResetTimeRemainingForKey:(id)arg1 ;
-(BOOL)allowRequestForKey:(id)arg1 ;
@end

