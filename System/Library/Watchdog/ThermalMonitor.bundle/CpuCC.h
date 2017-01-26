/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:06:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/ComponentControl.h>
#import <ThermalMonitor/tGraphDataSource.h>

@interface CpuCC : ComponentControl <tGraphDataSource> {

	unsigned kDVD1Level;
	int listIDPos;
	unsigned host;
	host_cpu_load_info currCpu;
	host_cpu_load_info prevCpu;
	float powerScale;
	float timeActive;
	BOOL _useDirectMap;
	unsigned _minReachableLoadIndex;
	float _directMapSlope;
	float _directMapIntercept;

}

@property (assign,nonatomic) BOOL useDirectMap;                           //@synthesize useDirectMap=_useDirectMap - In the implementation block
@property (assign,nonatomic) unsigned minReachableLoadIndex;              //@synthesize minReachableLoadIndex=_minReachableLoadIndex - In the implementation block
@property (assign,nonatomic) float directMapSlope;                        //@synthesize directMapSlope=_directMapSlope - In the implementation block
@property (assign,nonatomic) float directMapIntercept;                    //@synthesize directMapIntercept=_directMapIntercept - In the implementation block
-(void)setMinReachableLoadIndex:(unsigned)arg1 ;
-(void)refreshCurrentLoadingIndex;
-(void)setUseDirectMap:(BOOL)arg1 ;
-(void)setDirectMapIntercept:(float)arg1 ;
-(BOOL)useDirectMap;
-(void)setDirectMapSlope:(float)arg1 ;
-(float)directMapSlope;
-(float)directMapIntercept;
-(unsigned)minReachableLoadIndex;
-(unsigned)getUserUsage;
-(BOOL)usesPID;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(int)numberOfFields;
-(id)initWithParams:(CFDictionaryRef)arg1 powerScale:(float)arg2 listID:(int)arg3 ;
-(void)refreshCurrentLoadingIndexUsingPID;
-(void)defaultAction;
@end

