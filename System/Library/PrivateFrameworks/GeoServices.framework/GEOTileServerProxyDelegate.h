/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOTileServerProxyDelegate
@required
-(void)proxy:(id)arg1 willGoToNetworkForTiles:(id)arg2;
-(void)proxy:(id)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2;
-(void)proxy:(id)arg1 didShrinkDiskCacheByAmount:(unsigned long long)arg2;
-(void)proxy:(id)arg1 loadedTile:(id)arg2 forKey:(const GEOTileKey*)arg3 info:(id)arg4;
-(void)proxy:(id)arg1 failedToLoadTiles:(id)arg2 error:(id)arg3;
-(void)proxy:(id)arg1 failedToLoadAllPendingTilesWithError:(id)arg2;

@end

