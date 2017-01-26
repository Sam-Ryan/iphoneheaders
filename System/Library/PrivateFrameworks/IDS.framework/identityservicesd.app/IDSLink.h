/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:01 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol IDSLink <NSObject>
@property (retain) NSString * cbuuid; 
@property (retain) NSString * deviceUniqueID; 
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned long long state; 
@property (readonly) unsigned long long headerOverhead; 
@property (__weak) id<IDSLinkDelegate> delegate; 
@required
-(NSString *)cbuuid;
-(void)setCbuuid:(id)arg1;
-(NSString *)deviceUniqueID;
-(id)copyLinkStatsDict;
-(unsigned long long)sendPacketBuffer:(/*function pointer*/void**)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
-(id)generateLinkReport:(double)arg1 isCurrentLink:(BOOL)arg2;
-(NSString *)linkTypeString;
-(unsigned long long)headerOverhead;
-(void)setDelegate:(id)arg1;
-(id<IDSLinkDelegate>)delegate;
-(unsigned long long)state;
-(void)setDeviceUniqueID:(id)arg1;

@end

