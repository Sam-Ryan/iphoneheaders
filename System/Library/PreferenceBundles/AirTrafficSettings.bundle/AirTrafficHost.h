/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:34:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AirTrafficSettings.bundle/AirTrafficSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSNumber;

@interface AirTrafficHost : NSObject {

	NSDictionary* _hostDict;

}

@property (getter=libraryIdentifier,nonatomic,readonly) NSString * libraryIdentifier; 
@property (getter=lastSyncTime,nonatomic,readonly) NSNumber * lastSyncTime; 
@property (getter=hostName,nonatomic,readonly) NSString * name; 
@property (getter=syncedAssetsString,nonatomic,readonly) NSString * syncedAssetsString; 
@property (getter=isWifiEnabled,nonatomic,readonly) BOOL wifiEnabled; 
-(id)initWithHostDictionary:(id)arg1 ;
-(NSString *)syncedAssetsString;
-(id)localizedAssetTypeForDataclass:(id)arg1 ;
-(id)hostName;
-(NSString *)libraryIdentifier;
-(BOOL)isWifiEnabled;
-(NSNumber *)lastSyncTime;
@end

