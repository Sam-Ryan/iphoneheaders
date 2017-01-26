/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/_UIDocumentPickerDocumentTableCell.h>
@class _UIDocumentPickerDocumentTableViewController, _UIDocumentPickerContainerItem;


@protocol _UIDocumentPickerDocumentTableCell <NSObject>
@property (assign,nonatomic,__weak) _UIDocumentPickerDocumentTableViewController * tableView; 
@property (nonatomic,retain) _UIDocumentPickerContainerItem * item; 
@required
+(CGSize*)thumbnailSize;
-(_UIDocumentPickerContainerItem *)item;
-(_UIDocumentPickerDocumentTableViewController *)tableView;
-(void)setTableView:(id)arg1;
-(void)setItem:(id)arg1;
-(void)reloadItem:(BOOL)arg1;

@end


@class _UIDocumentPickerDocumentTableViewController, _UIDocumentPickerContainerItem, UIImageView, UILabel, SKUIItemOfferButton, NSTimer, UIView, NSLayoutConstraint, NSString;

@interface _UIDocumentPickerDocumentTableCell : UITableViewCell <_UIDocumentPickerDocumentTableCell> {

	_UIDocumentPickerContainerItem* _item;
	BOOL _renamePending;
	_UIDocumentPickerDocumentTableViewController* _tableView;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	SKUIItemOfferButton* _cloudButton;
	NSTimer* _progressTimer;
	id _progressSubscriber;
	UIView* _iconCenteringView;
	UIImageView* _tagView;
	NSLayoutConstraint* _tagViewCollapsingConstraint;

}

@property (nonatomic,retain) UIImageView * iconView;                                                       //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) SKUIItemOfferButton * cloudButton;                                            //@synthesize cloudButton=_cloudButton - In the implementation block
@property (nonatomic,retain) NSTimer * progressTimer;                                                      //@synthesize progressTimer=_progressTimer - In the implementation block
@property (nonatomic,retain) id progressSubscriber;                                                        //@synthesize progressSubscriber=_progressSubscriber - In the implementation block
@property (nonatomic,retain) UIView * iconCenteringView;                                                   //@synthesize iconCenteringView=_iconCenteringView - In the implementation block
@property (nonatomic,retain) UIImageView * tagView;                                                        //@synthesize tagView=_tagView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * tagViewCollapsingConstraint;                             //@synthesize tagViewCollapsingConstraint=_tagViewCollapsingConstraint - In the implementation block
@property (assign,nonatomic) BOOL renamePending;                                                           //@synthesize renamePending=_renamePending - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) _UIDocumentPickerDocumentTableViewController * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerContainerItem * item; 
+(CGSize)thumbnailSize;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(_UIDocumentPickerContainerItem *)item;
-(UILabel *)titleLabel;
-(_UIDocumentPickerDocumentTableViewController *)tableView;
-(void)setTableView:(_UIDocumentPickerDocumentTableViewController *)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(UILabel *)subtitleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTagView:(UIImageView *)arg1 ;
-(UIImageView *)tagView;
-(void)setItem:(_UIDocumentPickerContainerItem *)arg1 ;
-(void)reloadItem:(BOOL)arg1 ;
-(UIImageView *)iconView;
-(void)setTagViewCollapsingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)tagViewCollapsingConstraint;
-(id)progressSubscriber;
-(void)setProgressTimer:(NSTimer *)arg1 ;
-(void)setCloudButton:(SKUIItemOfferButton *)arg1 ;
-(void)setProgressSubscriber:(id)arg1 ;
-(SKUIItemOfferButton *)cloudButton;
-(void)updateForDownloadStatus;
-(void)updateForEditingStatus;
-(void)updateProgress:(id)arg1 ;
-(void)startDownload:(id)arg1 ;
-(void)setIconView:(UIImageView *)arg1 ;
-(NSTimer *)progressTimer;
-(UIView *)iconCenteringView;
-(void)setIconCenteringView:(UIView *)arg1 ;
-(BOOL)renamePending;
-(void)setRenamePending:(BOOL)arg1 ;
@end

