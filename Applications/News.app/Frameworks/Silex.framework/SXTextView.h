/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKit/UIView.h>
#import <Silex/SXTextTangierRepAccessibilityDataSource.h>
#import <Silex/TSDRepDirectLayerHosting.h>
#import <Silex/SXTextCanvasRenderSource.h>

@protocol SXTextViewDelegate, SXTextTangierRepAccessibilityElement;
@class SXTextLayouter, SXTextSource, SXTextTangierContainerInfo, TSDLayoutController, CALayer, TSDCanvas, TSDRep, NSString;

@interface SXTextView : UIView <SXTextTangierRepAccessibilityDataSource, TSDRepDirectLayerHosting, SXTextCanvasRenderSource> {

	BOOL _isSelectable;
	BOOL _shouldHyphenate;
	SXTextLayouter* _textLayouter;
	id<SXTextViewDelegate> _delegate;
	SXTextSource* _textSource;
	SXTextTangierContainerInfo* _textInfo;
	TSDLayoutController* _layoutController;
	CALayer* _repContainerLayer;
	CALayer* _overlayContainerLayer;
	TSDCanvas* _canvas;
	TSDRep*<SXTextTangierRepAccessibilityElement> _rep;
	CGRect _parentFrame;

}

@property (nonatomic,retain) SXTextLayouter * textLayouter;                                         //@synthesize textLayouter=_textLayouter - In the implementation block
@property (assign,nonatomic,__weak) id<SXTextViewDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SXTextSource * textSource;                                           //@synthesize textSource=_textSource - In the implementation block
@property (assign,nonatomic) CGRect parentFrame;                                                    //@synthesize parentFrame=_parentFrame - In the implementation block
@property (assign,nonatomic) BOOL isSelectable;                                                     //@synthesize isSelectable=_isSelectable - In the implementation block
@property (assign,nonatomic) BOOL shouldHyphenate;                                                  //@synthesize shouldHyphenate=_shouldHyphenate - In the implementation block
@property (nonatomic,readonly) SXTextTangierContainerInfo * textInfo;                               //@synthesize textInfo=_textInfo - In the implementation block
@property (nonatomic,readonly) TSDLayoutController * layoutController;                              //@synthesize layoutController=_layoutController - In the implementation block
@property (nonatomic,retain) CALayer * repContainerLayer;                                           //@synthesize repContainerLayer=_repContainerLayer - In the implementation block
@property (nonatomic,retain) CALayer * overlayContainerLayer;                                       //@synthesize overlayContainerLayer=_overlayContainerLayer - In the implementation block
@property (assign,nonatomic,__weak) TSDCanvas * canvas;                                             //@synthesize canvas=_canvas - In the implementation block
@property (assign,nonatomic,__weak) TSDRep*<SXTextTangierRepAccessibilityElement> rep;              //@synthesize rep=_rep - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)frameForTextRange:(NSRange)arg1 ;
-(void)provideInfosLayoutTo:(id)arg1 ;
-(id)snapLines;
-(SXTextSource *)textSource;
-(void)setShouldHyphenate:(BOOL)arg1 ;
-(SXTextTangierContainerInfo *)textInfo;
-(void)setParentFrame:(CGRect)arg1 ;
-(void)setTextLayouter:(SXTextLayouter *)arg1 ;
-(SXTextLayouter *)textLayouter;
-(id)accessibilityCustomRotorMembershipForRep:(id)arg1 ;
-(BOOL)accessibilityRepIsSelectable:(id)arg1 ;
-(void)_updateOverlayTransform;
-(void)setRepContainerLayer:(CALayer *)arg1 ;
-(CALayer *)overlayContainerLayer;
-(void)setOverlayContainerLayer:(CALayer *)arg1 ;
-(TSDLayoutController *)layoutController;
-(void)directLayerhostUpdateTopLevelTilingLayers:(id)arg1 forRep:(id)arg2 ;
-(void)directLayerHostUpdateWithContainerLayer:(id)arg1 forRep:(id)arg2 ;
-(void)directLayerHostUpdateOverlayLayers:(id)arg1 forRep:(id)arg2 ;
-(void)directLayerHostRemoveIfMatchingContainerLayer:(id)arg1 forRep:(id)arg2 ;
-(CALayer *)repContainerLayer;
-(id)infoGeometry;
-(TSDRep*<SXTextTangierRepAccessibilityElement>)rep;
-(void)setRep:(TSDRep*<SXTextTangierRepAccessibilityElement>)arg1 ;
-(BOOL)shouldHyphenate;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SXTextViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setNeedsLayout;
-(id<SXTextViewDelegate>)delegate;
-(void)invalidate;
-(void)setCanvas:(TSDCanvas *)arg1 ;
-(id)accessibilityLabel;
-(TSDCanvas *)canvas;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityElements;
-(BOOL)isSelectable;
-(void)setIsSelectable:(BOOL)arg1 ;
-(CGRect)parentFrame;
@end

