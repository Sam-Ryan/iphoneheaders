/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MarkupUI/MarkupUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MUPDFViewDelegate.h>
#import <libobjc.A.dylib/MUPDFViewPrivateDelegate.h>
#import <UIKit/UIDocumentPasswordViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol MUPDFViewControllerDelegate;
@class MUPDFPageLabelView, UIDocumentPasswordView, MUPDFNumberFormatter, MUPDFView, UIAlertController, UIPDFDocument, UIScrollView, NSObject, UIColor, MUPDFViewPlaceholder, NSString, UIView;

@interface MUPDFViewController : UIViewController <MUPDFViewDelegate, MUPDFViewPrivateDelegate, UIDocumentPasswordViewDelegate, UIScrollViewDelegate> {

	double _initialZoomScale;
	MUPDFPageLabelView* _pageLabelView;
	UIDocumentPasswordView* _passwordEntryView;
	MUPDFNumberFormatter* _labelViewFormatter;
	MUPDFView* _pdfView;
	CGRect _rectOfInterest;
	BOOL _rectOfInterestConsidersHeight;
	BOOL _shouldLoadDocAfterViewDidLoad;
	UIAlertController* _currentAlert;
	BOOL _scalesPageToFit;
	BOOL _showPageLabels;
	BOOL _hideActivityIndicatorForUnRenderedContent;
	BOOL _hidePageViewsUntilReadyToRender;
	UIPDFDocument* _document;
	UIScrollView* _scrollView;
	NSObject*<MUPDFViewControllerDelegate> _delegate;
	UIColor* _backgroundColorForUnRenderedContent;
	unsigned long long _currentPageIndex;
	UIPDFDocument* _pdfDocument;
	CGPDFDocumentRef _pdfDocumentRef;
	MUPDFViewPlaceholder* _pdfPlaceholder;
	UIEdgeInsets _additionalEdgeInsets;

}

