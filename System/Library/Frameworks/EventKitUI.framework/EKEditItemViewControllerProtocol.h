/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EKEditItemViewControllerProtocol
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
@optional
-(void)setEditDelegate:(id)arg1;
-(void)saveAndDismissWithExtremePrejudice;
-(id<EKEditItemViewControllerDelegate>)editDelegate;
-(BOOL)presentModally;
-(void)setPresentModally:(BOOL)arg1;
-(BOOL)editItemShouldBeAskedForInjectableViewController;
-(void)setEditItemShouldBeAskedForInjectableViewController:(BOOL)arg1;

@end

