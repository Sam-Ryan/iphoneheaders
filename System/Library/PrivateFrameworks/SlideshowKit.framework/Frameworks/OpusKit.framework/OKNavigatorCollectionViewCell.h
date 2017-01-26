/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class OKPageViewController;

@interface OKNavigatorCollectionViewCell : UICollectionViewCell {

	OKPageViewController* _pageViewController;

}

@property (nonatomic,retain) OKPageViewController * pageViewController;              //@synthesize pageViewController=_pageViewController - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setPageViewController:(OKPageViewController *)arg1 ;
-(OKPageViewController *)pageViewController;
@end

