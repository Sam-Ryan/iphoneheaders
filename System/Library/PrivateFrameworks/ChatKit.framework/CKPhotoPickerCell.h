/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <libobjc.A.dylib/PHLivePhotoViewDelegate.h>

@protocol CKPhotoPickerCellDelegate;
@class UIImageView, PLRoundProgressView, PHLivePhotoView, CKPhotoTileBadgeView, NSString;

@interface CKPhotoPickerCell : UICollectionViewCell <PHLivePhotoViewDelegate> {

	BOOL _isVideo;
	BOOL _isLivePhoto;
	id<CKPhotoPickerCellDelegate> _delegate;
	UIImageView* _imageView;
	PLRoundProgressView* _progressView;
	UIImageView* _videoImageView;
	PHLivePhotoView* _livePhotoView;
	CKPhotoTileBadgeView* _livePhotoBadgeView;

}

@property (assign,nonatomic) id<CKPhotoPickerCellDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) PLRoundProgressView * progressView;                     //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIImageView * videoImageView;                           //@synthesize videoImageView=_videoImageView - In the implementation block
@property (assign,nonatomic) BOOL isVideo;                                           //@synthesize isVideo=_isVideo - In the implementation block
@property (nonatomic,retain) PHLivePhotoView * livePhotoView;                        //@synthesize livePhotoView=_livePhotoView - In the implementation block
@property (assign,nonatomic) BOOL isLivePhoto;                                       //@synthesize isLivePhoto=_isLivePhoto - In the implementation block
@property (nonatomic,retain) CKPhotoTileBadgeView * livePhotoBadgeView;              //@synthesize livePhotoBadgeView=_livePhotoBadgeView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<CKPhotoPickerCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<CKPhotoPickerCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(void)setProgressView:(PLRoundProgressView *)arg1 ;
-(PLRoundProgressView *)progressView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)updateProgress:(double)arg1 ;
-(BOOL)isVideo;
-(void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2 ;
-(void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2 ;
-(PHLivePhotoView *)livePhotoView;
-(void)setLivePhotoView:(PHLivePhotoView *)arg1 ;
-(void)setIsVideo:(BOOL)arg1 ;
-(UIImageView *)videoImageView;
-(CKPhotoTileBadgeView *)livePhotoBadgeView;
-(void)_badgeToggled:(id*)arg1 ;
-(void)setLivePhotoBadgeView:(CKPhotoTileBadgeView *)arg1 ;
-(void)setIsLivePhoto:(BOOL)arg1 ;
-(void)setVideoImageView:(UIImageView *)arg1 ;
-(BOOL)isLivePhoto;
@end

