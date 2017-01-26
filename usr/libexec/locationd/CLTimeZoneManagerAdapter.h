/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:19 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <locationd/CLIntersiloService.h>
#import <locationd/CLTimeZoneManagerProtocol.h>

@class NSString;

@interface CLTimeZoneManagerAdapter : CLIntersiloService <CLTimeZoneManagerProtocol> {

	CLTimeZoneManager* _manager;

}

@property (assign,nonatomic) CLTimeZoneManager* manager;              //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(void)becameFatallyBlocked:(id)arg1 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
+(BOOL)isSupported;
-(CLTimeZoneManager*)manager;
-(void)beginService;
-(void)endService;
-(id)initInSilo:(id)arg1 ;
-(void)setManager:(CLTimeZoneManager*)arg1 ;
@end

