/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PLPhotoScrollerViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UIView, NSString;

@interface PLPhonePhotoScrollerViewController : PLPhotoScrollerViewController <UINavigationControllerDelegate> {

	BOOL _isModalTransition;
	BOOL _didDisappearUnderModalTransition;
	UIView* _viewToRemoveForSlideShow;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_isPerformingModalTransitionFromCamera;
-(void)beginSlideshowByRemovingView:(id)arg1 ;
-(BOOL)isModalTransitioning;
-(id)initWithPhotoAtIndexPath:(id)arg1 inAssetCollections:(id)arg2 dataSource:(id)arg3 lockStatusBar:(BOOL)arg4 delayImageLoading:(BOOL)arg5 ;
@end
