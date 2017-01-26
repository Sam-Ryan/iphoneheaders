/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/CDPHostInterface.h>

@interface _CDPHostViewController : _UIRemoteViewController <CDPHostInterface> {

	/*^block*/id _viewServiceTerminationBlock;

}

@property (nonatomic,copy) id viewServiceTerminationBlock;              //@synthesize viewServiceTerminationBlock=_viewServiceTerminationBlock - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setViewServiceTerminationBlock:(id)arg1 ;
-(id)viewServiceTerminationBlock;
-(void)hostKeyboardOffset:(/*^block*/id)arg1 ;
-(double)_keyboardHeightOffset;
@end

