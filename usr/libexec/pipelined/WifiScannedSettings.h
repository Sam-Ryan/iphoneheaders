/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/pipelined
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pipelined/pipelined-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WifiScannerSettings;

@interface WifiScannedSettings : NSObject <NSCopying> {

	BOOL _cachedScan;
	BOOL _targettedSsid;
	optional<bool> _merged;
	int _wifiError;
	duration<long long, std::__1::ratio<1, 1000000000> > _initiatedTimestamp;
	duration<long long, std::__1::ratio<1, 1000000000> > _timestamp;
	WifiScannerSettings* _settings;
	optional<int> _scanRssiThreshold;

}

@property (nonatomic,readonly) duration<long long initiatedTimestamp;              //@synthesize initiatedTimestamp=_initiatedTimestamp - In the implementation block
@property (nonatomic,readonly) duration<long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) WifiScannerSettings * settings;                     //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) BOOL cachedScan;                                    //@synthesize cachedScan=_cachedScan - In the implementation block
@property (assign,nonatomic) optional<bool> merged;                                //@synthesize merged=_merged - In the implementation block
@property (assign,nonatomic) optional<int> scanRssiThreshold;                      //@synthesize scanRssiThreshold=_scanRssiThreshold - In the implementation block
@property (assign,nonatomic) BOOL targettedSsid;                                   //@synthesize targettedSsid=_targettedSsid - In the implementation block
@property (assign,nonatomic) int wifiError;                                        //@synthesize wifiError=_wifiError - In the implementation block
-(BOOL)cachedScan;
-(duration<long long)initiatedTimestamp;
-(id)initWithSettings:(id)arg1 cached:(BOOL)arg2 at:(duration<long long, std::__1::ratio<1, 1000000000> >)arg3 initiatedAt:(duration<long long, std::__1::ratio<1, 1000000000> >)arg4 ;
-(optional<bool>)merged;
-(optional<int>)scanRssiThreshold;
-(void)setScanRssiThreshold:(optional<int>)arg1 ;
-(BOOL)targettedSsid;
-(void)setTargettedSsid:(BOOL)arg1 ;
-(int)wifiError;
-(void)setWifiError:(int)arg1 ;
-(id)init;
-(id)description;
-(duration<long long)timestamp;
-(WifiScannerSettings *)settings;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMerged:(optional<bool>)arg1 ;
@end
