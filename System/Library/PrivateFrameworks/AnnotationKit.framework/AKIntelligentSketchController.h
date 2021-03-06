/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <libobjc.A.dylib/AKSmoothPathViewDelegate.h>

@class AKSmoothPathView, AKPageModelController, AKController, CHDrawing, CHRecognizer, AKAnnotation, NSMutableArray, NSMutableDictionary, AKCandidatePickerView_iOS, NSString;

@interface AKIntelligentSketchController : NSObject <AKSmoothPathViewDelegate> {

	BOOL _preferDoodle;
	BOOL _shapeDetectionEnabled;
	BOOL _selectNewlyCreatedAnnotations;
	BOOL _pressureSensitiveDoodleMode;
	BOOL _ignoreAnnotationAndSelectionKVO;
	BOOL _isShowingOverlay;
	AKSmoothPathView* _intelligentSketchOverlayView;
	AKPageModelController* _modelControllerToObserveForAnnotationsAndSelections;
	double _veryHighConfidenceLevel;
	AKController* _controller;
	CHDrawing* _lastDrawing;
	CHRecognizer* _shapeRecognizer;
	AKAnnotation* _candidateAnnotation;
	CHDrawing* _candidateDrawing;
	NSMutableArray* _candidateAKTags;
	NSMutableDictionary* _candidateAKTagsToCHElementMap;
	AKCandidatePickerView_iOS* _candidatePickerView;

}

