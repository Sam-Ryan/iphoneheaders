/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSLock;

@interface GEOGeocodeRequester : NSObject {

	NSMapTable* _pendingBatchGeocodes;
	NSLock* _pendingGeocodesLock;

}
+(id)sharedGeocodeRequester;
-(void)dealloc;
-(id)init;
-(void)cancelBatchReverseGeocode:(id)arg1 ;
-(void)batchReverseGeocode:(id)arg1 success:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
@end

