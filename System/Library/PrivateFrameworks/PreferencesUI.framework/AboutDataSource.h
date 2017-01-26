/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:52:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <Preferences/PSSpecifierDataSource.h>

@protocol NSObject;
@class NSMutableDictionary, PSSpecifier, NSString, NSTimer, NSLock;

@interface AboutDataSource : PSSpecifierDataSource {

	NSMutableDictionary* _mediaDict;
	PSSpecifier* _headsetSpecifier;
	PSSpecifier* _accessoryDividerSpecifier;
	NSString* _loading;
	NSTimer* _reloadTimer;
	BOOL _isGeneratingNotifications;
	BOOL _threadRunning;
	BOOL _cancel;
	BOOL _loaded;
	BOOL _accessory;
	int _carrierCellState;
	id<NSObject> _photoVideoNotificationToken;
	NSLock* _lock;
	BOOL _hasLoadedSpecifiers;
	NSString* _serviceProviderNameForSPN;
	long long _simCellState;
	NSString* _deviceNameToIgnoreOnce;

}

@property (nonatomic,retain) NSString * deviceNameToIgnoreOnce;              //@synthesize deviceNameToIgnoreOnce=_deviceNameToIgnoreOnce - In the implementation block
-(void)dealloc;
-(id)init;
-(void)reloadSpecifiers;
-(id)specifiersForSpecifier:(id)arg1 observer:(id)arg2 ;
-(BOOL)areSpecifiersLoaded;
-(void)loadSpecifiers;
-(id)countForKey:(id)arg1 ;
-(void)newCarrierNotification;
-(void)_accessoryDidUpdate:(id)arg1 ;
-(void)setDeviceName:(id)arg1 specifier:(id)arg2 ;
-(id)deviceName:(id)arg1 ;
-(void)setDeviceNameToIgnoreOnce:(NSString *)arg1 ;
-(id)valueForSpecifier:(id)arg1 ;
-(void)_addKey:(id)arg1 isCopyable:(BOOL)arg2 ;
-(void)_setValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_mobileEquipmentInfo;
-(id)_getCTMobileEquipmentInfo:(CFStringRef)arg1 ;
-(id)_cellularRegistrationInfo;
-(BOOL)_isUsingBootstrap;
-(id)_PRLString:(id)arg1 ;
-(id)_ERIString:(id)arg1 ;
-(id)_NAIString:(id)arg1 ;
-(id)_MINString:(id)arg1 ;
-(id)_IMSStatusString:(id)arg1 ;
-(id)_carrierVersion:(id)arg1 ;
-(id)_ICCIDString:(id)arg1 ;
-(id)_CSNString:(id)arg1 ;
-(void)_loadMediaFinished:(id)arg1 ;
-(NSString *)deviceNameToIgnoreOnce;
-(void)_loadValues;
-(void)_setValue:(id)arg1 forSpecifierWithKey:(id)arg2 ;
-(void)updateCarrierSpecifier:(id)arg1 ;
-(void)updateSIMSpecifier:(id)arg1 ;
-(id)_myNumber;
-(id)_macAddress;
-(id)_macAddressSpecifierKey;
-(id)_bluetoothMACAddress;
-(void)_addKey:(id)arg1 value:(id)arg2 isCopyable:(BOOL)arg3 ;
-(id)_songs:(id)arg1 ;
-(id)_videos:(id)arg1 ;
-(id)_photos:(id)arg1 ;
-(BOOL)shouldShowSIMSpecifier;
-(void)cleanupMLReloadTimer;
-(void)forceReloadMediaStats:(id)arg1 ;
-(void)mediaLibraryDidChange:(id)arg1 ;
-(void)simStatusChangedToReady;
-(void)enableMLUpdates:(BOOL)arg1 ;
-(void)reloadDeviceName;
@end

