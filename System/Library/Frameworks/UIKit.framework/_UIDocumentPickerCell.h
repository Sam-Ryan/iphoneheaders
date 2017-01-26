/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIImageView, UIProgressView, UIView, _UIDocumentPickerDocumentCollectionViewController, _UIDocumentPickerContainerItem, NSLayoutConstraint, UILongPressGestureRecognizer;

@interface _UIDocumentPickerCell : UICollectionViewCell {

	BOOL _editing;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _subtitle2Label;
	UIImageView* _tagView;
	UIImageView* _thumbnailView;
	UIProgressView* _progressView;
	UIView* _thumbnailCenterView;
	_UIDocumentPickerDocumentCollectionViewController* _collectionView;
	_UIDocumentPickerContainerItem* _item;
	NSLayoutConstraint* _thumbnailCenterWidthConstraint;
	NSLayoutConstraint* _thumbnailCenterHeightConstraint;
	UIImageView* _selectionView;
	UIView* _titleCenterView;
	UILongPressGestureRecognizer* _pickableDiagnosticGestureRecognizer;
	UILongPressGestureRecognizer* _actionGestureRecognizer;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitle2Label;                                                               //@synthesize subtitle2Label=_subtitle2Label - In the implementation block
@property (nonatomic,retain) UIImageView * tagView;                                                                  //@synthesize tagView=_tagView - In the implementation block
@property (nonatomic,retain) UIImageView * thumbnailView;                                                            //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                                          //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIView * thumbnailCenterView;                                                           //@synthesize thumbnailCenterView=_thumbnailCenterView - In the implementation block
@property (assign,nonatomic,__weak) _UIDocumentPickerDocumentCollectionViewController * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerContainerItem * item;                                                  //@synthesize item=_item - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                                          //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * thumbnailCenterWidthConstraint;                                    //@synthesize thumbnailCenterWidthConstraint=_thumbnailCenterWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * thumbnailCenterHeightConstraint;                                   //@synthesize thumbnailCenterHeightConstraint=_thumbnailCenterHeightConstraint - In the implementation block
@property (nonatomic,retain) UIImageView * selectionView;                                                            //@synthesize selectionView=_selectionView - In the implementation block
@property (nonatomic,retain) UIView * titleCenterView;                                                               //@synthesize titleCenterView=_titleCenterView - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * pickableDiagnosticGestureRecognizer;                     //@synthesize pickableDiagnosticGestureRecognizer=_pickableDiagnosticGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * actionGestureRecognizer;                                 //@synthesize actionGestureRecognizer=_actionGestureRecognizer - In the implementation block
+(CGSize)defaultSizeForTraits:(id)arg1 ;
+(CGSize)thumbnailSizeForTraits:(id)arg1 ;
+(id)folderIconForTraits:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(_UIDocumentPickerContainerItem *)item;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)setHighlighted:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(_UIDocumentPickerDocumentCollectionViewController *)collectionView;
-(UIImageView *)selectionView;
-(UILabel *)subtitleLabel;
-(void)_showPickableDiagnostic;
-(void)setPickableDiagnosticGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)pickableDiagnosticGestureRecognizer;
-(void)setTitleCenterView:(UIView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setSubtitle2Label:(UILabel *)arg1 ;
-(UILabel *)subtitle2Label;
-(void)setThumbnailCenterView:(UIView *)arg1 ;
-(void)setThumbnailView:(UIImageView *)arg1 ;
-(void)setTagView:(UIImageView *)arg1 ;
-(UIImageView *)thumbnailView;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(UIView *)thumbnailCenterView;
-(UIImageView *)tagView;
-(UIView *)titleCenterView;
-(void)setThumbnailCenterHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setThumbnailCenterWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)thumbnailCenterHeightConstraint;
-(NSLayoutConstraint *)thumbnailCenterWidthConstraint;
-(void)setCollectionView:(_UIDocumentPickerDocumentCollectionViewController *)arg1 ;
-(void)setItem:(_UIDocumentPickerContainerItem *)arg1 ;
-(void)_updateSelectionState:(BOOL)arg1 ;
-(void)updateForEditingState;
-(void)updateActionGestureRecognizer;
-(void)reloadItem:(BOOL)arg1 ;
-(void)_deleteAction:(id)arg1 ;
-(void)_renameAction:(id)arg1 ;
-(void)_infoAction:(id)arg1 ;
-(void)_moreAction:(id)arg1 ;
-(UILongPressGestureRecognizer *)actionGestureRecognizer;
-(void)setActionGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(id)availableActions;
-(void)_showActions;
-(void)setSelectionView:(UIImageView *)arg1 ;
@end

