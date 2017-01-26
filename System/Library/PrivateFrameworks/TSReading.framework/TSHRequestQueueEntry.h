/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLRequest, NSURLConnection;

@interface TSHRequestQueueEntry : NSObject {

	NSURLRequest* mRequest;
	NSURLRequest* mDependancy;
	NSURLConnection* mConnection;
	id mDelegate;

}
-(id)dependancy;
-(void)setDependancy:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(id)request;
-(id)connection;
-(void)setConnection:(id)arg1 ;
-(void)setRequest:(id)arg1 ;
@end

