/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:18 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <locationd/EAAccessoryDelegate.h>

@class EAAccessory, CLSilo, NSString;

@interface CLAccessoryObserver : NSObject <EAAccessoryDelegate> {

	EAAccessory* fAccessory;
	CLAccessoryObserverListener* fListener;
	CLSilo* fSilo;
	BOOL _iAPTimeSyncEnable;

}

@property (assign,nonatomic) BOOL iAPTimeSyncEnable;                //@synthesize iAPTimeSyncEnable=_iAPTimeSyncEnable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithListener:(const CLAccessoryObserverListener*)arg1 silo:(id)arg2 timeSync:(BOOL)arg3 ;
-(void)sendGPRMCDataStatusValues:(BOOL)arg1 ;
-(BOOL)stopLocation;
-(BOOL)sendReferenceTime:(double)arg1 ;
-(BOOL)sendReferenceTime:(double)arg1 locationLatitude:(double)arg2 longitude:(double)arg3 accuracy:(double)arg4 ;
-(void)nmeaReceived:(id)arg1 ;
-(void)timeRequested:(id)arg1 ;
-(void)locationPointDataRequested:(id)arg1 ;
-(void)ephemerisURLRequested:(id)arg1 ;
-(BOOL)iAPTimeSyncEnable;
-(void)onStarkTimeSyncNotification:(id)arg1 ;
-(BOOL)setupAccessory:(id)arg1 ;
-(BOOL)setupEphemeris;
-(void)setIAPTimeSyncEnable:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)sendEphemeris:(id)arg1 ;
-(void)accessoryConnected:(id)arg1 ;
-(void)accessoryDisconnected:(id)arg1 ;
-(void)accessoryDidDisconnect:(id)arg1 ;
-(BOOL)startLocation;
-(BOOL)isBlackListed:(id)arg1 ;
@end

