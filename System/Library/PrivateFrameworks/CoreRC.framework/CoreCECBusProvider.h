/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CoreCECBus.h>
#import <libobjc.A.dylib/CECInterfaceDelegate.h>
#import <libobjc.A.dylib/CECBusPollingOperationDelegate.h>

@class CECInterface, CECBusPollingOperation, NSString;

@interface CoreCECBusProvider : CoreCECBus <CECInterfaceDelegate, CECBusPollingOperationDelegate> {

	CECInterface* _interface;
	BOOL _realHasLink;
	BOOL _deferLossOfLink;
	CECBusPollingOperation* _pollingOperation;

}

@property (nonatomic,readonly) BOOL deferLossOfLink;                                 //@synthesize deferLossOfLink=_deferLossOfLink - In the implementation block
@property (nonatomic,retain,readonly) CECInterface * interface;                      //@synthesize interface=_interface - In the implementation block
@property (nonatomic,retain) CECBusPollingOperation * pollingOperation;              //@synthesize pollingOperation=_pollingOperation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(CECInterface *)interface;
-(BOOL)sendMessage:(id)arg1 error:(id*)arg2 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)propertyForKey:(id)arg1 error:(id*)arg2 ;
-(id)initWithInterface:(id)arg1 ;
-(void)updateAllowHibernation;
-(void)willRemoveDevice:(id)arg1 ;
-(id)initWithBus:(id)arg1 ;
-(id)initWithLinkState:(BOOL)arg1 physicalAddress:(unsigned long long)arg2 ;
-(void)didChangeLinkState:(BOOL)arg1 physicalAddress:(unsigned long long)arg2 ;
-(void)setOsdNameASCII:(CECOSDName)arg1 ;
-(void)setTvLanguageCodeASCII:(CECLanguage)arg1 ;
-(id)addDeviceWithType:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)setLinkState:(BOOL)arg1 physicalAddress:(unsigned long long)arg2 ;
-(void)setStreamPath:(unsigned long long)arg1 ;
-(void)setSystemAudioModeStatus:(unsigned long long)arg1 ;
-(id)addDeviceWithLogicalAddress:(unsigned char)arg1 physicalAddress:(unsigned long long)arg2 deviceType:(unsigned long long)arg3 message:(id)arg4 reason:(unsigned long long)arg5 ;
-(void)interfacePropertiesChanged:(id)arg1 ;
-(void)interface:(id)arg1 receivedFrame:(CECFrame)arg2 ;
-(void)interface:(id)arg1 hibernationChanged:(BOOL)arg2 ;
-(void)setActiveSource:(id)arg1 ;
-(CECBusPollingOperation *)pollingOperation;
-(void)setPollingOperation:(CECBusPollingOperation *)arg1 ;
-(void)_changeActiveSourceFrom:(id)arg1 to:(id)arg2 ;
-(id)addDeviceWithLogicalAddress:(unsigned char)arg1 message:(id)arg2 reason:(unsigned long long)arg3 ;
-(id)destinationExpectedForMessage:(id)arg1 ;
-(BOOL)sendMessage:(id)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3 ;
-(id)_cecErrorWithError:(id)arg1 fromInterface:(id)arg2 ;
-(id)destinationConfirmedForMessage:(id)arg1 ;
-(void)receivedMessage:(id)arg1 ;
-(BOOL)pollingOperation:(id)arg1 shouldSkipAddress:(unsigned char)arg2 ;
-(void)pollingOperationCompleted:(id)arg1 ;
-(void)pollingOperation:(id)arg1 deviceNotRespondingAtAddress:(unsigned char)arg2 ;
-(void)pollingOperation:(id)arg1 encounteredError:(id)arg2 forMessage:(id)arg3 ;
-(BOOL)refreshDevicesWithInitiator:(id)arg1 error:(id*)arg2 ;
-(void)makeDeviceInactiveSource:(id)arg1 ;
-(BOOL)deferLossOfLink;
@end

