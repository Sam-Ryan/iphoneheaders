/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEODBReader.h>

@interface GEOPlaceDataDBReader : GEODBReader {

	sqlite3_stmtRef _sqlMUIDForPhoneNumber;
	sqlite3_stmtRef _sqlAllComponents;
	sqlite3_stmtRef _sqlAllPhoneNumbers;
	sqlite3_stmtRef _sqlAllComponentsPerPlaceData;
	sqlite3_stmtRef _sqlAllComponentsForPlaceData;

}
-(id)componentForKey:(_GEOPlaceDataComponentKey)arg1 ;
-(void)dealloc;
-(void)_openDB;
-(id)allCacheEntries;
-(unsigned long long)muidForPhoneNumber:(unsigned long long)arg1 ;
-(id)placeDataForMUID:(unsigned long long)arg1 ;
-(id)placeDataForPhoneNumber:(unsigned long long)arg1 ;
-(id)_placeDataForIdentifier:(unsigned long long)arg1 ;
-(id)placeDataForKey:(GEOTileKey)arg1 ;
@end

