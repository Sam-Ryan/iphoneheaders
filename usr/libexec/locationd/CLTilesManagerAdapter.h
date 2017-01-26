/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <locationd/CLNotifierServiceAdapter.h>
#import <locationd/CLTilesManagerProtocol.h>

@class NSString;

@interface CLTilesManagerAdapter : CLNotifierServiceAdapter <CLTilesManagerProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(void)becameFatallyBlocked:(id)arg1 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(void)requestTileDownloadByType:(int)arg1 lat:(double)arg2 lon:(double)arg3 seckey:(unsigned long long)arg4 details:(CLTileFileDownloadDetails)arg5 ;
-(void)requestTileDownloadByType:(int)arg1 path:(id)arg2 details:(CLTileFileDownloadDetails)arg3 ;
-(void)enableAppTilesDownload:(BOOL)arg1 ;
-(void)doAsync:(/*^block*/id)arg1 ;
-(void)doAsync:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2 ;
-(BOOL)syncgetDoSync:(/*^block*/id)arg1 ;
-(void)beginService;
-(void)endService;
-(CLTilesManager*)adaptee;
-(id)initInSilo:(id)arg1 ;
@end

