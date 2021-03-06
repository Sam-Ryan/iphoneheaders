/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class MKMapView, UITapGestureRecognizer, NSArray, UIBarButtonItem, UIViewController, UISegmentedControl, NSMutableDictionary, SXMapSnapShotter, UIImageView, SXMediaExposureEvent, SXMediaEngageEvent, NSString;

@interface SXMapComponentView : SXComponentView <UIGestureRecognizerDelegate, MKMapViewDelegate> {

	MKMapView* _mapView;
	UITapGestureRecognizer* _tapGesture;
	NSArray* _annotations;
	UIBarButtonItem* _doneBarButtonItem;
	UIViewController* _fullScreenCanvasViewController;
	UISegmentedControl* _segmentedControl;
	NSArray* _toolbarItems;
	NSMutableDictionary* _cachedSnapshots;
	SXMapSnapShotter* _snapShotter;
	UIImageView* _imageView;
	/*^block*/id _snapShotCancelHandler;
	SXMediaExposureEvent* _activeExposureEvent;
	SXMediaEngageEvent* _activeMediaEngageEvent;
	CGSize _snapShotViewportSize;
	CGSize _snapShotSize;
	SCD_Struct_SX12 _mapRect;

}

@property (nonatomic,retain) MKMapView * mapView;                                            //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGesture;                            //@synthesize tapGesture=_tapGesture - In the implementation block
@property (nonatomic,retain) NSArray * annotations;                                          //@synthesize annotations=_annotations - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneBarButtonItem;                            //@synthesize doneBarButtonItem=_doneBarButtonItem - In the implementation block
@property (nonatomic,retain) UIViewController * fullScreenCanvasViewController;              //@synthesize fullScreenCanvasViewController=_fullScreenCanvasViewController - In the implementation block
@property (nonatomic,retain) UISegmentedControl * segmentedControl;                          //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,retain) NSArray * toolbarItems;                                         //@synthesize toolbarItems=_toolbarItems - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedSnapshots;                          //@synthesize cachedSnapshots=_cachedSnapshots - In the implementation block
@property (nonatomic,retain) SXMapSnapShotter * snapShotter;                                 //@synthesize snapShotter=_snapShotter - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                        //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) id snapShotCancelHandler;                                         //@synthesize snapShotCancelHandler=_snapShotCancelHandler - In the implementation block
@property (assign,nonatomic) CGSize snapShotViewportSize;                                    //@synthesize snapShotViewportSize=_snapShotViewportSize - In the implementation block
@property (assign,nonatomic) CGSize snapShotSize;                                            //@synthesize snapShotSize=_snapShotSize - In the implementation block
@property (assign,nonatomic) SCD_Struct_SX12 mapRect;                                        //@synthesize mapRect=_mapRect - In the implementation block
@property (nonatomic,retain) SXMediaExposureEvent * activeExposureEvent;                     //@synthesize activeExposureEvent=_activeExposureEvent - In the implementation block
@property (nonatomic,retain) SXMediaEngageEvent * activeMediaEngageEvent;                    //@synthesize activeMediaEngageEvent=_activeMediaEngageEvent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)renderContents;
-(id)initWithComponent:(id)arg1 componentLayout:(id)arg2 context:(id)arg3 ;
-(void)presentComponent;
-(void)finishMediaExposureEvent;
-(void)createMediaExposureEventIfLoadedAndVisible;
-(void)visibilityStateDidChangeFromState:(long long)arg1 ;
-(SXMediaExposureEvent *)activeExposureEvent;
-(void)setActiveExposureEvent:(SXMediaExposureEvent *)arg1 ;
-(void)submitMediaEngageCompleteEvent;
-(void)finishMediaEngageEvent;
-(NSMutableDictionary *)cachedSnapshots;
-(BOOL)shouldCreateSnapShot;
-(void)cancelSnapShot;
-(void)createSnapShot;
-(void)setSnapShotViewportSize:(CGSize)arg1 ;
-(void)setSnapShotSize:(CGSize)arg1 ;
-(CGSize)snapShotViewportSize;
-(CGSize)snapShotSize;
-(SXMapSnapShotter *)snapShotter;
-(void)setSnapShotCancelHandler:(id)arg1 ;
-(id)snapShotCancelHandler;
-(void)configureMapView;
-(UIViewController *)fullScreenCanvasViewController;
-(void)setupNavigationBar;
-(void)enableMapViewInteraction:(BOOL)arg1 ;
-(void)createMediaEngageEvent;
-(void)setFullScreenCanvasViewController:(UIViewController *)arg1 ;
-(id)mapTitle;
-(BOOL)isPresentingFullscreen;
-(BOOL)hasSelectedAnnotations;
-(BOOL)areBarsHidden;
-(void)presentFullScreen;
-(void)dismissFullScreen;
-(void)handleDoneTap:(id)arg1 ;
-(void)setDoneBarButtonItem:(UIBarButtonItem *)arg1 ;
-(unsigned long long)segmentIndexForMapType:(unsigned long long)arg1 ;
-(unsigned long long)mapTypeForSegmentIndex:(unsigned long long)arg1 ;
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(SXMediaEngageEvent *)activeMediaEngageEvent;
-(void)setActiveMediaEngageEvent:(SXMediaEngageEvent *)arg1 ;
-(BOOL)isUserInteractingWithMap;
-(UITapGestureRecognizer *)tapGesture;
-(void)setCachedSnapshots:(NSMutableDictionary *)arg1 ;
-(void)setSnapShotter:(SXMapSnapShotter *)arg1 ;
-(void)dealloc;
-(void)willMoveToWindow:(id)arg1 ;
-(NSArray *)toolbarItems;
-(void)setToolbarItems:(NSArray *)arg1 ;
-(UIImageView *)imageView;
-(UISegmentedControl *)segmentedControl;
-(void)handleTap:(id)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(SCD_Struct_SX12)region;
-(void)setupToolbar;
-(void)setMapRect:(SCD_Struct_SX12)arg1 ;
-(UIBarButtonItem *)doneBarButtonItem;
-(void)memoryWarning:(id)arg1 ;
-(SCD_Struct_SX12)mapRect;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
-(NSArray *)annotations;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(void)discardContents;
-(void)mapTypeChanged:(id)arg1 ;
-(void)setAnnotations:(NSArray *)arg1 ;
@end

