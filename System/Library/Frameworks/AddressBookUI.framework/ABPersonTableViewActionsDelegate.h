/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>
#import <libobjc.A.dylib/ABPersonTableActionDelegate.h>
#import <libobjc.A.dylib/ABPersonTableTinyActionDelegate.h>

@protocol ABFMFActionButtonsDelegate;
@class ABPersonTableTinyActionCell, ABStyleProvider, ABPersonTableViewDataSource, ABPersonTableActionDataSource, ABUIPerson, NSString;

@interface ABPersonTableViewActionsDelegate : NSObject <UIActionSheetDelegate, ABPersonTableActionDelegate, ABPersonTableTinyActionDelegate> {

	int _highlightedValueIdentifier;
	BOOL _highlightedValueIsImportant;
	int _actionSheetType;
	ABPersonTableTinyActionCell* _tinyActionCell;
	id<ABFMFActionButtonsDelegate> _FMFActionButtonsDelegate;
	BOOL _actionShouldPickHighlightedValue;
	int _highlightedValueProperty;
	ABStyleProvider* _styleProvider;
	ABPersonTableViewDataSource* _dataSource;
	ABPersonTableActionDataSource* _actionDataSource;
	ABUIPerson* _highlightedValuePerson;

}

@property (assign,nonatomic) id<ABFMFActionButtonsDelegate> FMFActionButtonsDelegate;              //@synthesize FMFActionButtonsDelegate=_FMFActionButtonsDelegate - In the implementation block
@property (nonatomic,retain) ABStyleProvider * styleProvider;                                      //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) ABPersonTableViewDataSource * dataSource;                             //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) ABUIPerson * highlightedValuePerson;                                  //@synthesize highlightedValuePerson=_highlightedValuePerson - In the implementation block
@property (assign,nonatomic) int highlightedValueProperty;                                         //@synthesize highlightedValueProperty=_highlightedValueProperty - In the implementation block
@property (assign,nonatomic) int highlightedValueIdentifier;                                       //@synthesize highlightedValueIdentifier=_highlightedValueIdentifier - In the implementation block
@property (nonatomic,readonly) ABPersonTableTinyActionCell * tinyActionCell; 
@property (assign,nonatomic) BOOL actionShouldPickHighlightedValue;                                //@synthesize actionShouldPickHighlightedValue=_actionShouldPickHighlightedValue - In the implementation block
@property (nonatomic,readonly) ABPersonTableActionDataSource * actionDataSource;                   //@synthesize actionDataSource=_actionDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataSource:(ABPersonTableViewDataSource *)arg1 ;
-(void)dealloc;
-(id)init;
-(ABPersonTableViewDataSource *)dataSource;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)setFMFActionButtonsDelegate:(id<ABFMFActionButtonsDelegate>)arg1 ;
-(void)presentDifferentiationSheetForAction:(id)arg1 ;
-(void)action:(id)arg1 willShowButton:(id)arg2 forValueAtIndex:(long long)arg3 inPropertyGroup:(id)arg4 ;
-(id)actionsForProperty:(int)arg1 withActionGrouping:(long long)arg2 ;
-(id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 detailText:(id)arg3 style:(int)arg4 target:(id)arg5 selector:(SEL)arg6 property:(int)arg7 actionGrouping:(long long)arg8 ordering:(long long)arg9 ;
-(id)newActionsForProperty:(int)arg1 ;
-(long long)groupingCountForProperty:(int)arg1 ;
-(id)actionsForProperty:(int)arg1 withActionGroupingAtIndex:(long long)arg2 ;
-(ABPersonTableActionDataSource *)actionDataSource;
-(BOOL)personTableTinyActionCell:(id)arg1 shouldShowAction:(id)arg2 ;
-(ABUIPerson *)highlightedValuePerson;
-(void)presentDifferentiationSheetIfNeededForAction:(id)arg1 withPropertyGroup:(id)arg2 ;
-(BOOL)hasActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 property:(int)arg4 actionGrouping:(long long)arg5 ordering:(long long)arg6 outActions:(id*)arg7 outIndex:(long long*)arg8 ;
-(void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 property:(int)arg3 actionGrouping:(long long)arg4 ordering:(long long)arg5 animated:(BOOL)arg6 ;
-(unsigned long long)_sectionForAction:(id)arg1 ;
-(void)reloadBottomActionCellAnimated:(BOOL)arg1 ;
-(long long)actionCountForBottomGroupingExcludingProperty:(int)arg1 excludedPropertyGroupContext:(void*)arg2 ;
-(BOOL)shouldShowActionForProperty:(int)arg1 propertyGroupContext:(void*)arg2 assumeThatPropertyHasSection:(BOOL)arg3 ;
-(BOOL)shouldShowActionForProperty:(int)arg1 propertyGroupContext:(void*)arg2 ;
-(BOOL)shouldShowAction:(id)arg1 excludingProperty:(int)arg2 excludedPropertyGroupContext:(void*)arg3 ;
-(long long)actionCountForGrouping:(long long)arg1 inSection:(long long)arg2 excludingProperty:(int)arg3 excludedPropertyGroupContext:(void*)arg4 outExcludedIndexPaths:(id*)arg5 ;
-(long long)actionGroupingCountForPropertyGroup:(id)arg1 whenEditing:(BOOL)arg2 assumeThatPropertyHasSection:(BOOL)arg3 ;
-(BOOL)isFavoriteOfType:(int)arg1 inPropertyGroup:(id)arg2 atIndex:(long long)arg3 ;
-(ABPersonTableTinyActionCell *)tinyActionCell;
-(BOOL)shouldShowAddToFavoritesAction;
-(void)addToFavoritesButtonClicked:(id)arg1 ;
-(void)sendTextMessage:(id)arg1 person:(id)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)shareContactButtonClicked:(id)arg1 ;
-(void)conference:(id)arg1 person:(id)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)callContact:(id)arg1 person:(id)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)reloadBottomActionDataForFavorites:(BOOL)arg1 texting:(BOOL)arg2 sharing:(BOOL)arg3 conferencing:(BOOL)arg4 ;
-(void)reloadBottomActionsAnimated:(BOOL)arg1 favorites:(BOOL)arg2 texting:(BOOL)arg3 sharing:(BOOL)arg4 conferencing:(BOOL)arg5 ;
-(void)reloadBottomActionsAnimated:(BOOL)arg1 ;
-(void)tellDelegateAddToFavoriteWasSelectedForPropertyAtIndex:(long long)arg1 inPropertyGroup:(id)arg2 entryType:(int)arg3 ;
-(void)performPersonTableAction:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)hasActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 property:(int)arg4 actionGrouping:(long long)arg5 ordering:(long long)arg6 ;
-(id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 property:(int)arg5 actionGrouping:(long long)arg6 ordering:(long long)arg7 ;
-(id)addActionWithTitle:(id)arg1 content:(id)arg2 target:(id)arg3 selector:(SEL)arg4 property:(int)arg5 actionGrouping:(long long)arg6 ordering:(long long)arg7 ;
-(void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 property:(int)arg3 actionGrouping:(long long)arg4 ordering:(long long)arg5 ;
-(long long)actionCountForTopGroupingInSection:(long long)arg1 excludingProperty:(int)arg2 excludedPropertyGroupContext:(void*)arg3 outExcludedIndexPaths:(id*)arg4 ;
-(long long)actionGroupingCountForPropertyGroup:(id)arg1 whenEditing:(BOOL)arg2 ;
-(void)reloadBottomActions;
-(void)reloadPrimaryPropertyActionsSection;
-(BOOL)actionShouldPickHighlightedValue;
-(void)setActionShouldPickHighlightedValue:(BOOL)arg1 ;
-(id<ABFMFActionButtonsDelegate>)FMFActionButtonsDelegate;
-(void)setHighlightedValuePerson:(ABUIPerson *)arg1 ;
-(int)highlightedValueProperty;
-(void)setHighlightedValueProperty:(int)arg1 ;
-(int)highlightedValueIdentifier;
-(void)setHighlightedValueIdentifier:(int)arg1 ;
-(ABStyleProvider *)styleProvider;
-(void)setStyleProvider:(ABStyleProvider *)arg1 ;
@end

