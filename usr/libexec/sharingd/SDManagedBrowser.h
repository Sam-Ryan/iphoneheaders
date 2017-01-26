/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:29 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface SDManagedBrowser : NSObject {

	int _clientCount;
	BOOL _sendNotification;
	NSDictionary* _servers;

}

@property (copy,readonly) NSArray * nodes; 
+(id)sharedBrowser;
-(void)buildNodesAndNotify;
-(id)init;
-(void)stop;
-(void)start;
-(NSArray *)nodes;
-(void)setServers:(id)arg1 ;
@end
