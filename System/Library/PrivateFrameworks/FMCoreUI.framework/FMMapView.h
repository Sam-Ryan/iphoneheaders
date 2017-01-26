/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCoreUI/FMCoreUI-Structs.h>
#import <UIKit/UIView.h>
#import <FMCoreUI/FMMapGestureRecognizerDelegate.h>
#import <FMCoreUI/FMMapAnnotationGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <libobjc.A.dylib/MKUserTrackingView.h>

@protocol FMMapViewDelegate, FMAnnotationMKAnnotation, MKAnnotation;
@class MKMapView, _MKUserTrackingButton, UIColor, FMMapGestureRecognizer, MKMapCamera, NSTimer, CADisplayLink, FMAnnotationView, MKUserLocationView, MKUserLocation, NSMutableArray, NSString;

@interface FMMapView : UIView <FMMapGestureRecognizerDelegate, FMMapAnnotationGestureRecognizerDelegate, MKMapViewDelegate, MKUserTrackingView> {

	BOOL _isAllAnnotationsShown;
	BOOL _isMapPositioningDisabled;
	BOOL _isSwipeGestureEnabled;
	BOOL _isMapAnimating;
	BOOL _isUserSwiping;
	BOOL _isNearbyModeDisabled;
	BOOL _showUserLocationCallout;
	BOOL _isPreventingMapUpdates;
	BOOL _isPreviewing;
	BOOL _isUserLocationUpdated;
	BOOL _canChangeUserTrackingMode;
	BOOL _isGoingBackToAllAnnotation;
	BOOL _isSwitchingTrackingMode;
	BOOL _shouldDisplayOverlay;
	BOOL _canSelectUserAnnotation;
	BOOL _isFingerOnMap;
	BOOL _isFingerOnAnnotation;
	BOOL _isMapMoved;
	id<FMMapViewDelegate> _delegate;
	MKMapView* _mapView;
	_MKUserTrackingButton* _userTrackingButton;
	UIColor* _userLocationTintColor;
	long long _currentTrackingMode;
	long long _doubleSelectionMode;
	long long _renderingMode;
	id<FMAnnotation><MKAnnotation> _selectedAnnotation;
	FMMapGestureRecognizer* _mapGesture;
	id<FMAnnotation><MKAnnotation> _lastSelectedAnnotationBeforeTracking;
	MKMapCamera* _cameraBefore3DRendering;
	NSTimer* _layoutTimer;
	double _maxZoomLevel;
	CADisplayLink* _displayLink;
	NSTimer* _userSelectionTimer;
	FMAnnotationView* _potentiallySelectedAnnotationView;
	FMAnnotationView* _selectedAnnotationView;
	MKUserLocationView* _userLocationView;
	MKUserLocation* _userLocation;
	id<FMAnnotation><MKAnnotation> _currentDeviceAnnotation;
	id<MKAnnotation> _otherSelectedAnnotation;
	long long _currentSelectedState;
	NSMutableArray* _accuracyOverlays;
	SCD_Struct_FM1 _lastVisibleMapRect;
	UIEdgeInsets _lastVisibleInsets;

}

