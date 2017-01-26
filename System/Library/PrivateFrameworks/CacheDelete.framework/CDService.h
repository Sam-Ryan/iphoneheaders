/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSXPCListenerEndpoint, NSString, NSSet;

@interface CDService : NSObject {

	BOOL _doesPeriodic;
	BOOL _doesPurge;
	BOOL _userAgent;
	BOOL _doNotQuery;
	BOOL _multiUserOnly;
	BOOL _noQuota;
	NSXPCConnection* _xpcConn;
	NSXPCListenerEndpoint* _endpoint;
	NSString* _ID;
	NSSet* _desiredNotifications;

}

@property (nonatomic,retain) NSXPCConnection * xpcConn;                     //@synthesize xpcConn=_xpcConn - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,retain) NSString * ID;                                 //@synthesize ID=_ID - In the implementation block
@property (nonatomic,retain) NSSet * desiredNotifications;                  //@synthesize desiredNotifications=_desiredNotifications - In the implementation block
@property (assign) BOOL doesPeriodic;                                       //@synthesize doesPeriodic=_doesPeriodic - In the implementation block
@property (assign) BOOL doesPurge;                                          //@synthesize doesPurge=_doesPurge - In the implementation block
@property (assign) BOOL userAgent;                                          //@synthesize userAgent=_userAgent - In the implementation block
@property (assign) BOOL doNotQuery;                                         //@synthesize doNotQuery=_doNotQuery - In the implementation block
@property (assign) BOOL multiUserOnly;                                      //@synthesize multiUserOnly=_multiUserOnly - In the implementation block
@property (assign) BOOL noQuota;                                            //@synthesize noQuota=_noQuota - In the implementation block
-(NSXPCListenerEndpoint *)endpoint;
-(NSXPCConnection *)xpcConn;
-(void)setXpcConn:(NSXPCConnection *)arg1 ;
-(NSSet *)desiredNotifications;
-(void)setDesiredNotifications:(NSSet *)arg1 ;
-(BOOL)doesPeriodic;
-(void)setDoesPeriodic:(BOOL)arg1 ;
-(BOOL)doesPurge;
-(void)setDoesPurge:(BOOL)arg1 ;
-(BOOL)doNotQuery;
-(void)setDoNotQuery:(BOOL)arg1 ;
-(BOOL)multiUserOnly;
-(void)setMultiUserOnly:(BOOL)arg1 ;
-(BOOL)noQuota;
-(void)setNoQuota:(BOOL)arg1 ;
-(void)setUserAgent:(BOOL)arg1 ;
-(BOOL)userAgent;
-(void)setEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)setID:(NSString *)arg1 ;
-(NSString *)ID;
@end