@property (nonatomic,readonly) UIPDFDocument * document;                                          //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) NSString * documentPassword; 
@property (nonatomic,retain) UIScrollView * scrollView;                                           //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets additionalEdgeInsets;                                   //@synthesize additionalEdgeInsets=_additionalEdgeInsets - In the implementation block
@property (nonatomic,retain) UIView * pdfView;                                                    //@synthesize pdfView=_pdfView - In the implementation block
@property (nonatomic,readonly) UIView * frontView; 
@property (assign,nonatomic) BOOL scalesPageToFit;                                                //@synthesize scalesPageToFit=_scalesPageToFit - In the implementation block
@property (nonatomic,readonly) double zoomToFitZoomFactor; 
@property (assign,nonatomic) BOOL showPageLabels;                                                 //@synthesize showPageLabels=_showPageLabels - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<MUPDFViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorForUnRenderedContent;                       //@synthesize backgroundColorForUnRenderedContent=_backgroundColorForUnRenderedContent - In the implementation block
@property (assign,nonatomic) BOOL hideActivityIndicatorForUnRenderedContent;                      //@synthesize hideActivityIndicatorForUnRenderedContent=_hideActivityIndicatorForUnRenderedContent - In the implementation block
@property (assign,nonatomic) BOOL hidePageViewsUntilReadyToRender;                                //@synthesize hidePageViewsUntilReadyToRender=_hidePageViewsUntilReadyToRender - In the implementation block
@property (nonatomic,readonly) unsigned long long pageCount; 
@property (assign,nonatomic) unsigned long long currentPageIndex;                                 //@synthesize currentPageIndex=_currentPageIndex - In the implementation block
@property (retain) UIPDFDocument * pdfDocument;                                                   //@synthesize pdfDocument=_pdfDocument - In the implementation block
@property (assign) CGPDFDocumentRef pdfDocumentRef;                                               //@synthesize pdfDocumentRef=_pdfDocumentRef - In the implementation block
@property (nonatomic,retain) MUPDFViewPlaceholder * pdfPlaceholder;                               //@synthesize pdfPlaceholder=_pdfPlaceholder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(NSObject*<MUPDFViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(NSObject*<MUPDFViewControllerDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_commonInit;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(unsigned long long)pageCount;
-(BOOL)scalesPageToFit;
-(UIView *)pdfView;
-(void)updateViewSettings;
-(void)setScalesPageToFit:(BOOL)arg1 ;
-(void)setShowPageLabels:(BOOL)arg1 ;
-(void)_keyboardDidShow:(id)arg1 ;
-(UIPDFDocument *)document;
-(SCD_Struct_MU13)scalesForContainerSize:(CGSize)arg1 ;
-(UIView *)frontView;
-(void)didScroll:(id)arg1 ;
-(void)setBackgroundColorForUnRenderedContent:(UIColor *)arg1 ;
-(id)viewAtIndex:(long long)arg1 ;
-(void)ensureCorrectPagesAreInstalled:(BOOL)arg1 ;
-(id)passwordForPDFView:(id)arg1 ;
-(NSString *)documentPassword;
-(void)didDetermineDocumentBounds:(id)arg1 ;
-(void)pdfView:(id)arg1 zoomToRect:(CGRect)arg2 forPoint:(CGPoint)arg3 considerHeight:(BOOL)arg4 ;
-(void)resetZoom:(id)arg1 ;
-(void)pageWasRendered:(id)arg1 ;
-(BOOL)hidePageViewsUntilReadyToRender;
-(void)setHidePageViewsUntilReadyToRender:(BOOL)arg1 ;
-(UIColor *)backgroundColorForUnRenderedContent;
-(BOOL)hideActivityIndicatorForUnRenderedContent;
-(void)setHideActivityIndicatorForUnRenderedContent:(BOOL)arg1 ;
-(void)clearPageLabel;
-(void)clearAllViews;
-(CGRect)_rectForPdfView:(CGRect)arg1 ;
-(id)_scroller:(id)arg1 ;
-(id)_getPDFDocumentViewForWebView:(id)arg1 ;
-(CGRect)_rectForPasswordView:(id)arg1 ;
-(void)_createPDFViewIfNeeded:(id)arg1 ;
-(void)_ensurePDFViewInHierarchyForWebDocView:(id)arg1 ;
-(unsigned long long)_verticalEdgeForContentOffsetInScrollView:(id)arg1 ;
-(double)_pinValueForVerticalEdge:(unsigned long long)arg1 inScrollView:(id)arg2 ;
-(void)_adjustZoomScalesForScrollViewInternal:(id)arg1 ;
-(void)_showPasswordErrorAlert;
-(void)_adjustContentOffsetForKeyboardIfNeeded;
-(void)adjustZoomScalesForScrollView;
-(CGRect)_frameForDocumentBounds:(CGRect)arg1 ;
-(void)_postdidDetermineDocumentBounds;
-(void)_showPasswordEntryViewForFile:(id)arg1 ;
-(void)updatePageNumberLabelWithUserScrolling:(BOOL)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)currentPageIndex;
-(void)setCurrentPageIndex:(unsigned long long)arg1 ;
-(id)_getLabelViewFormatter;
-(id)createPageLabel;
-(void)scrollToPageNumber:(long long)arg1 animate:(BOOL)arg2 ;
-(void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2 ;
-(void)didBeginEditingPassword:(id)arg1 inView:(id)arg2 ;
-(void)didEndEditingPassword:(id)arg1 inView:(id)arg2 ;
-(BOOL)showPageLabels;
-(UIPDFDocument *)pdfDocument;
-(void)_pdfView:(id)arg1 willAddPage:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_pdfView:(id)arg1 didAddPage:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_pdfView:(id)arg1 willRemovePage:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_pdfView:(id)arg1 didRemovePage:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_setupWithDocument:(CGPDFDocumentRef)arg1 ;
-(void)_updateViewHierarchyForDocumentViewNewLoad:(id)arg1 ;
-(MUPDFViewPlaceholder *)pdfPlaceholder;
-(unsigned long long)_calculateCurrentPageIndex;
-(double)__jetsam_workaround_maximumZoomScale;
-(void)setupWithDocument:(CGPDFDocumentRef)arg1 ;
-(void)setAdditionalEdgeInsets:(UIEdgeInsets)arg1 ;
-(double)zoomToFitZoomFactor;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 toPDFPageSpaceAtIndex:(unsigned long long)arg3 ;
-(CGPoint)convertPoint:(CGPoint)arg1 inPDFPageSpaceAtIndex:(unsigned long long)arg2 toView:(id)arg3 ;
-(id)contentSnapshotPDFDataIncludingAdornments:(BOOL)arg1 atScale:(double)arg2 inRect:(CGRect)arg3 onPageAtIndex:(unsigned long long)arg4 ;
-(void)setPdfView:(UIView *)arg1 ;
-(UIEdgeInsets)additionalEdgeInsets;
-(void)setPdfDocument:(UIPDFDocument *)arg1 ;
-(CGPDFDocumentRef)pdfDocumentRef;
-(void)setPdfDocumentRef:(CGPDFDocumentRef)arg1 ;
-(void)setPdfPlaceholder:(MUPDFViewPlaceholder *)arg1 ;
@end

