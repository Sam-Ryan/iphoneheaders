/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIIndexBarControlControllerDataSource.h>
#import <libobjc.A.dylib/SKUIIndexBarControlControllerDelegate.h>
#import <libobjc.A.dylib/SKUIIndexBarEntryListControllerDelegate.h>
#import <libobjc.A.dylib/SKUIModalSourceViewProvider.h>
#import <libobjc.A.dylib/SKUIViewControllerTesting.h>
#import <libobjc.A.dylib/SKUICollectionViewPullToRefreshDelegate.h>
#import <libobjc.A.dylib/SKUIStorePageSectionsDelegate.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class IKAppDocument, NSArray, SKUIIndexBarControlController, SKUIResourceLoader, SKUIStorePageSectionsViewController, SKUIStackTemplateElement, NSMapTable, NSString;

@interface SKUIStackDocumentViewController : SKUIViewController <SKUIIndexBarControlControllerDataSource, SKUIIndexBarControlControllerDelegate, SKUIIndexBarEntryListControllerDelegate, SKUIModalSourceViewProvider, SKUIViewControllerTesting, SKUICollectionViewPullToRefreshDelegate, SKUIStorePageSectionsDelegate, SKUIDocumentViewController> {

	IKAppDocument* _document;
	NSArray* _entryListControllers;
	BOOL _hasResetState;
	SKUIIndexBarControlController* _indexBarControlController;
	long long _lastNeedsMoreCount;
	long long _layoutStyle;
	SKUIResourceLoader* _resourceLoader;
	SKUIStorePageSectionsViewController* _sectionsViewController;
	SKUIStackTemplateElement* _templateElement;
	NSMapTable* _viewElementToEntryListController;

}

@property (nonatomic,readonly) SKUIStorePageSectionsViewController * sectionsViewController;              //@synthesize sectionsViewController=_sectionsViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)dealloc;
-(void)loadView;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(id)_colorScheme;
-(void)documentDidUpdate:(id)arg1 ;
-(id)impressionableViewElements;
-(void)documentMediaQueriesDidUpdate:(id)arg1 ;
-(id)_resourceLoader;
-(void)sectionsViewController:(id)arg1 willScrollToOffset:(CGPoint)arg2 visibleRange:(SKUIIndexPathRange)arg3 ;
-(void)refresh:(id)arg1 refreshControl:(id)arg2 ;
-(void)skui_viewWillAppear:(BOOL)arg1 ;
-(BOOL)performTestWithName:(id)arg1 options:(id)arg2 ;
-(long long)_pinningTransitionStyle;
-(void)_updateEntryListControllersWithReload:(BOOL)arg1 ;
-(void)_resetStateForDocumentNotification:(id)arg1 ;
-(void)_resetState;
-(id)_indexBarViewElement;
-(void)_configureIndexBarControl:(id)arg1 ;
-(void)_updateIndexBarVisibility;
-(id)_pageSplitsDescription;
-(id)_pullToRefreshElement;
-(void)documentDidUpdate:(id)arg1 withTemplate:(id)arg2 ;
-(BOOL)_tryToScrollToSectionAtIndexPath:(id)arg1 ;
-(long long)_globalIndexFromIndexPath:(id)arg1 ;
-(long long)_maxGlobalIndex;
-(id)_indexPathFromGlobalIndex:(long long)arg1 ;
-(id)_pageComponentsWithViewElements:(id)arg1 ;
-(BOOL)_shouldShowIndexBar;
-(id)_indexBarControlController;
-(long long)indexBarControlController:(id)arg1 numberOfEntryDescriptorsInSection:(long long)arg2 ;
-(id)indexBarControlController:(id)arg1 entryDescriptorAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInIndexBarControlController:(id)arg1 ;
-(void)indexBarControlController:(id)arg1 didSelectEntryDescriptorAtIndexPath:(id)arg2 ;
-(void)indexBarControlControllerDidSelectBeyondBottom:(id)arg1 ;
-(void)indexBarControlControllerDidSelectBeyondTop:(id)arg1 ;
-(void)indexBarEntryListControllerDidInvalidate:(id)arg1 ;
-(void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithTemplateElement:(id)arg1 layoutStyle:(long long)arg2 ;
-(SKUIStorePageSectionsViewController *)sectionsViewController;
@end

