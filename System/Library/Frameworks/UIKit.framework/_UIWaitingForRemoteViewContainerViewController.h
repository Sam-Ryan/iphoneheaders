/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIActivityIndicatorView;

@interface _UIWaitingForRemoteViewContainerViewController : UIViewController {

	UIActivityIndicatorView* _loadingSpinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * loadingSpinner;              //@synthesize loadingSpinner=_loadingSpinner - In the implementation block
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)stopSpinner;
-(void)setLoadingSpinner:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingSpinner;
@end

