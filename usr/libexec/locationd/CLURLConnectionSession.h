/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <locationd/locationd-Structs.h>
@class NSMapTable;

@interface CLURLConnectionSession : NSObject {

	CFURLConnectionSessionRef _connectionSession;
	NSMapTable* _connectionDelegates;

}
-(id)initPersistentSessionWithTimeout:(int)arg1 ;
-(void)createConnectionSessionWithPurgeTimeout:(int)arg1 ;
-(id)delegateForConnection:(CFURLConnectionRef)arg1 ;
-(void)dealloc;
-(CFURLRequestRef)newCFMutableURLRequestWithURL:(id)arg1 ;
-(void)removeDelegateForConnection:(CFURLConnectionRef)arg1 ;
-(CFURLConnectionRef)newCFURLConnectionWithRequest:(CFURLRequestRef)arg1 delegate:(id)arg2 ;
@end

