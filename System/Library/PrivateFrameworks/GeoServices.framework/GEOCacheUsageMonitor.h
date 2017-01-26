/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <GeoServices/GeoServices-Structs.h>
@class NSLock, NSMutableDictionary, NSObject;

@interface GEOCacheUsageMonitor : NSObject {

	NSLock* _lock;
	NSMutableDictionary* _typeToHits;
	NSMutableDictionary* _typeToMisses;
	NSMutableDictionary* _tileSetStyleToHits;
	NSMutableDictionary* _tileSetStyleToMisses;
	NSObject*<OS_dispatch_source> _timer;

}
+(id)sharedMonitor;
-(void)dealloc;
-(id)init;
-(void)flush;
-(void)recordCacheHitForTileKey:(const GEOTileKey*)arg1 ;
-(void)_startTimerIfNecessary;
-(void)recordCacheHitForType:(int)arg1 ;
-(void)recordCacheMissForTileKey:(const GEOTileKey*)arg1 ;
-(void)recordCacheMissForType:(int)arg1 ;
@end