@property (assign,nonatomic) BOOL preferDoodle;                                                                        //@synthesize preferDoodle=_preferDoodle - In the implementation block
@property (assign,getter=shapeDetectionEnabled,nonatomic) BOOL shapeDetectionEnabled;                                  //@synthesize shapeDetectionEnabled=_shapeDetectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL selectNewlyCreatedAnnotations;                                                       //@synthesize selectNewlyCreatedAnnotations=_selectNewlyCreatedAnnotations - In the implementation block
@property (nonatomic,retain) AKSmoothPathView * intelligentSketchOverlayView;                                          //@synthesize intelligentSketchOverlayView=_intelligentSketchOverlayView - In the implementation block
@property (nonatomic,retain) AKPageModelController * modelControllerToObserveForAnnotationsAndSelections;              //@synthesize modelControllerToObserveForAnnotationsAndSelections=_modelControllerToObserveForAnnotationsAndSelections - In the implementation block
@property (assign) BOOL pressureSensitiveDoodleMode;                                                                   //@synthesize pressureSensitiveDoodleMode=_pressureSensitiveDoodleMode - In the implementation block
@property (assign) double veryHighConfidenceLevel;                                                                     //@synthesize veryHighConfidenceLevel=_veryHighConfidenceLevel - In the implementation block
@property (__weak) AKController * controller;                                                                          //@synthesize controller=_controller - In the implementation block
@property (retain) CHDrawing * lastDrawing;                                                                            //@synthesize lastDrawing=_lastDrawing - In the implementation block
@property (nonatomic,retain) CHRecognizer * shapeRecognizer;                                                           //@synthesize shapeRecognizer=_shapeRecognizer - In the implementation block
@property (__weak) AKAnnotation * candidateAnnotation;                                                                 //@synthesize candidateAnnotation=_candidateAnnotation - In the implementation block
@property (retain) CHDrawing * candidateDrawing;                                                                       //@synthesize candidateDrawing=_candidateDrawing - In the implementation block
@property (retain) NSMutableArray * candidateAKTags;                                                                   //@synthesize candidateAKTags=_candidateAKTags - In the implementation block
@property (retain) NSMutableDictionary * candidateAKTagsToCHElementMap;                                                //@synthesize candidateAKTagsToCHElementMap=_candidateAKTagsToCHElementMap - In the implementation block
@property (assign) BOOL ignoreAnnotationAndSelectionKVO;                                                               //@synthesize ignoreAnnotationAndSelectionKVO=_ignoreAnnotationAndSelectionKVO - In the implementation block
@property (assign) BOOL isShowingOverlay;                                                                              //@synthesize isShowingOverlay=_isShowingOverlay - In the implementation block
@property (nonatomic,retain) AKCandidatePickerView_iOS * candidatePickerView;                                          //@synthesize candidatePickerView=_candidatePickerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(AKController *)controller;
-(void)setController:(AKController *)arg1 ;
-(void)updateStrokeAttributes;
-(void)setModelControllerToObserveForAnnotationsAndSelections:(AKPageModelController *)arg1 ;
-(void)setVeryHighConfidenceLevel:(double)arg1 ;
-(void)setSelectNewlyCreatedAnnotations:(BOOL)arg1 ;
-(void)setShapeDetectionEnabled:(BOOL)arg1 ;
-(void)updateOverlayBoundsAndBackingScale:(id)arg1 ;
-(BOOL)isShowingOverlay;
-(void)setIsShowingOverlay:(BOOL)arg1 ;
-(CGRect)_frameForOurOverlayInHostingView:(id)arg1 ;
-(AKSmoothPathView *)intelligentSketchOverlayView;
-(void)enclosingScrollViewNotification:(id)arg1 ;
-(void)_teardownCandidatePicker;
-(void)setIntelligentSketchOverlayView:(AKSmoothPathView *)arg1 ;
-(void)handleForwardedEvent:(id)arg1 ;
-(void)handleTapAction:(id)arg1 ;
-(void)handleDragAction:(id)arg1 ;
-(BOOL)pressureSensitiveDoodleMode;
-(AKCandidatePickerView_iOS *)candidatePickerView;
-(AKAnnotation *)candidateAnnotation;
-(void)setIgnoreAnnotationAndSelectionKVO:(BOOL)arg1 ;
-(CHDrawing *)lastDrawing;
-(void)dismissCandidatePicker;
-(void)_inputView:(id)arg1 didCollectRichBrushStrokePoints:(id)arg2 orPath:(CGPathRef)arg3 ;
-(BOOL)shapeDetectionEnabled;
-(void)setLastDrawing:(CHDrawing *)arg1 ;
-(id)_convertDrawingBoundsInInputView:(CGRect)arg1 outBoundsInPageModel:(CGRect*)arg2 ;
-(id)_createFlippedCHDrawingFromCHDrawing:(id)arg1 withDrawingCenter:(CGPoint)arg2 ;
-(CHRecognizer *)shapeRecognizer;
-(id)_createDoodleShapeResultFromRichBrushStrokePoints:(id)arg1 withDrawingCenter:(CGPoint)arg2 ;
-(id)_createDoodleShapeResultFromCGPath:(CGPathRef)arg1 withDrawingCenter:(CGPoint)arg2 ;
-(BOOL)_isResultVeryHighConfidence:(id)arg1 ;
-(long long)_toolTagForCHRecognitionResult:(id)arg1 ;
-(void)_showCandidatePickerWithTypes:(id)arg1 forDrawingInInputView:(id)arg2 shouldSurfaceDoodle:(BOOL)arg3 ;
-(id)_createAnnotationWithRecognizerResult:(id)arg1 forDrawingBoundsInInputView:(CGRect)arg2 shouldGoToPageController:(id*)arg3 ;
-(BOOL)_shouldSelectCandidate:(id)arg1 ;
-(void)setCandidateAnnotation:(AKAnnotation *)arg1 ;
-(void)setCandidateAKTags:(NSMutableArray *)arg1 ;
-(void)setCandidateAKTagsToCHElementMap:(NSMutableDictionary *)arg1 ;
-(void)setCandidateDrawing:(CHDrawing *)arg1 ;
-(NSMutableArray *)candidateAKTags;
-(NSMutableDictionary *)candidateAKTagsToCHElementMap;
-(BOOL)preferDoodle;
-(void)_presentCandidatePickerBarWithCandidates:(id)arg1 ofDrawing:(id)arg2 ;
-(void)_teardownCandidatePickerBar;
-(BOOL)selectNewlyCreatedAnnotations;
-(double)veryHighConfidenceLevel;
-(id)_convertRichBrushStrokesInInputView:(id)arg1 toPage:(id)arg2 ;
-(void)_pickCandidateResult:(id)arg1 ;
-(void)setCandidatePickerView:(AKCandidatePickerView_iOS *)arg1 ;
-(void)_clearPreviousCandidateAnnotation;
-(CHDrawing *)candidateDrawing;
-(BOOL)ignoreAnnotationAndSelectionKVO;
-(AKPageModelController *)modelControllerToObserveForAnnotationsAndSelections;
-(void)inputViewWillStartDrawing:(id)arg1 ;
-(void)inputView:(id)arg1 didCollectRichBrushStrokePoints:(id)arg2 ;
-(void)inputView:(id)arg1 didCollectPath:(CGPathRef)arg2 ;
-(void)showOverlay;
-(void)removeOverlay;
-(BOOL)isShowingCandidatePicker;
-(void)logLastDrawingToDisk;
-(void)_logAllResults:(id)arg1 ;
-(void)_logCollectedBrushStrokes:(id)arg1 andPath:(CGPathRef)arg2 ;
-(id)_createCHDrawingFromRichBrushStrokes:(id)arg1 ;
-(void)setPreferDoodle:(BOOL)arg1 ;
-(void)setPressureSensitiveDoodleMode:(BOOL)arg1 ;
-(void)setShapeRecognizer:(CHRecognizer *)arg1 ;
-(id)initWithController:(id)arg1 ;
@end

