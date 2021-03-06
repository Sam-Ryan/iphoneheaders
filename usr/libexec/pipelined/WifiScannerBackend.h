/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/pipelined
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pipelined/pipelined-Structs.h>
#import <pipelined/BaseWifiScannerBackend.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSArray, WifiScannerThread;

@interface WifiScannerBackend : BaseWifiScannerBackend {

	NSObject*<OS_dispatch_queue> _q;
	CFRunLoopRef _wifiThreadRunLoop;
	WiFiManagerClientRef _wifiManager;
	NSArray* _wifiDevices;
	vector<NSArray *, std::__1::allocator<NSArray *> >* _supportedChannelsPerDevice;
	NSObject*<OS_dispatch_semaphore> _wifiThreadShutdown;
	list<std::__1::unique_ptr<ScanInformation, std::__1::default_delete<ScanInformation> >, std::__1::allocator<std::__1::unique_ptr<ScanInformation, std::__1::default_delete<ScanInformation> > > >* _pendingScans;
	atomic<unsigned long> _pendingScanCount;
	NSObject*<OS_dispatch_semaphore> _retryingScan;
	atomic<bool> _shutdownRequested;
	BOOL _notifiedPowerOff;
	WifiScannerThread* _scannerThread;

}

@property (assign,nonatomic) CFRunLoopRef wifiThreadRunLoop;                                   //@synthesize wifiThreadRunLoop=_wifiThreadRunLoop - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> wifiThreadShutdown;              //@synthesize wifiThreadShutdown=_wifiThreadShutdown - In the implementation block
+(id)copySupportedChannelDicts:(WiFiDeviceClientRef)arg1 ;
-(void)setWifiThreadRunLoop:(CFRunLoopRef)arg1 ;
-(BOOL)onQueueAllocManager;
-(NSObject*<OS_dispatch_semaphore>)wifiThreadShutdown;
-(void)onQueueTeardown;
-(void)onQueueRegisterCallbacks;
-(void)onQueueNotifyWifiError:(int)arg1 withSettings:(id)arg2 forScanInitiated:(duration<long long, std::__1::ratio<1, 1000000000> >)arg3 ;
-(void)onQueueDeleteCompletedScan:(ScanInformation*)arg1 ;
-(void)onQueueHandlerServerRestart;
-(void)onQueueHandleDeviceAttached:(WiFiDeviceClientRef)arg1 ;
-(BOOL)sensorPresent;
-(void)startListeningCachedScans;
-(void)stopListeningCachedScans;
-(void)scanAsync:(id)arg1 initiated:(/*^block*/id)arg2 ;
-(void)onQueueInitiateScan:(id)arg1 initiated:(/*^block*/id)arg2 ;
-(unique_ptr<ScanInformation, std::__1::default_delete<ScanInformation> >*)initiateScanOnDevice:(WiFiDeviceClientRef)arg1 withSettings:(id)arg2 deviceNumber:(unsigned long long)arg3 usingActivity:(const ActivityHandle*)arg4 ;
-(void)onQueueScanTimedOut:(ScanInformation*)arg1 withReason:(int)arg2 errorCode:(int)arg3 forScanInitiated:(duration<long long, std::__1::ratio<1, 1000000000> >)arg4 ;
-(void)onQueueHandleScanFor:(WiFiDeviceClientRef)arg1 withResults:(id)arg2 forScan:(ScanInformation*)arg3 withSettings:(id)arg4 withRequest:(id)arg5 withError:(int)arg6 ;
-(CFRunLoopRef)wifiThreadRunLoop;
-(void)setWifiThreadShutdown:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)init;
-(void)invalidate;
@end

