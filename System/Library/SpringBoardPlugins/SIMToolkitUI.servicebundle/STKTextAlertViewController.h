/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/SIMToolkitUI.servicebundle/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SIMToolkitUI/STKBaseAlertViewController.h>

@class UITextView;

@interface STKTextAlertViewController : STKBaseAlertViewController {

	UITextView* _textView;

}
-(void)dealloc;
-(BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)dismiss;
-(void)dismiss:(id)arg1 ;
-(void)accept:(id)arg1 ;
-(id)newTopBar;
-(id)newBottomBar;
-(id)alertText;
-(void)_adjustTextFrame;
-(void)rightNavigationButtonPressed;
-(void)leftNavigationButtonPressed;
@end

