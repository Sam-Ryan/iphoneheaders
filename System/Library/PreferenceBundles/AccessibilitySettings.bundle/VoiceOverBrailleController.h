/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/VoiceOverBluetoothDevicesController.h>

@class SCROBrailleClient, NSDictionary, NSTimer, NSString;

@interface VoiceOverBrailleController : VoiceOverBluetoothDevicesController {

	SCROBrailleClient* _brailleClient;
	NSDictionary* _brailleDriverDeviceDetectionInfo;
	NSTimer* _bluetoothDeviceLoadFailedTimer;
	BOOL _isContractedBrailleEnabled;
	BOOL _isEightDotBrailleEnabled;
	NSString* _statusKey;

}
-(id)_stringForBrailleMode:(long long)arg1 ;
-(BOOL)shouldAddDevice:(id)arg1 ;
-(id)bluetoothPoweredOffFooter;
-(id)_brailleDisplayAlertDuration:(id)arg1 ;
-(void)_startDeviceLoadFailedTimer;
-(void)primaryDeviceWasUnpaired;
-(void)_updateBrailleWritingCell;
-(id)contractedBrailleEnabled:(id)arg1 ;
-(id)_statusKeyFromPreferences;
-(void)deviceConnected:(id)arg1 ;
-(id)devicesGroupName;
-(id)_currentBrailleTable:(id)arg1 ;
-(id)bluetoothPowerAlertMessage;
-(void)_stopDeviceLoadFailedTimer;
-(id)alwaysUseNemethEnabled:(id)arg1 ;
-(id)brailleDisplayInput:(id)arg1 ;
-(id)statusCellStatus:(id)arg1 ;
-(id)eightDotBrailleEnabled:(id)arg1 ;
-(id)brailleDisplayOutput:(id)arg1 ;
-(id)panningAutoturnReadingContent:(id)arg1 ;
-(void)handleSettingsChange:(id)arg1 ;
-(void)setContractedBrailleEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setPanningAutoturnReadingContent:(id)arg1 specifier:(id)arg2 ;
-(id)brailleGesturesInput:(id)arg1 ;
-(void)setAlwaysUseNemethEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setEightDotBrailleEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)softwareKeyboardWithBrailleEnabled:(id)arg1 ;
-(void)_handleFailedToLoadBluetoothDevice:(id)arg1 ;
-(void)_handleBrailleConfigurationChanged;
-(void)_connectToBrailleClient:(BOOL)arg1 ;
-(void)_handleSettingsChange:(id)arg1 ;
-(id)_bluetoothDisplayAddressFromPreferences;
-(void)_bluetoothDeviceLoadFailedTimerFireMethod:(id)arg1 ;
-(void)setSoftwareKeyboardWithBrailleEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setBluetoothIsBusy:(BOOL)arg1 ;
-(void)handleBrailleDidReconnect:(id)arg1 ;
-(void)handleBrailleConfigurationChanged:(id)arg1 ;
-(void)handleFailedToLoadBluetoothDevice:(id)arg1 ;
@end

