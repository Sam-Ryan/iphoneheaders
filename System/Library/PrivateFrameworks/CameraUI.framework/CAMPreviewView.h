/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>

@class CAMVideoPreviewView, UIView, CAMFocusIndicatorView, CAMGridView, UILabel, NSMutableDictionary, AVCaptureVideoPreviewLayer, NSDictionary;

@interface CAMPreviewView : UIView {

	int __exposureBiasSide;
	CAMVideoPreviewView* _videoPreviewView;
	UIView* _indicatorContainerView;
	CAMFocusIndicatorView* _continuousIndicator;
	CAMFocusIndicatorView* _pointIndicator;
	CAMGridView* _gridView;
	UILabel* __simulatorLabel;
	NSMutableDictionary* __faceIndicators;

}

@property (nonatomic,readonly) CAMVideoPreviewView * videoPreviewView;                    //@synthesize videoPreviewView=_videoPreviewView - In the implementation block
@property (nonatomic,retain) AVCaptureVideoPreviewLayer * videoPreviewLayer; 
@property (nonatomic,readonly) UIView * indicatorContainerView;                           //@synthesize indicatorContainerView=_indicatorContainerView - In the implementation block
@property (nonatomic,retain) CAMFocusIndicatorView * continuousIndicator;                 //@synthesize continuousIndicator=_continuousIndicator - In the implementation block
@property (nonatomic,retain) CAMFocusIndicatorView * pointIndicator;                      //@synthesize pointIndicator=_pointIndicator - In the implementation block
@property (assign,nonatomic) CAMGridView * gridView;                                      //@synthesize gridView=_gridView - In the implementation block
@property (nonatomic,readonly) NSDictionary * faceIndicatorsByIdentifier; 
@property (nonatomic,readonly) UILabel * _simulatorLabel;                                 //@synthesize _simulatorLabel=__simulatorLabel - In the implementation block
@property (assign,nonatomic) int _exposureBiasSide;                                       //@synthesize _exposureBiasSide=__exposureBiasSide - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _faceIndicators;                     //@synthesize _faceIndicators=__faceIndicators - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CAMVideoPreviewView *)videoPreviewView;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
-(void)setVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(void)setGridView:(CAMGridView *)arg1 ;
-(CAMGridView *)gridView;
-(int)_exposureBiasSide;
-(void)set_exposureBiasSide:(int)arg1 ;
-(CAMFocusIndicatorView *)continuousIndicator;
-(CAMFocusIndicatorView *)pointIndicator;
-(CGPoint)pointForCaptureDevicePointOfInterest:(CGPoint)arg1 ;
-(CGPoint)captureDevicePointOfInterestForPoint:(CGPoint)arg1 ;
-(CGRect)_aspectFaceRectFromSquareFaceRect:(CGRect)arg1 angle:(double)arg2 ;
-(void)setContinuousIndicator:(CAMFocusIndicatorView *)arg1 ;
-(void)setPointIndicator:(CAMFocusIndicatorView *)arg1 ;
-(void)indicatePointOfInterest:(CGPoint)arg1 ;
-(NSDictionary *)faceIndicatorsByIdentifier;
-(void)addFaceIndicator:(id)arg1 forIdentifier:(long long)arg2 ;
-(void)removeFaceIndicatorForIdentifier:(long long)arg1 ;
-(CGRect)frameForFaceResult:(id)arg1 ;
-(UIView *)indicatorContainerView;
-(UILabel *)_simulatorLabel;
-(NSMutableDictionary *)_faceIndicators;
@end

