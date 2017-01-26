/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSString;

@interface NEHotspotNetwork : NSObject {

	CNNetworkRef _network;

}

@property (readonly) NSString * SSID; 
@property (readonly) NSString * BSSID; 
@property (readonly) double signalStrength; 
@property (getter=isSecure,readonly) BOOL secure; 
@property (getter=didAutoJoin,readonly) BOOL autoJoined; 
@property (getter=didJustJoin,readonly) BOOL justJoined; 
@property (getter=isChosenHelper,readonly) BOOL chosenHelper; 
@property (assign) CNNetworkRef network;                                   //@synthesize network=_network - In the implementation block
@property (readonly) NSString * interfaceName; 
-(void)setPassword:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)isSecure;
-(void)setConfidence:(long long)arg1 ;
-(NSString *)interfaceName;
-(NSString *)SSID;
-(NSString *)BSSID;
-(BOOL)didAutoJoin;
-(BOOL)didJustJoin;
-(BOOL)isChosenHelper;
-(CNNetworkRef)network;
-(void)setNetwork:(CNNetworkRef)arg1 ;
-(double)signalStrength;
-(id)initWithNetwork:(CNNetworkRef)arg1 ;
@end

