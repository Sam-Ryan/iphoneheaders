/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIQueueingServiceWebViewControllerProxyDelegate;
@class NSMutableArray;

@interface _UIQueueingServiceWebViewControllerProxy : NSObject {

	NSMutableArray* _queuedInvocations;
	id _serviceViewControllerProxy;
	id<_UIQueueingServiceWebViewControllerProxyDelegate> _delegate;

}

@property (nonatomic,retain) id serviceViewControllerProxy;                                              //@synthesize serviceViewControllerProxy=_serviceViewControllerProxy - In the implementation block
@property (assign,nonatomic) id<_UIQueueingServiceWebViewControllerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<_UIQueueingServiceWebViewControllerProxyDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<_UIQueueingServiceWebViewControllerProxyDelegate>)delegate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)serviceViewControllerProxy;
-(void)forwardInvocation:(id)arg1 ;
-(void)setServiceViewControllerProxy:(id)arg1 ;
@end

