/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UITableViewController.h>

@interface _SFPopoverSizingTableViewController : UITableViewController {

	BOOL _didUpdateTranslucentAppearanceAtLeastOnce;
	BOOL _didHaveTranslucentAppearance;

}

@property (nonatomic,readonly) BOOL hasTranslucentAppearance; 
+(double)standardMinimumHeightInPopoverView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_updateTranslucentAppearanceIfNeeded;
-(BOOL)hasTranslucentAppearance;
-(void)updateTranslucentAppearance;
-(id)backgroundColorUsingTranslucentAppearance:(BOOL)arg1 ;
-(double)minimumHeightInPopoverView;
@end
