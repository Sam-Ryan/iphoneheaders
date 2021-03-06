/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:21:22 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/useractivityd-Structs.h>
#import <useractivityd/UACornerActionItemConnectorProtocol.h>

@class UACornerActionManager, NSURL, NSDate, NSString;

@interface UADebugLoggingConnector : NSObject <UACornerActionItemConnectorProtocol> {

	_sFILE* _file;
	NSURL* loggingFileURL;
	BOOL paused;
	NSDate* lastLogEntryTime;
	UACornerActionManager* _cornerActionManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) UACornerActionManager * cornerActionManager;              //@synthesize cornerActionManager=_cornerActionManager - In the implementation block
-(id)initWithManager:(id)arg1 path:(id)arg2 ;
-(void)logTimeDelta;
-(BOOL)acceptsItem:(id)arg1 ;
-(void)itemChanged:(id)arg1 ;
-(UACornerActionManager *)cornerActionManager;
-(void)pauseLogging;
-(void)resumeLogging;
-(void)dealloc;
-(void)flush;
-(void)suspend;
-(void)removeItem:(id)arg1 ;
-(id)items;
-(void)resume;
-(void)addItem:(id)arg1 ;
-(id)initWithManager:(id)arg1 ;
-(id)statusString;
-(void)setLogFilePath:(id)arg1 ;
-(void)updateItem:(id)arg1 ;
-(void)logString:(id)arg1 ;
-(void)terminate;
@end

