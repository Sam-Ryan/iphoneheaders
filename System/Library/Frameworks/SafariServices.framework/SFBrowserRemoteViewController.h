/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SFRemoteViewControllerProtocol.h>

@protocol SFBrowserRemoveViewControllerDelegate;
@class NSString;

@interface SFBrowserRemoteViewController : _UIRemoteViewController <SFRemoteViewControllerProtocol> {

	id<SFBrowserRemoveViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SFBrowserRemoveViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<SFBrowserRemoveViewControllerDelegate>)arg1 ;
-(id<SFBrowserRemoveViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)didLoadWebView;
-(void)willDismissServiceViewController;
-(void)willUpdateStatusBarStyle:(id)arg1 ;
-(void)didFinishInitialLoad:(BOOL)arg1 ;
-(void)fetchHostAppCustomActivitiesForURL:(id)arg1 title:(id)arg2 ;
-(void)executeCustomActivityProxyID:(id)arg1 ;
-(void)setRemoteSwipeGestureEnabled:(BOOL)arg1 ;
@end

