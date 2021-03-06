/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:18 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <locationd/CLLocationProviderAdapter.h>
#import <locationd/CLLocationStreamingConnectionManagerClientProtocol.h>
#import <locationd/CLStreamedLocationProviderProtocol.h>

@class NSString;

@interface CLStreamedLocationProviderAdapter : CLLocationProviderAdapter <CLLocationStreamingConnectionManagerClientProtocol, CLStreamedLocationProviderProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(BOOL)isSupported;
+(void)becameFatallyBlocked:(id)arg1 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(void)receivedMessageOfType:(id)arg1 withPayload:(id)arg2 ;
-(void)failedToSendMessage:(id)arg1 withError:(id)arg2 isFatal:(BOOL)arg3 ;
-(void)successfullySentMessage:(id)arg1 ;
-(void)pairedDeviceIsNearby:(BOOL)arg1 ;
-(void)doAsync:(/*^block*/id)arg1 ;
-(void)doAsync:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2 ;
-(BOOL)syncgetDoSync:(/*^block*/id)arg1 ;
-(void)beginService;
-(void)endService;
-(CLStreamedLocationProvider*)adaptee;
-(id)initInSilo:(id)arg1 ;
@end

