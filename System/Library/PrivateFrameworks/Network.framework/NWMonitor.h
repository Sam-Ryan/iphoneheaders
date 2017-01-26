/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Network/Network-Structs.h>
@class NWNetworkDescription, NSArray, NWEndpoint, NWParameters, NSString;

@interface NWMonitor : NSObject {

	long long _status;
	NWNetworkDescription* _bestAvailableNetworkDescription;
	NSArray* _networkDescriptionArray;
	NWEndpoint* _endpoint;
	NWParameters* _parameters;
	net_helper_endpoint_sRef _helperEndpoint;
	unsigned long long _monitorResult;

}

@property (readonly) long long status;                                                    //@synthesize status=_status - In the implementation block
@property (readonly) NWNetworkDescription * bestAvailableNetworkDescription;              //@synthesize bestAvailableNetworkDescription=_bestAvailableNetworkDescription - In the implementation block
@property (readonly) NSArray * networkDescriptionArray;                                   //@synthesize networkDescriptionArray=_networkDescriptionArray - In the implementation block
@property (readonly) NWEndpoint * endpoint;                                               //@synthesize endpoint=_endpoint - In the implementation block
@property (readonly) NWParameters * parameters;                                           //@synthesize parameters=_parameters - In the implementation block
@property (copy,readonly) NSString * privateDescription; 
@property (assign) net_helper_endpoint_sRef helperEndpoint;                               //@synthesize helperEndpoint=_helperEndpoint - In the implementation block
@property (assign) unsigned long long monitorResult;                                      //@synthesize monitorResult=_monitorResult - In the implementation block
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)queue;
+(id)getSavedMonitorForNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 ;
+(void)saveMonitor:(id)arg1 ;
-(void)handleMessage:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NWParameters *)parameters;
-(NWEndpoint *)endpoint;
-(long long)status;
-(NSString *)privateDescription;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(id)initWithNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 ;
-(void)setHelperEndpoint:(net_helper_endpoint_sRef)arg1 ;
-(NSArray *)networkDescriptionArray;
-(BOOL)matchesNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 ;
-(net_helper_endpoint_sRef)helperEndpoint;
-(void)setMonitorResult:(unsigned long long)arg1 ;
-(void)startHelperConnection;
-(id)initWithNetworkDescription:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 ;
-(NWNetworkDescription *)bestAvailableNetworkDescription;
-(unsigned long long)monitorResult;
@end

