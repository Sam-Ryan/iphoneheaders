/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:41 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DownloadDataConsumer : NSObject {

	BOOL _overrideProgress;

}

@property (nonatomic,readonly) unsigned long long diskUsage; 
@property (nonatomic,readonly) BOOL hasConsumedData; 
@property (assign,nonatomic) BOOL overrideProgress;                              //@synthesize overrideProgress=_overrideProgress - In the implementation block
@property (nonatomic,readonly) double percentComplete; 
@property (nonatomic,readonly) unsigned long long resumptionOffset; 
-(unsigned long long)resumptionOffset;
-(BOOL)consumeData:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasConsumedData;
-(BOOL)overrideProgress;
-(void)setOverrideProgress:(BOOL)arg1 ;
-(void)truncate;
-(double)percentComplete;
-(void)reset;
-(void)suspend;
-(BOOL)finish:(id*)arg1 ;
-(unsigned long long)diskUsage;
@end

