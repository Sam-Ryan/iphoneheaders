/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:29 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_source;
@class NSData, NSSet, NSString, NSArray, NSNumber, NSMutableString, NSMutableDictionary, NSDictionary, BluetoothManager, BBSettingsGateway, NSObject, SDWormholeServer;

@interface SDStatusMonitor : NSObject <MCProfileConnectionObserver> {

	NSData* _myIcon;
	NSSet* _btmmDomains;
	NSString* _bonjourName;
	NSString* _btmmDomain;
	NSString* _computerName;
	NSString* _consoleUser;
	NSString* _discoverableMode;
	NSString* _localHostName;
	NSString* _myFirstName;
	NSString* _myIconHash;
	NSString* _myLastName;
	NSString* _netbiosName;
	NSString* _workgroup;
	NSArray* _shortHashes;
	NSNumber* _screenOn;
	NSNumber* _backlightOn;
	NSNumber* _controlCenterVisible;
	NSNumber* _handoffVisible;
	NSNumber* _deviceUIUnlocked;
	NSNumber* _deviceKeyBagUnlocked;
	NSNumber* _deviceKeyBagState;
	NSNumber* _deviceSupportsWAPI;
	NSNumber* _computerToComputer;
	NSNumber* _legacyModeEnabled;
	NSNumber* _wirelessAccessPoint;
	NSNumber* _wirelessCarPlay;
	NSMutableString* _myEmailHashes;
	NSMutableString* _myPhoneHashes;
	NSMutableDictionary* _longHashes;
	NSMutableDictionary* _identities;
	NSMutableDictionary* _serverNames;
	NSDictionary* _mountPoints;
	NSDictionary* _odisksMountPoints;
	CFRunLoopSourceRef _dynamicStoreSource;
	WiFiDeviceClientRef _wifiDevice;
	WiFiManagerClientRef _wifiManager;
	BOOL _wifiDeviceAttachmentRegistered;
	BOOL _wifiScheduledOnRunLoop;
	BluetoothManager* _bluetoothManager;
	NSNumber* _doNotDisturbEnabled;
	BBSettingsGateway* _settingsGateway;
	void* _myEmail;
	SecIdentityRef _myAppleID;
	DNSServiceRef_tRef _nameMonitor;
	unsigned _notifierObject;
	void* _addressBook;
	NSObject*<OS_dispatch_source> _autoFSSource;
	SCPreferencesRef _smbPreferences;
	IONotificationPortRef _notifyPortRef;
	SDWormholeServer* _finderServer;
	int _clientCount;
	int _wormholeCount;
	int _uiLockStatusToken;
	int _keyBagUnlockToken;
	int _springBoardEventToken;
	int _backlightLevelToken;
	unsigned _consoleUserID;
	BOOL _airDropPublished;
	unsigned _rootPort;
	BOOL _deviceIsHighPriority;
	BOOL _deviceWasUnlockedOnce;
	BOOL _finderAirDropEnabled;

}

