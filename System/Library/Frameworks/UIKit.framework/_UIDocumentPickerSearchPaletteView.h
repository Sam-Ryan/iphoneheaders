/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UISearchBarDelegate.h>

@class UISearchController, _UIDocumentPickerSearchContainerModel, _UIDocumentPickerContainerViewController, NSLayoutConstraint, NSString;

@interface _UIDocumentPickerSearchPaletteView : UIView <UISearchBarDelegate> {

	UISearchController* _searchController;
	_UIDocumentPickerSearchContainerModel* _searchModel;
	_UIDocumentPickerContainerViewController* _resultsController;
	NSLayoutConstraint* _searchFieldLeftConstraint;
	NSLayoutConstraint* _searchFieldRightConstraint;

}

@property (nonatomic,retain) UISearchController * searchController;                                     //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerSearchContainerModel * searchModel;                       //@synthesize searchModel=_searchModel - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerContainerViewController * resultsController;              //@synthesize resultsController=_resultsController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * searchFieldLeftConstraint;                            //@synthesize searchFieldLeftConstraint=_searchFieldLeftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * searchFieldRightConstraint;                           //@synthesize searchFieldRightConstraint=_searchFieldRightConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)setServiceViewController:(id)arg1 ;
-(UISearchController *)searchController;
-(void)setSearchController:(UISearchController *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)setSearchModel:(_UIDocumentPickerSearchContainerModel *)arg1 ;
-(_UIDocumentPickerSearchContainerModel *)searchModel;
-(void)setResultsController:(_UIDocumentPickerContainerViewController *)arg1 ;
-(_UIDocumentPickerContainerViewController *)resultsController;
-(void)searchCanceled:(id)arg1 ;
-(NSLayoutConstraint *)searchFieldLeftConstraint;
-(void)setSearchFieldLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)searchFieldRightConstraint;
-(void)setSearchFieldRightConstraint:(NSLayoutConstraint *)arg1 ;
@end

