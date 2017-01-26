/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXLayoutControllerDataSource, SXLayoutControllerDelegate;
#import <Silex/Silex-Structs.h>
@class SXLayouter, SXLayoutBlueprint, SXColumnVisualizerView, SXDynamicAdController, NSOperationQueue, NSMutableDictionary, NSMutableArray, SXLayoutOperation, SXLayoutDataProvider, NSArray;

@interface SXLayoutController : NSObject {

	BOOL _hasBeenLayout;
	BOOL _partialLayout;
	BOOL _nextLayoutRequestMustBeSynchronous;
	BOOL _invalidationDispatched;
	SXLayouter* _layouter;
	id<SXLayoutControllerDataSource> _dataSource;
	id<SXLayoutControllerDelegate> _delegate;
	SXLayoutBlueprint* _layoutBlueprint;
	SXColumnVisualizerView* _columnVisualizer;
	SXDynamicAdController* _dynamicAdController;
	NSOperationQueue* _layoutOperationQueue;
	NSMutableDictionary* _mappedComponentViews;
	NSMutableArray* _sortedComponentViews;
	NSMutableDictionary* _componentIdentifiersToInvalidate;
	SXLayoutOperation* _lastLayoutOperation;
	SXLayoutDataProvider* _lastLayoutDataProvider;
	CGSize _canvasSizeForLastLayout;

}

@property (nonatomic,readonly) NSArray * componentViews; 
@property (nonatomic,readonly) SXLayouter * layouter;                                             //@synthesize layouter=_layouter - In the implementation block
@property (assign,nonatomic) BOOL hasBeenLayout;                                                  //@synthesize hasBeenLayout=_hasBeenLayout - In the implementation block
@property (nonatomic,__weak,readonly) id<SXLayoutControllerDataSource> dataSource;                //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SXLayoutControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL partialLayout;                                                //@synthesize partialLayout=_partialLayout - In the implementation block
@property (nonatomic,retain) SXLayoutBlueprint * layoutBlueprint;                                 //@synthesize layoutBlueprint=_layoutBlueprint - In the implementation block
@property (assign,nonatomic) CGSize canvasSizeForLastLayout;                                      //@synthesize canvasSizeForLastLayout=_canvasSizeForLastLayout - In the implementation block
@property (nonatomic,readonly) CGSize canvasSize; 
@property (nonatomic,readonly) BOOL nextLayoutRequestMustBeSynchronous;                           //@synthesize nextLayoutRequestMustBeSynchronous=_nextLayoutRequestMustBeSynchronous - In the implementation block
@property (nonatomic,retain) SXColumnVisualizerView * columnVisualizer;                           //@synthesize columnVisualizer=_columnVisualizer - In the implementation block
@property (nonatomic,retain) SXDynamicAdController * dynamicAdController;                         //@synthesize dynamicAdController=_dynamicAdController - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * layoutOperationQueue;                           //@synthesize layoutOperationQueue=_layoutOperationQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mappedComponentViews;                          //@synthesize mappedComponentViews=_mappedComponentViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * sortedComponentViews;                               //@synthesize sortedComponentViews=_sortedComponentViews - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * componentIdentifiersToInvalidate;              //@synthesize componentIdentifiersToInvalidate=_componentIdentifiersToInvalidate - In the implementation block
@property (assign,nonatomic,__weak) SXLayoutOperation * lastLayoutOperation;                      //@synthesize lastLayoutOperation=_lastLayoutOperation - In the implementation block
@property (nonatomic,retain) SXLayoutDataProvider * lastLayoutDataProvider;                       //@synthesize lastLayoutDataProvider=_lastLayoutDataProvider - In the implementation block
@property (assign,nonatomic) BOOL invalidationDispatched;                                         //@synthesize invalidationDispatched=_invalidationDispatched - In the implementation block
-(void)synchronizeNextLayoutRequest;
-(NSArray *)componentViews;
-(void)layoutForCanvasSize:(CGSize)arg1 contentSizeCategory:(id)arg2 andLayoutDataProvider:(id)arg3 ;
-(id)componentViewsForRole:(int)arg1 ;
-(CGSize)canvasSizeForLastLayout;
-(BOOL)hasBeenLayout;
-(id)componentViewForIdentifier:(id)arg1 ;
-(BOOL)partialLayout;
-(void)provideInfosLayoutTo:(id)arg1 ;
-(SXLayoutBlueprint *)layoutBlueprint;
-(CGSize)blueprintSize;
-(id)childComponentViewsForContainerComponent:(id)arg1 ;
-(id)layoutDescription;
-(void)setLayoutBlueprint:(SXLayoutBlueprint *)arg1 ;
-(id)presentComponentBlueprint:(id)arg1 inView:(id)arg2 columnLayout:(id)arg3 ;
-(void)presentLayoutBlueprint:(id)arg1 inView:(id)arg2 ;
-(NSMutableDictionary *)mappedComponentViews;
-(NSMutableArray *)sortedComponentViews;
-(void)presentComponentsInLayoutBlueprint:(id)arg1 ;
-(void)setLastLayoutOperation:(SXLayoutOperation *)arg1 ;
-(void)setLastLayoutDataProvider:(SXLayoutDataProvider *)arg1 ;
-(SXLayoutOperation *)lastLayoutOperation;
-(NSMutableDictionary *)componentIdentifiersToInvalidate;
-(SXDynamicAdController *)dynamicAdController;
-(void)setCanvasSizeForLastLayout:(CGSize)arg1 ;
-(void)setDynamicAdController:(SXDynamicAdController *)arg1 ;
-(void)finalizeLayoutForLayoutOperation:(id)arg1 ;
-(BOOL)nextLayoutRequestMustBeSynchronous;
-(NSOperationQueue *)layoutOperationQueue;
-(void)removeComponentsForLayoutDataProvider:(id)arg1 ;
-(void)setHasBeenLayout:(BOOL)arg1 ;
-(id)componentViewsForRole:(int)arg1 forLayoutBlueprint:(id)arg2 ;
-(id)componentsInRect:(CGRect)arg1 ;
-(void)invalidateLayoutForComponentWithIdentifier:(id)arg1 suggestedSize:(CGSize)arg2 ;
-(void)invalidateLayoutForComponentWithIdentifier:(id)arg1 suggestedSize:(CGSize)arg2 priority:(int)arg3 ;
-(BOOL)invalidationDispatched;
-(void)setInvalidationDispatched:(BOOL)arg1 ;
-(SXLayoutDataProvider *)lastLayoutDataProvider;
-(void)invalidateLayoutForComponentWithIdentifier:(id)arg1 ;
-(BOOL)componentBlueprint:(id)arg1 shouldIntersectWithComponentBlueprint:(id)arg2 ;
-(void)showColumnVisualizer;
-(SXLayouter *)layouter;
-(SXColumnVisualizerView *)columnVisualizer;
-(void)setColumnVisualizer:(SXColumnVisualizerView *)arg1 ;
-(void)setMappedComponentViews:(NSMutableDictionary *)arg1 ;
-(void)setSortedComponentViews:(NSMutableArray *)arg1 ;
-(void)setComponentIdentifiersToInvalidate:(NSMutableDictionary *)arg1 ;
-(void)setDelegate:(id<SXLayoutControllerDelegate>)arg1 ;
-(id<SXLayoutControllerDataSource>)dataSource;
-(id<SXLayoutControllerDelegate>)delegate;
-(id)initWithDataSource:(id)arg1 ;
-(CGSize)canvasSize;
@end
