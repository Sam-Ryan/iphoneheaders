/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:40 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/sbin/wirelessproxd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <wirelessproxd/XPCConnectionDelegate.h>

@class XPCConnection, NSData, NSString, NSMutableSet;

@interface WPDAdvertising : NSObject <XPCConnectionDelegate> {

	BOOL _isAdvertising;
	BOOL _companyPendingStatusSent;
	BOOL _atvSetupPendingStatusSent;
	BOOL _airPlayPendingStatusSent;
	XPCConnection* _connection;
	NSData* _advertisingData;
	NSString* _processName;
	NSMutableSet* _currentAdvertisersSet;

}

@property (nonatomic,retain) XPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL isAdvertising;                      //@synthesize isAdvertising=_isAdvertising - In the implementation block
@property (nonatomic,retain) NSData * advertisingData;                //@synthesize advertisingData=_advertisingData - In the implementation block
@property (retain) NSString * processName;                            //@synthesize processName=_processName - In the implementation block
@property (assign) BOOL companyPendingStatusSent;                     //@synthesize companyPendingStatusSent=_companyPendingStatusSent - In the implementation block
@property (assign) BOOL atvSetupPendingStatusSent;                    //@synthesize atvSetupPendingStatusSent=_atvSetupPendingStatusSent - In the implementation block
@property (assign) BOOL airPlayPendingStatusSent;                     //@synthesize airPlayPendingStatusSent=_airPlayPendingStatusSent - In the implementation block
@property (retain) NSMutableSet * currentAdvertisersSet;              //@synthesize currentAdvertisersSet=_currentAdvertisersSet - In the implementation block
-(void)reportCoreBluetoothStateChanged;
-(NSMutableSet *)currentAdvertisersSet;
-(void)setCurrentAdvertisersSet:(NSMutableSet *)arg1 ;
-(void)advertisingStarted:(id)arg1 ;
-(id)initWithConnection:(id)arg1 processName:(id)arg2 ;
-(void)setAdvertisingData:(NSData *)arg1 ;
-(NSData *)advertisingData;
-(void)setCompanyPendingStatusSent:(BOOL)arg1 ;
-(void)setAtvSetupPendingStatusSent:(BOOL)arg1 ;
-(void)setAirPlayPendingStatusSent:(BOOL)arg1 ;
-(BOOL)companyPendingStatusSent;
-(BOOL)atvSetupPendingStatusSent;
-(BOOL)airPlayPendingStatusSent;
-(unsigned char)advInterval:(id)arg1 ;
-(void)dealloc;
-(NSString *)processName;
-(XPCConnection *)connection;
-(void)setConnection:(XPCConnection *)arg1 ;
-(void)setProcessName:(NSString *)arg1 ;
-(void)messageArrived:(id)arg1 ;
-(void)connectionDied;
-(void)registerService:(id)arg1 ;
-(void)deregisterService:(id)arg1 ;
-(BOOL)isAdvertising;
-(void)setIsAdvertising:(BOOL)arg1 ;
@end
