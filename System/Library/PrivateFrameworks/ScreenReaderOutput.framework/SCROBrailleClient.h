/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class SCROConnection, NSLock, NSMutableAttributedString, NSData, SCRCTargetSelectorTimer;

@interface SCROBrailleClient : NSObject {

	SCROConnection* _connection;
	NSLock* _lock;
	id _delegate;
	NSMutableAttributedString* _mainStringPending;
	NSMutableAttributedString* _mainStringCache;
	NSData* _aggregatedStatusPending;
	NSData* _aggregatedStatusCache;
	SCRCTargetSelectorTimer* _deathTimer;
	BOOL _isReady;
	BOOL _needsDisplay;
	BOOL _keepConnectionAlive;
	BOOL _delegateWantsKeypresses;
	BOOL _wantsDisconnectMessage;
	BOOL _wantsReconnectMessage;
	BOOL _wantsDisplayConfigurationChanged;
	BOOL _displayDescriptorCallbackEnabled;

}

@property (assign,nonatomic) BOOL inputEightDotBraille; 
@property (assign,nonatomic) int inputContractionMode; 
+(id)statusAttributeDotText;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(void)display;
-(BOOL)needsDisplay;
-(void)displayIfNeeded;
-(id)initWithDelegate:(id)arg1 ;
-(int)displayMode;
-(BOOL)isConnected;
-(void)_deathTimerHandler;
-(id)_lazyConnection;
-(void)_registerDelegate;
-(id)_getWorkingString;
-(void)_refreshAfterReconnect;
-(void)setDisplayDescriptorCallbackEnabled:(BOOL)arg1 ;
-(void)_setupDeviceDetection;
-(void)_deviceConnected:(id)arg1 ;
-(void)setKeepConnectionAlive:(BOOL)arg1 ;
-(BOOL)keepConnectionAlive;
-(void)loadDisplayWithBluetoothDeviceAddress:(id)arg1 ;
-(void)removeDisplayWithBluetoothDeviceAddress:(id)arg1 ;
-(void)setTableIdentifier:(id)arg1 ;
-(id)pendingMainAttributedString;
-(void)setAnnouncementString:(id)arg1 ;
-(void)setAlertString:(id)arg1 timeout:(double)arg2 priority:(int)arg3 ;
-(id)pendingAggregatedStatus;
-(void)setExpandedStatusDisplayModeWithStatus:(id)arg1 ;
-(BOOL)displayDescriptorCallbackEnabled;
-(id)tokenArray;
-(void)setSelection:(NSRange)arg1 forToken:(long long)arg2 ;
-(void)selectAllForToken:(long long)arg1 ;
-(void)unselectAllForToken:(long long)arg1 ;
-(void)setFocused:(BOOL)arg1 forToken:(long long)arg2 ;
-(int)contractionMode;
-(void)setMasterStatusCellIndex:(long long)arg1 ;
-(void)setAggregatedStatus:(id)arg1 ;
-(id)aggregatedStatus;
-(void)setVirtualStatusAlignment:(int)arg1 ;
-(int)virtualStatusAlignment;
-(long long)masterStatusCellIndex;
-(void)simulateKeypress:(id)arg1 ;
-(BOOL)automaticBrailleTranslationEnabled;
-(void)setAutomaticBrailleTranslationEnabled:(BOOL)arg1 ;
-(int)inputContractionMode;
-(void)setInputContractionMode:(int)arg1 ;
-(id)driverConfiguration;
-(void)setAlwaysUsesNemethCodeForTechnicalText:(BOOL)arg1 ;
-(BOOL)alwaysUsesNemethCodeForTechnicalText;
-(BOOL)isConfigured;
-(void)setPrimaryBrailleDisplay:(int)arg1 ;
-(id)mainAttributedString;
-(void)setMainAttributedString:(id)arg1 ;
-(void)panDisplayLeft:(int)arg1 ;
-(void)panDisplayRight:(int)arg1 ;
-(void)setAnnouncementsDisplayMode;
-(void)exitCurrentDisplayMode;
-(id)tableIdentifier;
-(void)setContractionMode:(int)arg1 ;
-(BOOL)showEightDotBraille;
-(void)setShowEightDotBraille:(BOOL)arg1 ;
-(BOOL)inputEightDotBraille;
-(void)setInputEightDotBraille:(BOOL)arg1 ;
-(void)setShowDotsSevenAndEight:(BOOL)arg1 ;
-(BOOL)showDotsSevenAndEight;
-(void)showPreviousAnnouncement;
-(void)showNextAnnouncement;
-(long long)tokenForRouterIndex:(long long)arg1 location:(long long*)arg2 appToken:(id*)arg3 forDisplayWithToken:(int)arg4 ;
-(void)setPrepareToMemorizeNextKey:(BOOL)arg1 immediate:(BOOL)arg2 forDisplayWithToken:(int)arg3 ;
-(void)handleCallback:(id)arg1 ;
@end

