/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AKController, NSArray;


@protocol MUContentViewControllerProtocol <NSObject>
@property (assign,nonatomic) UIEdgeInsets edgeInsets; 
@property (__weak) AKController * annotationController; 
@property (retain) NSArray * sourceContentReplacedAnnotationIndexes; 
@optional
-(AKController *)annotationController;
-(void)setAnnotationController:(id)arg1;
-(NSArray *)sourceContentReplacedAnnotationIndexes;
-(void)setSourceContentReplacedAnnotationIndexes:(id)arg1;
-(void)setupForController:(id)arg1;

@required
-(UIEdgeInsets)edgeInsets;
-(CGRect*)visibleContentRect;
-(void)setEdgeInsets:(UIEdgeInsets)arg1;
-(id)fileURL;
-(void)setFileURL:(id)arg1;
-(id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
-(CGPoint*)convertPoint:(CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
-(CGPoint*)convertPoint:(CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
-(CGRect*)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
-(id)newContentSnapshotPDFDataIncludingAdornments:(BOOL)arg1 atScale:(double)arg2 inRect:(CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5;
-(double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
-(BOOL)controllerShouldDetectFormElements:(id)arg1;
-(void)controllerDidEnterToolMode:(id)arg1;
-(void)controllerDidExitToolMode:(id)arg1;
-(BOOL)shouldPlaceFormElementAtPoint:(CGPoint)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
-(BOOL)shouldPlaceProposedFormElementAtRect:(CGRect)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
-(id)contentSnapshot;

@end

