/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSString, PKPaymentSetupAboutView;

@interface PKPaymentSetupAboutViewController : UIViewController <UIScrollViewDelegate> {

	BOOL _requiresPrivacy;
	NSString* _bodyText;
	PKPaymentSetupAboutView* _aboutView;
	void* _navigationController;
	BOOL _navigationControllerHidesShadow;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)loadView;
-(void)_done:(id)arg1 ;
-(id)initWithAboutText:(id)arg1 isPresented:(BOOL)arg2 ;
-(id)initForPrivacyPresented:(BOOL)arg1 ;
-(void)_setupNavigationItemWithTitle:(id)arg1 isPresented:(BOOL)arg2 ;
-(void)_showPrivacyView:(id)arg1 ;
@end

