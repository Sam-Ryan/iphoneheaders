/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/HMSetupRemoteHost.h>

@protocol HMSetupRemoteHost;
@interface HMSetupRemoteViewController : _UIRemoteViewController <HMSetupRemoteHost> {

	id<HMSetupRemoteHost> _delegate;

}

@property (assign,nonatomic,__weak) id<HMSetupRemoteHost> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<HMSetupRemoteHost>)arg1 ;
-(id<HMSetupRemoteHost>)delegate;
-(void)viewDidLoad;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)accessorySetupDidFinishWithError:(id)arg1 ;
-(void)accessorySetupDidLoad;
@end

