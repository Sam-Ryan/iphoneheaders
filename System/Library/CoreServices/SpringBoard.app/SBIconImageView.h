/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:23 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBIconObserver.h>
#import <SpringBoard/SBIconProgressViewDelegate.h>
#import <SpringBoard/SBReusableView.h>

@class SBIcon, UIImageView, SBIconProgressView, UIImage, NSString;

@interface SBIconImageView : UIView <SBIconObserver, SBIconProgressViewDelegate, SBReusableView> {

	SBIcon* _icon;
	double _brightness;
	int _location;
	UIImageView* _overlayView;
	SBIconProgressView* _progressView;
	BOOL _isPaused;
	UIImage* _cachedSquareContentsImage;
	BOOL _showsSquareCorners;
	double _overlayAlpha;

}

@property (nonatomic,readonly) SBIcon * icon;                       //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) double brightness;                     //@synthesize brightness=_brightness - In the implementation block
@property (assign,nonatomic) double overlayAlpha;                   //@synthesize overlayAlpha=_overlayAlpha - In the implementation block
@property (assign,nonatomic) BOOL showsSquareCorners;               //@synthesize showsSquareCorners=_showsSquareCorners - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewMap;
+(unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2 ;
+(id)windowForRecycledViewsInViewMap:(id)arg1 ;
+(void)recycleIconImageView:(id)arg1 ;
+(id)dequeueRecycledIconImageViewOfClass:(Class)arg1 ;
+(double)cornerRadius;
-(void)setOverlayAlpha:(double)arg1 ;
-(double)overlayAlpha;
-(void)setShowsSquareCorners:(BOOL)arg1 ;
-(void)iconImageDidUpdate:(id)arg1 ;
-(void)updateImageAnimated:(BOOL)arg1 ;
-(void)setIcon:(id)arg1 location:(int)arg2 animated:(BOOL)arg3 ;
-(id)_generateSquareContentsImage;
-(id)darkeningOverlayImage;
-(void)setProgressAlpha:(double)arg1 ;
-(void)setProgressState:(long long)arg1 paused:(BOOL)arg2 percent:(double)arg3 animated:(BOOL)arg4 ;
-(void)_didReceiveLowMemoryWarning:(id)arg1 ;
-(void)_clearCachedImages;
-(void)_updateOverlayImage;
-(void)_updateOverlayAlpha;
-(void)_updateProgressMask;
-(void)_clearProgressView;
-(id)squareContentsImage;
-(id)squareDarkeningOverlayImage;
-(id)_currentOverlayImage;
-(id)_iconBasicOverlayImage;
-(id)_iconSquareOverlayImage;
-(id)_generateIconBasicOverlayImageForFormat:(int)arg1 ;
-(id)_generateIconSquareOverlayImageForFormat:(int)arg1 ;
-(BOOL)showsSquareCorners;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)snapshot;
-(CGRect)visibleBounds;
-(void)prepareForReuse;
-(id)contentsImage;
-(void)setPaused:(BOOL)arg1 ;
-(void)setBrightness:(double)arg1 ;
-(double)brightness;
-(SBIcon *)icon;
-(void)progressViewCanBeRemoved:(id)arg1 ;
@end

