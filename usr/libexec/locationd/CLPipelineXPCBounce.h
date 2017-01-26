/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <locationd/CLIndoorDelegateProtocol.h>

@class CLSilo, NSBundle, CLIndoorPositionProvider, CLIndoorMaintenance, CLTimer, NSString;

@interface CLPipelineXPCBounce : NSObject <CLIndoorDelegateProtocol> {

	CLPipelineLocationProvider* _provider;
	CLSilo* _silo;
	NSBundle* _indoorBundle;
	CLIndoorPositionProvider* _indoord;
	CLIndoorMaintenance* _daemonControl;
	CLTimer* _debounceTimer;

}

@property (nonatomic,readonly) CLPipelineLocationProvider* provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) CLSilo * silo;                                     //@synthesize silo=_silo - In the implementation block
@property (nonatomic,retain) NSBundle * indoorBundle;                             //@synthesize indoorBundle=_indoorBundle - In the implementation block
@property (nonatomic,retain) CLIndoorPositionProvider * indoord;                  //@synthesize indoord=_indoord - In the implementation block
@property (nonatomic,retain) CLIndoorMaintenance * daemonControl;                 //@synthesize daemonControl=_daemonControl - In the implementation block
@property (nonatomic,retain) CLTimer * debounceTimer;                             //@synthesize debounceTimer=_debounceTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CLTimer *)debounceTimer;
-(void)setDebounceTimer:(CLTimer *)arg1 ;
-(id)initWithProvider:(CLPipelineLocationProvider*)arg1 onSilo:(id)arg2 ;
-(NSBundle *)indoorBundle;
-(void)setIndoorBundle:(NSBundle *)arg1 ;
-(CLIndoorPositionProvider *)indoord;
-(void)setIndoord:(CLIndoorPositionProvider *)arg1 ;
-(CLIndoorMaintenance *)daemonControl;
-(void)setDaemonControl:(CLIndoorMaintenance *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(CLSilo *)silo;
-(CLPipelineLocationProvider*)provider;
-(void)indoorDidUpdateToLocation:(id)arg1 fromLocation:(id)arg2 ;
-(void)indoorIsUncertainWithLocation:(id)arg1 ;
-(void)indoorGivesUpWithLocation:(id)arg1 ;
-(void)indoorAssetDownloadProgress:(float)arg1 ;
-(void)indoorDidFailWithError:(id)arg1 ;
@end