@property (readonly) NSData * myIcon; 
@property (readonly) NSString * myEmail; 
@property (readonly) NSString * myAltDSID; 
@property (readonly) BOOL myAppleIDIsManaged; 
@property (readonly) NSString * myAppleID; 
@property (readonly) NSString * myIconHash; 
@property (readonly) NSString * myLastName; 
@property (readonly) NSString * myFirstName; 
@property (readonly) NSString * consoleUser; 
@property (readonly) NSString * bonjourName; 
@property (readonly) NSString * workgroup; 
@property (readonly) NSString * modelName; 
@property (readonly) NSString * modelCode; 
@property (readonly) NSString * netbiosName; 
@property (readonly) NSString * computerName; 
@property (readonly) NSString * localHostName; 
@property (readonly) NSString * myPrimaryEmail; 
@property (readonly) NSString * someComputerName; 
@property (readonly) NSString * myAccountAppleID; 
@property (readonly) NSString * myAppleIDEmailHash; 
@property (readonly) NSString * myAppleIDPhoneHash; 
@property (readonly) NSString * backToMyMacDomain; 
@property (readonly) NSSet * backToMyMacDomains; 
@property (readonly) NSArray * myAppleIDPhoneNumbers; 
@property (readonly) NSArray * myAppleIDEmailAddresses; 
@property (readonly) NSArray * proximityHashes; 
@property (retain) NSString * discoverableMode; 
@property (__weak) SDWormholeServer * finderServer; 
@property (readonly) NSDictionary * myAppleIDValidationRecord; 
@property (readonly) BOOL allEnabled; 
@property (readonly) BOOL altDSIDNeedsFixing; 
@property (readonly) BOOL alwaysSendPayload; 
@property (readonly) BOOL appleIDNeedsFixing; 
@property (readonly) BOOL backlightOn; 
@property (readonly) BOOL backToMyMacEnabled; 
@property (readonly) BOOL bonjourEnabled; 
@property (readonly) BOOL broadcastPicture; 
@property (readonly) BOOL browseAllInterfaces; 
@property (readonly) BOOL bypassLTKeyAbort; 
@property (readonly) BOOL computerToComputer; 
@property (readonly) BOOL connectedEnabled; 
@property (readonly) BOOL controlCenterVisible; 
@property (readonly) BOOL currentConsoleUser; 
@property (readonly) BOOL deviceKeyBagDisabled; 
@property (readonly) BOOL deviceKeyBagLocked; 
@property (readonly) BOOL deviceKeyBagUnlocked; 
@property (readonly) BOOL deviceSupportsContinuity; 
@property (readonly) BOOL deviceSupportsWAPI; 
@property (readonly) BOOL deviceUIUnlocked; 
@property (readonly) BOOL deviceWasUnlockedOnce; 
@property (readonly) BOOL disableAutoAccept; 
@property (readonly) BOOL disableCompression; 
@property (readonly) BOOL disableContinuityTLS; 
@property (readonly) BOOL disableDirectWiFi; 
@property (readonly) BOOL disableInfraWiFi; 
@property (readonly) BOOL disablePictureQuery; 
@property (readonly) BOOL disablePipelining; 
@property (readonly) BOOL disableQuarantine; 
@property (readonly) BOOL disableTLS; 
@property (readonly) BOOL enableABImages; 
@property (readonly) BOOL enableAllRecents; 
@property (readonly) BOOL enableBugs; 
@property (readonly) BOOL enableContinuity; 
@property (readonly) BOOL enableDebugMode; 
@property (readonly) BOOL enableDVZip; 
@property (readonly) BOOL enableHotspotFallback; 
@property (readonly) BOOL enablePKZip; 
@property (readonly) BOOL enableStreamDebugging; 
@property (readonly) BOOL enableWebloc; 
@property (readonly) BOOL enableXML; 
@property (readonly) BOOL finderAirDropEnabled; 
@property (readonly) BOOL forceAWDL; 
@property (readonly) BOOL forceLTKeyTransfer; 
@property (readonly) BOOL forceP2P; 
@property (readonly) BOOL handoffVisible; 
@property (readonly) BOOL ignoreIconDiskCache; 
@property (readonly) BOOL legacyDevice; 
@property (readonly) BOOL legacyModeSettable; 
@property (readonly) BOOL preferABImages; 
@property (readonly) BOOL preferWideAreaBTMM; 
@property (readonly) BOOL registerAllInterfaces; 
@property (readonly) BOOL screenOn; 
@property (readonly) BOOL showMeInWormhole; 
@property (readonly) BOOL showThisComputer; 
@property (readonly) BOOL simStateReady; 
@property (readonly) BOOL testDiskFull; 
@property (readonly) BOOL wirelessAccessPoint; 
@property (readonly) BOOL wirelessCarPlay; 
@property (getter=isAppleInternal,readonly) BOOL appleInternal; 
@property (getter=isAirDropAllowed,readonly) BOOL airdropAllowed; 
@property (getter=isAirDropAvailable,readonly) BOOL airdropAvailable; 
@property (getter=isLegacyAirDropAvailable,readonly) BOOL legacyAirDropAvailable; 
@property (assign) BOOL airDropPublished; 
@property (assign) BOOL bluetoothEnabled; 
@property (assign) BOOL doNotDisturbEnabled; 
@property (assign) BOOL legacyModeEnabled; 
@property (assign) BOOL wirelessEnabled; 
@property (readonly) int sidebarMaxCount; 
@property (readonly) int minPersonImageSize; 
@property (readonly) int workgroupThreshold; 
@property (readonly) long long deviceKeyBagState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMonitor;
-(BOOL)wirelessEnabled;
-(BOOL)alwaysSendPayload;
-(BOOL)appleIDNeedsFixing;
-(BOOL)disableContinuityTLS;
-(SecIdentityRef)copyMyAppleIDSecIdentity;
-(BOOL)enableStreamDebugging;
-(BOOL)deviceWasUnlockedOnce;
-(NSString *)someComputerName;
-(BOOL)enableContinuity;
-(BOOL)currentConsoleUser;
-(BOOL)handoffVisible;
-(BOOL)screenOn;
-(BOOL)controlCenterVisible;
-(BOOL)disableInfraWiFi;
-(BOOL)browseAllInterfaces;
-(BOOL)legacyModeEnabled;
-(NSArray *)myAppleIDEmailAddresses;
-(NSArray *)myAppleIDPhoneNumbers;
-(BOOL)deviceUIUnlocked;
-(BOOL)bluetoothEnabled;
-(int)discoverableLevel;
-(BOOL)showMeInWormhole;
-(BOOL)showThisComputer;
-(NSString *)netbiosName;
-(BOOL)enableBugs;
-(BOOL)disablePictureQuery;
-(CSIdentityRef)copyIdentityForAppleID:(id)arg1 ;
-(void)cacheIdentity:(CSIdentityRef)arg1 ;
-(BOOL)ignoreIconDiskCache;
-(id)infoForEmailHash:(id)arg1 phoneHash:(id)arg2 ;
-(NSString *)backToMyMacDomain;
-(id)odiskMountPointsForServer:(id)arg1 ;
-(long long)deviceKeyBagState;
-(BOOL)forceLTKeyTransfer;
-(BOOL)deviceKeyBagUnlocked;
-(BOOL)deviceKeyBagDisabled;
-(void)setAirDropPublished:(BOOL)arg1 ;
-(NSData *)myIcon;
-(NSString *)myIconHash;
-(BOOL)broadcastPicture;
-(NSString *)myAppleIDEmailHash;
-(NSString *)myAppleIDPhoneHash;
-(BOOL)myAppleIDIsManaged;
-(BOOL)registerAllInterfaces;
-(BOOL)forceP2P;
-(id)serverNameForHost:(id)arg1 ;
-(void)setODiskMountPoints:(id)arg1 ;
-(void)setServerMountPoints:(id)arg1 ;
-(NSSet *)backToMyMacDomains;
-(BOOL)disableCompression;
-(BOOL)enablePKZip;
-(BOOL)enableDebugMode;
-(BOOL)disableDirectWiFi;
-(BOOL)bypassLTKeyAbort;
-(id)mountPointsForServer:(id)arg1 ;
-(NSString *)modelCode;
-(BOOL)altDSIDNeedsFixing;
-(void)fixAltDSIDIfNeeded;
-(NSString *)myAltDSID;
-(BOOL)enableHotspotFallback;
-(BOOL)deviceSupportsContinuity;
-(int)workgroupThreshold;
-(BOOL)preferWideAreaBTMM;
-(BOOL)backToMyMacEnabled;
-(BOOL)connectedEnabled;
-(BOOL)bonjourEnabled;
-(int)sidebarMaxCount;
-(BOOL)allEnabled;
-(BOOL)removePersonFromAddressBook:(id)arg1 ;
-(NSString *)workgroup;
-(BOOL)isLegacyAirDropAvailable;
-(void)setWirelessEnabled:(BOOL)arg1 ;
-(BOOL)doNotDisturbEnabled;
-(void)setDoNotDisturbEnabled:(BOOL)arg1 ;
-(BOOL)legacyDevice;
-(BOOL)legacyModeSettable;
-(void)clearBackToMyMacDomains;
-(void)uninstallBonjourNameMonitor;
-(void)installBonjourNameMonitor;
-(void)clearComputerName;
-(void)clearLocalHostName;
-(void)restartBonjourNameMonitor;
-(void)handleBackToMyMacSetupChange;
-(void)updateDiscoverableMode;
-(BOOL)smbConfiguration:(SCPreferencesRef)arg1 netBiosName:(id*)arg2 workgroup:(id*)arg3 ;
-(void)updateWirelessDevice;
-(void)bluetoothAvailabilityChange:(id)arg1 ;
-(void)updateDoNotDisturbEnabled:(BOOL)arg1 ;
-(void)installAddressBookMonitor;
-(BOOL)lteConnectionShows4G;
-(void*)copyMyEmailMultiValue;
-(void)airDropStatusChanged:(id)arg1 ;
-(void)logWormholeTransactionForClientServer:(BOOL)arg1 beginEnd:(BOOL)arg2 count:(int)arg3 ;
-(NSString *)myPrimaryEmail;
-(NSString *)myAccountAppleID;
-(NSString *)myAppleID;
-(id)myAppleIDVerifiedInfo:(CFStringRef)arg1 ;
-(id)currentUserIcon;
-(void)addEmails:(id)arg1 toLongHashes:(id)arg2 andShortHashes:(id)arg3 forPerson:(void*)arg4 ;
-(void)addPhoneNumbers:(id)arg1 toLongHashes:(id)arg2 andShortHashes:(id)arg3 forPerson:(void*)arg4 ;
-(BOOL)phoneNumbers:(id)arg1 emailAddressess:(id)arg2 notPresentInHashes:(id)arg3 ;
-(id)myPersonInfo;
-(id)emailsForPerson:(void*)arg1 ;
-(id)phoneNumbersForPerson:(void*)arg1 ;
-(id)instantMessageEmailsForPerson:(void*)arg1 ;
-(void)addMyInfoToLongHashes:(id)arg1 andShortHashes:(id)arg2 ;
-(void)generateAddressBookHashes;
-(id)infoForHash:(id)arg1 ;
-(void*)copyPersonForInfoHash:(id)arg1 ;
-(NSString *)computerName;
-(id)createHostNameKey:(id)arg1 ;
-(void)installManagedConfigurationMonitor;
-(void)installFinderSidebarPrefsMonitor;
-(void)installWirelessCarPlayMonitor;
-(void)installSMBPreferencesMonitor;
-(void)installAirDropStatusMonitor;
-(void)installDynamicStoreCallBack;
-(void)installLocaleChangeMonitor;
-(void)installDoNotDisturbMonitor;
-(void)installSpringBoardStateMonitor;
-(void)installKeyBagUnlockMonitor;
-(void)installUserPictureMonitor;
-(void)installUILockStatusMonitor;
-(void)installSleepWakeCallBack;
-(void)installBluetoothMonitor;
-(void)installWirelessMonitor;
-(void)installAppleIDMonitor;
-(void)installVolumesMonitor;
-(void)installAutoFSMonitor;
-(void)installBacklightMonitor;
-(void)uninstallManagedConfigurationMonitor;
-(void)uninstallFinderSidebarPrefsMonitor;
-(void)uninstallWirelessCarPlayMonitor;
-(void)uninstallSMBPreferencesMonitor;
-(void)uninstallAirDropStatusMonitor;
-(void)uninstallDynamicStoreCallBack;
-(void)uninstallDoNotDisturbMonitor;
-(void)uninstallLocaleChangeMonitor;
-(void)uninstallSpringBoardStateMonitor;
-(void)uninstallKeyBagUnlockMonitor;
-(void)uninstallAddressBookMonitor;
-(void)uninstallUserPictureMonitor;
-(void)uninstallUILockStatusMonitor;
-(void)uninstallSleepWakeCallBack;
-(void)uninstallBluetoothMonitor;
-(void)uninstallWirelessMonitor;
-(void)uninstallAppleIDMonitor;
-(void)uninstallVolumesMonitor;
-(void)uninstallAutoFSMonitor;
-(void)uninstallBacklightMonitor;
-(void)clearMonitorCache;
-(SDWormholeServer *)finderServer;
-(void)clearAddressBookInfo;
-(void)clearMyAppleIDInfo;
-(BOOL)finderAirDropEnabled;
-(BOOL)wirelessCarPlay;
-(BOOL)isPlatformMultiUser;
-(id)_discoverableMode;
-(void)handleDynamicStoreCallback:(SCDynamicStoreRef)arg1 changedKeys:(CFArrayRef)arg2 ;
-(void)handleControlCenterVisibilityChanged:(BOOL)arg1 ;
-(void)handleSleepWakeCallBack:(unsigned)arg1 messageArguement:(void*)arg2 ;
-(void)handleNameMonitorCallBack:(const char*)arg1 flags:(unsigned)arg2 error:(int)arg3 ;
-(void)reloadSMBConfInfo;
-(void)doNotDisturbChanged:(id)arg1 ;
-(BOOL)deviceKeyBagLocked;
-(BOOL)backlightOn;
-(BOOL)simStateReady;
-(NSString *)myEmail;
-(void)wormholeTransactionBegin:(BOOL)arg1 ;
-(void)wormholeTransactionEnd:(BOOL)arg1 ;
-(NSArray *)proximityHashes;
-(void*)copyPersonForEmailHash:(id)arg1 phoneHash:(id)arg2 ;
-(BOOL)addressBookContainsPerson:(id)arg1 ;
-(NSString *)myFirstName;
-(NSString *)myLastName;
-(void)clearMyIconAndHash;
-(NSString *)consoleUser;
-(void)clearConsoleUser;
-(NSDictionary *)myAppleIDValidationRecord;
-(BOOL)appleIDValidateRecord:(id)arg1 validationRecord:(out id*)arg2 ;
-(NSString *)localHostName;
-(void)addServerName:(id)arg1 forHostName:(id)arg2 ;
-(void)removeServerName:(id)arg1 ;
-(void)setFinderServer:(SDWormholeServer *)arg1 ;
-(BOOL)computerToComputer;
-(BOOL)wirelessAccessPoint;
-(void)clearWirelessState;
-(void)clearOperationModeInfo;
-(BOOL)airDropPublished;
-(BOOL)disableTLS;
-(BOOL)enableXML;
-(BOOL)forceAWDL;
-(BOOL)enableDVZip;
-(BOOL)testDiskFull;
-(BOOL)enableWebloc;
-(BOOL)enableABImages;
-(BOOL)preferABImages;
-(BOOL)enableAllRecents;
-(BOOL)disableQuarantine;
-(BOOL)disableAutoAccept;
-(BOOL)disablePipelining;
-(int)minPersonImageSize;
-(BOOL)isAirDropAllowed;
-(id)init;
-(void)stop;
-(void)start;
-(void)postNotification:(id)arg1 ;
-(BOOL)isAirDropAvailable;
-(NSString *)modelName;
-(unsigned char)networkType;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)deviceSupportsWAPI;
-(void)setDiscoverableMode:(NSString *)arg1 ;
-(void)setLegacyModeEnabled:(BOOL)arg1 ;
-(NSString *)discoverableMode;
-(void)setBluetoothEnabled:(BOOL)arg1 ;
-(long long)signalStrength;
-(NSString *)bonjourName;
-(BOOL)isAppleInternal;
@end
