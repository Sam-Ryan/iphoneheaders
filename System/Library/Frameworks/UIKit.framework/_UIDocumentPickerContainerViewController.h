/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UISearchControllerDelegate.h>

@protocol _UIDocumentPickerServiceViewController, _UIDocumentPickerContainedViewController;
@class _UIDocumentPickerContainerModel, UIViewController, _UIDocumentPickerSortOrderView, _UIDocumentPickerSearchPaletteView, NSArray, NSString;

@interface _UIDocumentPickerContainerViewController : UIViewController <UISearchControllerDelegate> {

	long long _explicitDisplayMode;
	BOOL _rootContainer;
	id<_UIDocumentPickerServiceViewController> _serviceViewController;
	_UIDocumentPickerContainerModel* _model;
	UIViewController*<_UIDocumentPickerContainedViewController> _childViewController;
	_UIDocumentPickerSortOrderView* _sortView;
	_UIDocumentPickerSearchPaletteView* _searchView;

}

@property (assign,nonatomic,__weak) id<_UIDocumentPickerServiceViewController> serviceViewController;                      //@synthesize serviceViewController=_serviceViewController - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerContainerModel * model;                                                      //@synthesize model=_model - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (nonatomic,retain) NSArray * indexPathsForSelectedItems; 
@property (assign,nonatomic) long long explicitDisplayMode;                                                                //@synthesize explicitDisplayMode=_explicitDisplayMode - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset; 
@property (nonatomic,retain) UIViewController*<_UIDocumentPickerContainedViewController> childViewController;              //@synthesize childViewController=_childViewController - In the implementation block
@property (assign,getter=isRootContainer,nonatomic) BOOL rootContainer;                                                    //@synthesize rootContainer=_rootContainer - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerSortOrderView * sortView;                                                    //@synthesize sortView=_sortView - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerSearchPaletteView * searchView;                                              //@synthesize searchView=_searchView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userDefaults;
-(void)dealloc;
-(CGPoint)contentOffset;
-(id)url;
-(void)viewDidLayoutSubviews;
-(void)setContentOffset:(CGPoint)arg1 ;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(NSArray *)indexPathsForSelectedItems;
-(_UIDocumentPickerContainerModel *)model;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setSortOrder:(int)arg1 ;
-(int)sortOrder;
-(id<_UIDocumentPickerServiceViewController>)serviceViewController;
-(void)setServiceViewController:(id<_UIDocumentPickerServiceViewController>)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)setExplicitDisplayMode:(long long)arg1 ;
-(long long)displayMode;
-(void)setIndexPathsForSelectedItems:(NSArray *)arg1 ;
-(void)displayModeChanged;
-(void)setModel:(_UIDocumentPickerContainerModel *)arg1 ;
-(void)setRootContainer:(BOOL)arg1 ;
-(void)_sortOrderViewChanged:(id)arg1 ;
-(void)ensureChildViewController;
-(UIViewController*<_UIDocumentPickerContainedViewController>)childViewController;
-(void)setChildViewController:(UIViewController*<_UIDocumentPickerContainedViewController>)arg1 ;
-(_UIDocumentPickerSortOrderView *)sortView;
-(void)setSortView:(_UIDocumentPickerSortOrderView *)arg1 ;
-(void)setupSearchController:(BOOL)arg1 ;
-(void)setChildViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDefaultDisplayMode:(long long)arg1 ;
-(void)_updateForServiceView;
-(BOOL)isRootContainer;
-(void)setupToolbar;
-(void)teardownToolbar;
-(void)_pickCurrentLocationForUpload:(id)arg1 ;
-(_UIDocumentPickerSearchPaletteView *)searchView;
-(long long)defaultDisplayMode;
-(long long)explicitDisplayMode;
-(void)setSearchView:(_UIDocumentPickerSearchPaletteView *)arg1 ;
@end

