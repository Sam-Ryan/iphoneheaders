/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/pipelined
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pipelined/CLIndoorMaintenanceProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CLIndoorServiceDelegate, CLIndoorTilePrefetcher, NSString;

@interface CLIndoorMaintenanceDelegate : NSObject <CLIndoorMaintenanceProtocol, NSXPCListenerDelegate> {

	BOOL _shutdown;
	NSObject*<OS_dispatch_queue> _q;
	CLIndoorServiceDelegate* _serviceDelegate;
	CLIndoorTilePrefetcher* _tilePrefetcher;

}

@property (q,nonatomic,retain) NSObject*<OS_dispatch_queue> q;                              //@synthesize q=_q - In the implementation block
@property (assign,nonatomic,__weak) CLIndoorServiceDelegate * serviceDelegate;              //@synthesize serviceDelegate=_serviceDelegate - In the implementation block
@property (nonatomic,retain) CLIndoorTilePrefetcher * tilePrefetcher;                       //@synthesize tilePrefetcher=_tilePrefetcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)q;
-(void)setQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CLIndoorServiceDelegate *)serviceDelegate;
-(void)setServiceDelegate:(CLIndoorServiceDelegate *)arg1 ;
-(CLIndoorTilePrefetcher *)tilePrefetcher;
-(void)setTilePrefetcher:(CLIndoorTilePrefetcher *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)shutdown;
-(void)retrieveLocationRelevancyDurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)prefetch:(id)arg1 callback:(/*^block*/id)arg2 when:(unsigned char)arg3 ;
-(void)eraseAllData:(/*^block*/id)arg1 ;
-(void)clearTiles:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)numFloors:(/*^block*/id)arg1 ;
-(id)initWithService:(id)arg1 ;
@end

