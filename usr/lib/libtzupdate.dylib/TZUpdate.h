/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:13:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libtzupdate.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TZFileSystemInterface, NSXPCConnection;

@interface TZUpdate : NSObject {

	TZFileSystemInterface* _fileSystemInterface;
	NSXPCConnection* _connectionToService;

}

@property (retain) TZFileSystemInterface * fileSystemInterface;              //@synthesize fileSystemInterface=_fileSystemInterface - In the implementation block
@property (retain) NSXPCConnection * connectionToService;                    //@synthesize connectionToService=_connectionToService - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)createNewXPCConnection;
-(BOOL)isUpdateWaiting;
-(TZFileSystemInterface *)fileSystemInterface;
-(void)purgeAllAssetsWithCompletion:(/*^block*/id)arg1 ;
-(id)affectedZones;
-(id)currentTZDataVersion;
-(BOOL)alertForAllZones;
-(id)updateTZDataVersion;
-(void)setFileSystemInterface:(TZFileSystemInterface *)arg1 ;
-(NSXPCConnection *)connectionToService;
-(void)setConnectionToService:(NSXPCConnection *)arg1 ;
-(void)isUpdateWaitingWithCompletion:(/*^block*/id)arg1 ;
@end

