/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:12 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKDatabaseConnection;

@interface GKSQLRunner : NSObject {

	GKDatabaseConnection* _connection;

}

@property (nonatomic,retain) GKDatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)runnerWithConnection:(id)arg1 ;
-(int)runSQL:(id)arg1 ;
-(int)runSQLFromFileAtPath:(id)arg1 ;
-(void)dealloc;
-(GKDatabaseConnection *)connection;
-(void)setConnection:(GKDatabaseConnection *)arg1 ;
-(id)initWithConnection:(id)arg1 ;
@end