@property (assign,nonatomic,__weak) id<FMMapViewDelegate> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MKMapView * mapView;                                                                   //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) _MKUserTrackingButton * userTrackingButton;                                              //@synthesize userTrackingButton=_userTrackingButton - In the implementation block
@property (nonatomic,retain) UIColor * userLocationTintColor;                                                         //@synthesize userLocationTintColor=_userLocationTintColor - In the implementation block
@property (assign,nonatomic) long long currentTrackingMode;                                                           //@synthesize currentTrackingMode=_currentTrackingMode - In the implementation block
@property (assign,nonatomic) long long doubleSelectionMode;                                                           //@synthesize doubleSelectionMode=_doubleSelectionMode - In the implementation block
@property (assign,nonatomic) long long renderingMode;                                                                 //@synthesize renderingMode=_renderingMode - In the implementation block
@property (assign,nonatomic) BOOL isAllAnnotationsShown;                                                              //@synthesize isAllAnnotationsShown=_isAllAnnotationsShown - In the implementation block
@property (assign,nonatomic) BOOL isMapPositioningDisabled;                                                           //@synthesize isMapPositioningDisabled=_isMapPositioningDisabled - In the implementation block
@property (assign,nonatomic) BOOL isSwipeGestureEnabled;                                                              //@synthesize isSwipeGestureEnabled=_isSwipeGestureEnabled - In the implementation block
@property (assign,nonatomic) BOOL isMapAnimating;                                                                     //@synthesize isMapAnimating=_isMapAnimating - In the implementation block
@property (assign,nonatomic) BOOL isUserSwiping;                                                                      //@synthesize isUserSwiping=_isUserSwiping - In the implementation block
@property (assign,nonatomic) BOOL isNearbyModeDisabled;                                                               //@synthesize isNearbyModeDisabled=_isNearbyModeDisabled - In the implementation block
@property (assign,nonatomic) BOOL showUserLocationCallout;                                                            //@synthesize showUserLocationCallout=_showUserLocationCallout - In the implementation block
@property (assign,nonatomic) BOOL isPreventingMapUpdates;                                                             //@synthesize isPreventingMapUpdates=_isPreventingMapUpdates - In the implementation block
@property (assign,nonatomic,__weak) id<FMAnnotation><MKAnnotation> selectedAnnotation;                                //@synthesize selectedAnnotation=_selectedAnnotation - In the implementation block
@property (assign,nonatomic) BOOL isPreviewing;                                                                       //@synthesize isPreviewing=_isPreviewing - In the implementation block
@property (nonatomic,retain) FMMapGestureRecognizer * mapGesture;                                                     //@synthesize mapGesture=_mapGesture - In the implementation block
@property (assign,nonatomic) SCD_Struct_FM1 lastVisibleMapRect;                                                       //@synthesize lastVisibleMapRect=_lastVisibleMapRect - In the implementation block
@property (assign,nonatomic,__weak) id<FMAnnotation><MKAnnotation> lastSelectedAnnotationBeforeTracking;              //@synthesize lastSelectedAnnotationBeforeTracking=_lastSelectedAnnotationBeforeTracking - In the implementation block
@property (nonatomic,retain) MKMapCamera * cameraBefore3DRendering;                                                   //@synthesize cameraBefore3DRendering=_cameraBefore3DRendering - In the implementation block
@property (nonatomic,retain) NSTimer * layoutTimer;                                                                   //@synthesize layoutTimer=_layoutTimer - In the implementation block
@property (assign,nonatomic) double maxZoomLevel;                                                                     //@synthesize maxZoomLevel=_maxZoomLevel - In the implementation block
@property (assign,nonatomic) UIEdgeInsets lastVisibleInsets;                                                          //@synthesize lastVisibleInsets=_lastVisibleInsets - In the implementation block
@property (assign,nonatomic) BOOL isUserLocationUpdated;                                                              //@synthesize isUserLocationUpdated=_isUserLocationUpdated - In the implementation block
@property (assign,nonatomic) BOOL canChangeUserTrackingMode;                                                          //@synthesize canChangeUserTrackingMode=_canChangeUserTrackingMode - In the implementation block
@property (assign,nonatomic) BOOL isGoingBackToAllAnnotation;                                                         //@synthesize isGoingBackToAllAnnotation=_isGoingBackToAllAnnotation - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                                             //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) BOOL isSwitchingTrackingMode;                                                            //@synthesize isSwitchingTrackingMode=_isSwitchingTrackingMode - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayOverlay;                                                               //@synthesize shouldDisplayOverlay=_shouldDisplayOverlay - In the implementation block
@property (assign,nonatomic) BOOL canSelectUserAnnotation;                                                            //@synthesize canSelectUserAnnotation=_canSelectUserAnnotation - In the implementation block
@property (nonatomic,retain) NSTimer * userSelectionTimer;                                                            //@synthesize userSelectionTimer=_userSelectionTimer - In the implementation block
@property (nonatomic,retain) FMAnnotationView * potentiallySelectedAnnotationView;                                    //@synthesize potentiallySelectedAnnotationView=_potentiallySelectedAnnotationView - In the implementation block
@property (nonatomic,retain) FMAnnotationView * selectedAnnotationView;                                               //@synthesize selectedAnnotationView=_selectedAnnotationView - In the implementation block
@property (assign,nonatomic,__weak) MKUserLocationView * userLocationView;                                            //@synthesize userLocationView=_userLocationView - In the implementation block
@property (nonatomic,retain) MKUserLocation * userLocation;                                                           //@synthesize userLocation=_userLocation - In the implementation block
@property (assign,nonatomic,__weak) id<FMAnnotation><MKAnnotation> currentDeviceAnnotation;                           //@synthesize currentDeviceAnnotation=_currentDeviceAnnotation - In the implementation block
@property (assign,nonatomic,__weak) id<MKAnnotation> otherSelectedAnnotation;                                         //@synthesize otherSelectedAnnotation=_otherSelectedAnnotation - In the implementation block
@property (assign,nonatomic) long long currentSelectedState;                                                          //@synthesize currentSelectedState=_currentSelectedState - In the implementation block
@property (nonatomic,retain) NSMutableArray * accuracyOverlays;                                                       //@synthesize accuracyOverlays=_accuracyOverlays - In the implementation block
@property (assign,nonatomic) BOOL isFingerOnMap;                                                                      //@synthesize isFingerOnMap=_isFingerOnMap - In the implementation block
@property (assign,nonatomic) BOOL isFingerOnAnnotation;                                                               //@synthesize isFingerOnAnnotation=_isFingerOnAnnotation - In the implementation block
@property (assign,nonatomic) BOOL isMapMoved;                                                                         //@synthesize isMapMoved=_isMapMoved - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasUserLocation;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<FMMapViewDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(id<FMMapViewDelegate>)delegate;
-(void)synchronize;
-(void)initialize;
-(long long)renderingMode;
-(void)didMoveToSuperview;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(BOOL)isPreviewing;
-(void)setUserLocation:(MKUserLocation *)arg1 ;
-(BOOL)hasUserLocation;
-(long long)userTrackingMode;
-(double)maxZoomLevel;
-(void)setMaxZoomLevel:(double)arg1 ;
-(void)_setUserTrackingMode:(long long)arg1 animated:(BOOL)arg2 fromTrackingButton:(BOOL)arg3 ;
-(BOOL)canRotateForHeading;
-(MKUserLocationView *)userLocationView;
-(void)removeOverlay:(id)arg1 ;
-(void)addOverlay:(id)arg1 ;
-(void)setUserLocationView:(MKUserLocationView *)arg1 ;
-(SCD_Struct_FM0)coordinateForAnnotationView:(id)arg1 ;
-(id)viewForAnnotation:(id)arg1 ;
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2 ;
-(MKUserLocation *)userLocation;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(void)mapViewDidStopLocatingUser:(id)arg1 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
-(void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2 ;
-(void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(BOOL)arg3 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(void)removeAnnotations:(id)arg1 ;
-(void)removeOverlays:(id)arg1 ;
-(void)addAnnotations:(id)arg1 ;
-(void)addAnnotation:(id)arg1 ;
-(void)removeAnnotation:(id)arg1 ;
-(void)addOverlays:(id)arg1 ;
-(MKMapView *)mapView;
-(void)fingerOnAnnotation:(id)arg1 ;
-(void)fingerOffAnnotation:(id)arg1 ;
-(void)setupConstraints;
-(void)setupGestures;
-(void)setUserTrackingButton:(_MKUserTrackingButton *)arg1 ;
-(void)invalidateLayoutTimer;
-(void)setCurrentTrackingMode:(long long)arg1 ;
-(void)setCurrentSelectedState:(long long)arg1 ;
-(void)setDoubleSelectionMode:(long long)arg1 ;
-(void)setUserLocationTintColor:(UIColor *)arg1 ;
-(void)setCanSelectUserAnnotation:(BOOL)arg1 ;
-(void)setCanChangeUserTrackingMode:(BOOL)arg1 ;
-(void)setAccuracyOverlays:(NSMutableArray *)arg1 ;
-(void)createMKMapView;
-(void)createUserTrackingButton;
-(void)setupCamera;
-(void)setLastVisibleMapRect:(SCD_Struct_FM1)arg1 ;
-(void)setLastVisibleInsets:(UIEdgeInsets)arg1 ;
-(long long)currentSelectedState;
-(SCD_Struct_FM1)lastVisibleMapRect;
-(UIEdgeInsets)lastVisibleInsets;
-(void)setIsUserLocationUpdated:(BOOL)arg1 ;
-(void)setMapGesture:(FMMapGestureRecognizer *)arg1 ;
-(void)layoutMapView;
-(void)setLayoutTimer:(NSTimer *)arg1 ;
-(BOOL)isPreventingMapUpdates;
-(void)updateCameraPositionForAnnotation:(id)arg1 ;
-(BOOL)isAllAnnotationsShown;
-(void)displayAllAnnotations;
-(void)recenterVisibleAnnotations;
-(void)removeUserAnnotationIfNeeded:(id)arg1 ;
-(void)deselectAnnotationViewIfNeeded:(id)arg1 ;
-(void)setSelectedAnnotation:(id<FMAnnotation><MKAnnotation>)arg1 ;
-(void)didSelectAnnotation:(id)arg1 ;
-(void)setIsMapAnimating:(BOOL)arg1 ;
-(SCD_Struct_FM1)repositionOnAnnotation:(id)arg1 withZoom:(BOOL)arg2 ;
-(NSTimer *)layoutTimer;
-(void)setIsMapPositioningDisabled:(BOOL)arg1 ;
-(void)didDoubleSelectAnnotation:(id)arg1 ;
-(id<FMAnnotation><MKAnnotation>)currentDeviceAnnotation;
-(void)setCurrentDeviceAnnotation:(id<FMAnnotation><MKAnnotation>)arg1 ;
-(void)deselectAnnotationView:(id)arg1 ;
-(id<FMAnnotation><MKAnnotation>)selectedAnnotation;
-(void)updateOverlayForAnnotation:(id)arg1 withForce:(BOOL)arg2 ;
-(NSTimer *)userSelectionTimer;
-(void)setUserSelectionTimer:(NSTimer *)arg1 ;
-(void)updateCanSelectUserAnnotation;
-(BOOL)showUserLocationCallout;
-(BOOL)isMapPositioningDisabled;
-(void)setIsAllAnnotationsShown:(BOOL)arg1 ;
-(void)slideAnnotationIntoViewIfNeeded:(id)arg1 ;
-(long long)doubleSelectionMode;
-(void)selectOrDeselectAnnotationView:(id)arg1 ;
-(BOOL)isMapAnimating;
-(BOOL)isFingerOnMap;
-(void)setShouldDisplayOverlay:(BOOL)arg1 ;
-(void)refreshOverlayForAnnotation:(id)arg1 andCoordinate:(SCD_Struct_FM0)arg2 ;
-(BOOL)shouldDisplayOverlay;
-(BOOL)isOverlayOnMap:(id)arg1 ;
-(void)removeAllOverlaysAndCurrentAnnotationOverlay:(id)arg1 ;
-(NSMutableArray *)accuracyOverlays;
-(BOOL)isUserSwiping;
-(id<MKAnnotation>)otherSelectedAnnotation;
-(long long)currentTrackingMode;
-(SCD_Struct_FM1)mapRectForAnnotations:(id)arg1 ;
-(SCD_Struct_FM1)normalizeMapRect:(SCD_Struct_FM1)arg1 toZoomScale:(double)arg2 ;
-(void)updateCameraPositionForMapRect:(SCD_Struct_FM1)arg1 withZoom:(BOOL)arg2 ;
-(id)nearbyAnnotations;
-(void)repositionOnMapRectIfNeeded:(SCD_Struct_FM1)arg1 ;
-(void)repositionToMapRect:(SCD_Struct_FM1)arg1 withZoom:(BOOL)arg2 ;
-(void)setIsGoingBackToAllAnnotation:(BOOL)arg1 ;
-(void)animateToAllAnnotation;
-(void)animateRenderingModeChange;
-(BOOL)isMapMoved;
-(void)animateMapToPosition:(SCD_Struct_FM1)arg1 withInsets:(UIEdgeInsets)arg2 andZoom:(BOOL)arg3 ;
-(BOOL)isSwitchingTrackingMode;
-(BOOL)isGoingBackToAllAnnotation;
-(void)setIsMapMoved:(BOOL)arg1 ;
-(double)distanceBetweenOrigin:(SCD_Struct_FM0)arg1 andDestination:(SCD_Struct_FM0)arg2 ;
-(float)dampingForAltitude:(double)arg1 andDistance:(double)arg2 ;
-(MKMapCamera *)cameraBefore3DRendering;
-(void)setCameraBefore3DRendering:(MKMapCamera *)arg1 ;
-(void)moveCenterByOffset:(CGPoint)arg1 from:(SCD_Struct_FM0)arg2 ;
-(BOOL)isValidLocation:(SCD_Struct_FM0)arg1 ;
-(id)annotationsSortedByDistance;
-(BOOL)isNearbyModeDisabled;
-(UIColor *)userLocationTintColor;
-(BOOL)canSelectUserAnnotation;
-(void)depthSortAnnotations;
-(void)setPotentiallySelectedAnnotationView:(FMAnnotationView *)arg1 ;
-(FMAnnotationView *)potentiallySelectedAnnotationView;
-(void)setOtherSelectedAnnotation:(id<MKAnnotation>)arg1 ;
-(void)clearUserLocation;
-(void)updateAnnotationStyle:(id)arg1 ;
-(BOOL)canChangeUserTrackingMode;
-(void)updateAccordingToUserTrackingMode;
-(id<FMAnnotation><MKAnnotation>)lastSelectedAnnotationBeforeTracking;
-(void)setIsSwitchingTrackingMode:(BOOL)arg1 ;
-(void)setLastSelectedAnnotationBeforeTracking:(id<FMAnnotation><MKAnnotation>)arg1 ;
-(_MKUserTrackingButton *)userTrackingButton;
-(void)updateUserTrackingButtonState;
-(void)setIsFingerOnMap:(BOOL)arg1 ;
-(BOOL)isFingerOnAnnotation;
-(void)setIsUserSwiping:(BOOL)arg1 ;
-(FMMapGestureRecognizer *)mapGesture;
-(void)setIsFingerOnAnnotation:(BOOL)arg1 ;
-(void)updatePreviewLocationForAnnotation:(id)arg1 ;
-(void)mapTouchBegan:(id)arg1 ;
-(void)mapTouchEnded:(id)arg1 ;
-(void)mapTouchMoved:(id)arg1 ;
-(void)mapSwiped:(id)arg1 withPercent:(double)arg2 ;
-(void)mapSwipedBegin:(id)arg1 ;
-(void)mapSwipedEnd:(id)arg1 withPercent:(double)arg2 ;
-(void)mapTapped:(id)arg1 ;
-(void)mapDoubleTapped:(id)arg1 ;
-(void)calloutButtonTapped:(id)arg1 ;
-(void)userLocationTapped:(id)arg1 ;
-(void)doubleSelectAnnotation:(id)arg1 ;
-(void)updateCameraPositionWithLocation:(SCD_Struct_FM0)arg1 andAltitude:(double)arg2 ;
-(void)updateCameraPositionForNoLocation;
-(void)refreshCameraPosition;
-(void)flashMapInset:(UIEdgeInsets)arg1 ;
-(void)setIsSwipeGestureEnabled:(BOOL)arg1 ;
-(void)updateAnnotationPositionAfterPreview:(id)arg1 ;
-(void)setIsPreviewing:(BOOL)arg1 ;
-(void)selectAnnotationForPreview:(id)arg1 ;
-(BOOL)isSwipeGestureEnabled;
-(void)setIsNearbyModeDisabled:(BOOL)arg1 ;
-(void)setShowUserLocationCallout:(BOOL)arg1 ;
-(void)setIsPreventingMapUpdates:(BOOL)arg1 ;
-(BOOL)isUserLocationUpdated;
-(void)selectAnnotation:(id)arg1 ;
-(FMAnnotationView *)selectedAnnotationView;
-(void)setSelectedAnnotationView:(FMAnnotationView *)arg1 ;
-(SCD_Struct_FM1)mapRectMakeWithRadialDistanceForCoordinate:(SCD_Struct_FM0)arg1 andRadius:(double)arg2 ;
-(void)setRenderingMode:(long long)arg1 ;
-(void)deselectAllAnnotations;
@end

