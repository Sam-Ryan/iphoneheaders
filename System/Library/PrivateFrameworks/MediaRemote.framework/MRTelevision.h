/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/MRTelevisionClientConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSNetService, NSObject, MRDeviceInfo, MRTelevisionClientConnection, NSData, NSMutableDictionary, MSVDistributedNotificationObserver, NSString, NSInputStream, NSOutputStream;

@interface MRTelevision : NSObject <MRTelevisionClientConnectionDelegate> {

	NSNetService* _netService;
	NSObject*<OS_dispatch_queue> _serialQueue;
	MROriginRef _customOrigin;
	void* _playbackQueue;
	BOOL _isCoalescingClientStateUpdatesConfigMessages;
	BOOL _wantsNowPlayingNotifications;
	BOOL _wantsNowPlayingArtworkNotifications;
	BOOL _wantsVolumeNotifications;
	unsigned _connectionState;
	unsigned _gameControllerInputMode;
	MRDeviceInfo* _deviceInfo;
	MRTelevisionClientConnection* _connection;
	NSData* _nowPlayingArtwork;
	NSMutableDictionary* _nowPlayingInfo;
	MSVDistributedNotificationObserver* _volumeControlNotificationObserver;
	/*^block*/id _pairingCallback;
	NSObject*<OS_dispatch_queue> _pairingCallbackQueue;
	/*^block*/id _connectionStateCallback;
	NSObject*<OS_dispatch_queue> _connectionStateCallbackQueue;
	/*^block*/id _gameControllerInputModeCallback;
	NSObject*<OS_dispatch_queue> _gameControllerInputModeCallbackQueue;
	/*^block*/id _gameControllerPropertiesCallback;
	NSObject*<OS_dispatch_queue> _gameControllerPropertiesCallbackQueue;
	/*^block*/id _recordingStateCallback;
	NSObject*<OS_dispatch_queue> _recordingStateCallbackQueue;
	/*^block*/id _textInputCallback;
	NSObject*<OS_dispatch_queue> _textInputCallbackQueue;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * hostName; 
@property (nonatomic,readonly) long long port; 
@property (nonatomic,copy) MRDeviceInfo * deviceInfo;                                                             //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,readonly) NSInputStream * inputStream; 
@property (nonatomic,readonly) NSOutputStream * outputStream; 
@property (assign,nonatomic) BOOL wantsNowPlayingNotifications;                                                   //@synthesize wantsNowPlayingNotifications=_wantsNowPlayingNotifications - In the implementation block
@property (assign,nonatomic) BOOL wantsNowPlayingArtworkNotifications;                                            //@synthesize wantsNowPlayingArtworkNotifications=_wantsNowPlayingArtworkNotifications - In the implementation block
@property (assign,nonatomic) BOOL wantsVolumeNotifications;                                                       //@synthesize wantsVolumeNotifications=_wantsVolumeNotifications - In the implementation block
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (assign,nonatomic) MROriginRef customOrigin; 
@property (nonatomic,retain) MRTelevisionClientConnection * connection;                                           //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) NSData * nowPlayingArtwork;                                                            //@synthesize nowPlayingArtwork=_nowPlayingArtwork - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nowPlayingInfo;                                                //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,retain) MSVDistributedNotificationObserver * volumeControlNotificationObserver;              //@synthesize volumeControlNotificationObserver=_volumeControlNotificationObserver - In the implementation block
@property (nonatomic,copy) id pairingCallback;                                                                    //@synthesize pairingCallback=_pairingCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> pairingCallbackQueue;                                   //@synthesize pairingCallbackQueue=_pairingCallbackQueue - In the implementation block
@property (nonatomic,copy) id connectionStateCallback;                                                            //@synthesize connectionStateCallback=_connectionStateCallback - In the implementation block
@property (nonatomic,readonly) unsigned connectionState;                                                          //@synthesize connectionState=_connectionState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionStateCallbackQueue;                           //@synthesize connectionStateCallbackQueue=_connectionStateCallbackQueue - In the implementation block
@property (nonatomic,copy) id gameControllerInputModeCallback;                                                    //@synthesize gameControllerInputModeCallback=_gameControllerInputModeCallback - In the implementation block
@property (assign,nonatomic) unsigned gameControllerInputMode;                                                    //@synthesize gameControllerInputMode=_gameControllerInputMode - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> gameControllerInputModeCallbackQueue;                   //@synthesize gameControllerInputModeCallbackQueue=_gameControllerInputModeCallbackQueue - In the implementation block
@property (nonatomic,copy) id gameControllerPropertiesCallback;                                                   //@synthesize gameControllerPropertiesCallback=_gameControllerPropertiesCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> gameControllerPropertiesCallbackQueue;                  //@synthesize gameControllerPropertiesCallbackQueue=_gameControllerPropertiesCallbackQueue - In the implementation block
@property (nonatomic,copy) id recordingStateCallback;                                                             //@synthesize recordingStateCallback=_recordingStateCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> recordingStateCallbackQueue;                            //@synthesize recordingStateCallbackQueue=_recordingStateCallbackQueue - In the implementation block
@property (nonatomic,copy) id textInputCallback;                                                                  //@synthesize textInputCallback=_textInputCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> textInputCallbackQueue;                                 //@synthesize textInputCallbackQueue=_textInputCallbackQueue - In the implementation block
@property (nonatomic,readonly) void* pairedDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_deviceInfoFromTXTRecordData:(id)arg1 ;
-(NSString *)hostName;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)connect;
-(MRTelevisionClientConnection *)connection;
-(void)setConnection:(MRTelevisionClientConnection *)arg1 ;
-(long long)port;
-(NSData *)nowPlayingArtwork;
-(void)setNowPlayingArtwork:(NSData *)arg1 ;
-(void)_teardownCustomOrigin;
-(void)_scheduleClientStateUpdatesConfigMessage;
-(void)setVolumeControlNotificationObserver:(MSVDistributedNotificationObserver *)arg1 ;
-(void)_registerPlaybackQueueCallback;
-(void)_callClientConnectionStateCallback:(id)arg1 ;
-(void)_callClientGameControllerInputModeCallback;
-(void)setVoiceRecordingState:(unsigned)arg1 ;
-(void)_callClientRecordingStateCallback;
-(void)setPairingCallback:(id)arg1 ;
-(void)setPairingCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setConnectionStateCallback:(id)arg1 ;
-(void)setConnectionStateCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setGameControllerInputModeCallback:(id)arg1 ;
-(void)setGameControllerInputModeCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setGameControllerPropertiesCallback:(id)arg1 ;
-(void)setGameControllerPropertiesCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTextInputCallback:(id)arg1 ;
-(void)setTextInputCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRecordingStateCallback:(id)arg1 ;
-(void)setRecordingStateCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setConnectionState:(unsigned)arg1 error:(id)arg2 ;
-(void)_cleanUp;
-(id)_initializeConnection;
-(id)_loadDeviceInfo;
-(id)_openSecuritySession;
-(id)_setupCustomOrigin;
-(id)_errorForCurrentState;
-(void)_sendTextInputMessageWithActionType:(unsigned long long)arg1 text:(id)arg2 ;
-(void)sendTouchEvent:(MRHIDTouchEvent)arg1 toVirtualDeviceWithID:(unsigned long long)arg2 ;
-(void)_handleCryptoPairingMessage:(id)arg1 ;
-(void)_handleSetStateMessage:(id)arg1 ;
-(void)_handleNotificationMessage:(id)arg1 ;
-(void)_handleContentItemsChangedNotificationMessage:(id)arg1 ;
-(void)_handleSetArtworkMessage:(id)arg1 ;
-(void)setGameControllerInputMode:(unsigned)arg1 ;
-(void)_handleSetVolumeControlAvailabilityMessage:(id)arg1 ;
-(void)_handleKeyboardMessage:(id)arg1 ;
-(void)_handleTransactionMessage:(id)arg1 ;
-(void)_callClientGameControllerPropertiesCallback:(void*)arg1 controller:(unsigned long long)arg2 ;
-(void)setCustomOrigin:(MROriginRef)arg1 ;
-(void)_handleRemoteCommand:(unsigned)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)pairingCallbackQueue;
-(void)_callClientPairingCallback:(/*^block*/id)arg1 ;
-(id)textInputCallback;
-(void)_callClientTextInputCallback:(id)arg1 type:(unsigned)arg2 ;
-(void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)clientDidDisconnect:(id)arg1 ;
-(void)setWantsNowPlayingNotifications:(BOOL)arg1 ;
-(void)setWantsNowPlayingArtworkNotifications:(BOOL)arg1 ;
-(void)setWantsVolumeNotifications:(BOOL)arg1 ;
-(MROriginRef)customOrigin;
-(void)setPairingCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setConnectionStateCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setGameControllerInputModeCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setGameControllerPropertiesCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setTextEditingCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setVoiceRecordingStateCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)registerTouchDeviceWithDescriptor:(id)arg1 replyQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendHIDEvent:(IOHIDEventRef)arg1 ;
-(void)getTextEditingSessionWithReplyQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)insertTextIntoActiveTextEditingSessionWithText:(id)arg1 ;
-(void)setTextOnActiveTextEditingSessionWithText:(id)arg1 ;
-(void)deleteBackwardInActiveTextEditingSession;
-(void)clearActiveTextEditingSessionData;
-(void)registerGameControllerWithProperties:(void*)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)unregisterGameController:(unsigned long long)arg1 ;
-(void)sendGameControllerEvent:(const SCD_Struct_MR10*)arg1 controllerID:(unsigned long long)arg2 ;
-(void)registerVoiceInputDeviceWithDescriptor:(id)arg1 replyQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)processVoiceInputAudioDataForDeviceID:(unsigned)arg1 withBuffer:(id)arg2 time:(SCD_Struct_MR13)arg3 gain:(float)arg4 ;
-(void)_setupCustomOriginWithReplyQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_addArtwork:(id)arg1 toNowPlayingInfo:(id)arg2 ;
-(BOOL)wantsNowPlayingNotifications;
-(BOOL)wantsNowPlayingArtworkNotifications;
-(BOOL)wantsVolumeNotifications;
-(MSVDistributedNotificationObserver *)volumeControlNotificationObserver;
-(id)pairingCallback;
-(id)connectionStateCallback;
-(NSObject*<OS_dispatch_queue>)connectionStateCallbackQueue;
-(id)gameControllerInputModeCallback;
-(unsigned)gameControllerInputMode;
-(NSObject*<OS_dispatch_queue>)gameControllerInputModeCallbackQueue;
-(id)gameControllerPropertiesCallback;
-(NSObject*<OS_dispatch_queue>)gameControllerPropertiesCallbackQueue;
-(id)recordingStateCallback;
-(NSObject*<OS_dispatch_queue>)recordingStateCallbackQueue;
-(NSObject*<OS_dispatch_queue>)textInputCallbackQueue;
-(NSOutputStream *)outputStream;
-(unsigned)connectionState;
-(void)disconnect:(id)arg1 ;
-(void)setDeviceInfo:(MRDeviceInfo *)arg1 ;
-(MRDeviceInfo *)deviceInfo;
-(NSMutableDictionary *)nowPlayingInfo;
-(void)_updateNowPlayingInfo;
-(void)setNowPlayingInfo:(NSMutableDictionary *)arg1 ;
-(id)initWithNetService:(id)arg1 ;
-(void*)pairedDevice;
-(BOOL)isPaired;
-(NSInputStream *)inputStream;
@end

