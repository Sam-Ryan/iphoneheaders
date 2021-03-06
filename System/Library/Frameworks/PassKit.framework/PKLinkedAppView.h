/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PKTableViewCell.h>
#import <libobjc.A.dylib/PKLinkedApplicationDelegate.h>

@class UIImageView, UILabel, UIButton, PKLinkedAppUserRatingView, UIActivityIndicatorView, PKLinkedApplication, UIColor, NSArray, NSURL, NSString;

@interface PKLinkedAppView : PKTableViewCell <PKLinkedApplicationDelegate> {

	UIImageView* _iconView;
	UILabel* _appName;
	UIButton* _viewButton;
	UILabel* _appPublisher;
	PKLinkedAppUserRatingView* _userRatingView;
	UILabel* _price;
	UIActivityIndicatorView* _activityIndicator;
	UILabel* _loadingLabel;
	PKLinkedApplication* _linkedApplication;
	UIColor* _mainLabelColor;
	UIColor* _subTextLabelColor;

}

@property (nonatomic,readonly) PKLinkedApplication * linkedApplication;              //@synthesize linkedApplication=_linkedApplication - In the implementation block
@property (nonatomic,copy) NSArray * storeIDs; 
@property (nonatomic,copy) NSURL * appLaunchURL; 
@property (assign,nonatomic) UIColor * mainLabelColor;                               //@synthesize mainLabelColor=_mainLabelColor - In the implementation block
@property (assign,nonatomic) UIColor * subTextLabelColor;                            //@synthesize subTextLabelColor=_subTextLabelColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setApplicationName:(id)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
-(void)setPrice:(id)arg1 ;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(NSArray *)storeIDs;
-(void)_layoutLoadingView;
-(void)setLoadingText:(id)arg1 ;
-(NSURL *)appLaunchURL;
-(id)initWithStoreIDs:(id)arg1 appLaunchURL:(id)arg2 reuseIdentifier:(id)arg3 ;
-(void)setAppLaunchURL:(NSURL *)arg1 ;
-(void)linkedApplicationDidChangeState:(id)arg1 ;
-(void)reloadApplicationStateIfNecessary;
-(PKLinkedApplication *)linkedApplication;
-(void)_layoutLockupView;
-(void)_layoutNotAvailableView;
-(void)_cleanupViews;
-(UIColor *)subTextLabelColor;
-(UIColor *)mainLabelColor;
-(void)setApplicationIcon:(id)arg1 ;
-(void)setMainLabelColor:(UIColor *)arg1 ;
-(void)setSubTextLabelColor:(UIColor *)arg1 ;
@end

