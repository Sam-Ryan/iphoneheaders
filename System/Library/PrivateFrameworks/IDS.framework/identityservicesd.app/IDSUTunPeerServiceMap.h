/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:01 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject, NSMapTable;

@interface IDSUTunPeerServiceMap : NSObject {

	NSObject*<OS_dispatch_semaphore> _lock;
	unsigned char _remoteInstanceID[16];
	NSMapTable* _serviceNameToStreamIDMap;
	NSMapTable* _streamIDToServiceNameMap;
	unsigned short _nextStreamID;

}

@property (readonly) unsigned long long count; 
-(void)setRemoteInstanceID:(unsigned char*)arg1 ;
-(void)associateServiceName:(id)arg1 withStreamID:(unsigned short)arg2 remoteInstanceID:(unsigned char*)arg3 remoteInstanceIDChanged:(BOOL*)arg4 ;
-(BOOL)translateStreamID:(unsigned short)arg1 toServiceName:(id*)arg2 remoteInstanceID:(unsigned char*)arg3 remoteInstanceIDChanged:(BOOL*)arg4 ;
-(BOOL)translateServiceName:(id)arg1 toStreamID:(unsigned short*)arg2 createIfNotFound:(BOOL)arg3 mappingCreated:(BOOL*)arg4 remoteInstanceID:(unsigned char*)arg5 remoteInstanceIDChanged:(BOOL*)arg6 ;
-(unsigned long long)count;
-(id)init;
-(id)description;
@end

