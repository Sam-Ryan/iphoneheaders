/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/coreduetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <coreduetd/coreduetd-Structs.h>
@class NSObject;

@interface CDDDiagnostics : NSObject {

	int _logfd;
	asl_object_sRef _aslclient;
	asl_object_sRef _diagmsg;
	NSObject*<OS_dispatch_queue> _diagQueue;
	NSObject*<OS_dispatch_source> _diagTimer;
	int _diagToken;
	BOOL _enabled;

}

@property (readonly) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(id)diagnositics;
-(BOOL)checkDiagState;
-(void)logDictionary:(id)arg1 ;
-(BOOL)enabled;
-(void)dealloc;
-(id)init;
-(void)logString:(id)arg1 ;
-(void)turnOffDiagnostic;
-(void)turnOnDiagnostic:(long long)arg1 ;
@end
