/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOSearchAttributionServerProxy.h>

@class NSMapTable, NSLock, NSMutableArray, GEOSearchAttributionManifest, NSString;

@interface GEOSearchAttributionServerLocalProxy : NSObject <GEOSearchAttributionServerProxy> {

	NSMapTable* _listeners;
	NSLock* _listenersLock;
	BOOL _updatingManifest;
	NSMutableArray* _updateManifestCompletionHandlers;
	NSMutableArray* _updateManifestErrorHandlers;
	GEOSearchAttributionManifest* _attributionManifest;
	NSLock* _attributionManifestLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)loadAttributionInfoForIdentifier:(id)arg1 version:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)_sendError:(id)arg1 toListener:(id)arg2 ;
-(void)_loadAttributionInfoForListener:(id)arg1 hasUpdatedManifest:(BOOL)arg2 ;
-(void)_updateManifestWithCompletionHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_pruneOldAttributionLogos;
-(void)_sendInfo:(id)arg1 updatedManifest:(BOOL)arg2 toListener:(id)arg3 ;
-(id)_attributionManifest;
@end

