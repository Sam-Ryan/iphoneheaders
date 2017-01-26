/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface NPKPaymentWebServiceTargetDeviceOutstandingRequest : NSObject {

	NSString* _messageIdentifier;
	id _completionHandler;
	/*^block*/id _errorHandler;
	NSObject*<OS_dispatch_source> _timeoutTimer;

}

@property (nonatomic,copy) NSString * messageIdentifier;                              //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutTimer;              //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(void)setTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutTimer;
-(NSString *)messageIdentifier;
-(void)setMessageIdentifier:(NSString *)arg1 ;
@end

