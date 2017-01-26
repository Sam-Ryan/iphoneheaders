/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKDMescalSession;

@interface CKDMescalSessionOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	int _serverVersion;
	CKDMescalSession* _session;

}

@property (assign,nonatomic) int serverVersion;                       //@synthesize serverVersion=_serverVersion - In the implementation block
@property (nonatomic,retain) CKDMescalSession * session;              //@synthesize session=_session - In the implementation block
-(void)setServerVersion:(int)arg1 ;
-(int)serverVersion;
-(CKDMescalSession *)session;
-(void)setSession:(CKDMescalSession *)arg1 ;
@end

