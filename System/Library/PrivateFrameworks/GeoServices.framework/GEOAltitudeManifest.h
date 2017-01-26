/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@class GEOAltitudeManifestReserved, NSString;

@interface GEOAltitudeManifest : NSObject <NSXMLParserDelegate, GEOResourceManifestTileGroupObserver> {

	GEOAltitudeManifestReserved* _reserved;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)commonInit;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)parseManifest:(id)arg1 ;
-(id)initWithoutObserver;
-(id)nameForRegion:(unsigned)arg1 ;
-(void)_reloadManifest;
-(unsigned)dataVersionForRegion:(unsigned)arg1 ;
-(BOOL)hasDataVersionForRegion:(unsigned)arg1 ;
-(unsigned)versionForRegion:(unsigned)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(BOOL)parseXml:(id)arg1 ;
-(BOOL)isValidTourId:(unsigned long long)arg1 ;
-(id)availableRegions;
-(id)tripIdsForRegion:(unsigned)arg1 ;
-(id)tourIdsForRegion:(unsigned)arg1 ;
@end

