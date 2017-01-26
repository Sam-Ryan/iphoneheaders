/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKModelObject.h>
#import <libobjc.A.dylib/VKOverlayContainerDelegate.h>
#import <libobjc.A.dylib/VKLabelModelDelegate.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/VKPolylineOverlayRouteRibbonObserver.h>
#import <libobjc.A.dylib/GEOExperimentConfigurationObserver.h>
#import <libobjc.A.dylib/VKTileProviderClient.h>
#import <libobjc.A.dylib/VKPolylineGroupOverlayObserver.h>

@protocol VKMapModelDelegate, GEORoutePreloadSession, VKMapModeObserver;
@class GEOResourceManifestConfiguration, NSLocale, VKTileProvider, NSMapTable, VKTrafficTileSource, VKRasterOverlayTileSource, VKGridModel, VKSkyModel, VKLabelModel, VKRasterMapModel, VKHybridRasterMapModel, VKRiverMapModel, VKPolygonMapModel, VKRoadMapModel, VKRoadTrafficMapModel, VKRealisticMapModel, VKBuildingFootprintMapModel, VKAnnotationModel, VKOverlayContainerModel, VKRasterOverlayMapModel, VKDebugModel, NSMutableArray, VKMapRasterizer, NSMutableSet, VKTransitLineMapModel, VKSelectedTransitLineMapModel, VKTimedAnimation, VKSharedResources, GEOFeatureStyleAttributes, VKPolylineOverlay, VKMercatorTerrainHeightCache, VKLabelMarker, NSArray, VKAnnotationMarker, NSSet, VKPolylineOverlayPainter, NSString;

@interface VKMapModel : VKModelObject <VKOverlayContainerDelegate, VKLabelModelDelegate, GEOResourceManifestTileGroupObserver, VKPolylineOverlayRouteRibbonObserver, GEOExperimentConfigurationObserver, VKTileProviderClient, VKPolylineGroupOverlayObserver> {

	unsigned long long _mapPurpose;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	NSLocale* _locale;
	long long _tileSize;
	VKTileProvider* _tileProviders[4];
	VKTileProvider* _rasterOverlayProvider[2];
	long long _mapMode;
	long long _desiredMapMode;
	BOOL _transitioningToNav;
	BOOL _isTransitioningToTransit;
	GEOResourceManifestConfiguration* _additionalManifestConfiguration;
	BOOL _activeMapLayers[4][34];
	NSMapTable* _layerToSourceMaps[4];
	VKTrafficTileSource* _trafficSource;
	VKRasterOverlayTileSource* _rasterOverlayTileSource[2];
	VKGridModel* _gridModel;
	VKSkyModel* _skyModel;
	VKLabelModel* _labelModel;
	VKRasterMapModel* _rasterModel;
	VKHybridRasterMapModel* _hybridRasterModel;
	VKRasterMapModel* _standardRasterModel;
	VKRiverMapModel* _riverLineModel;
	VKPolygonMapModel* _polygonModel;
	VKRoadMapModel* _roadModel;
	VKRoadMapModel* _hybridRoadModel;
	VKRoadTrafficMapModel* _roadTrafficModel;
	VKRealisticMapModel* _realisticModel;
	VKBuildingFootprintMapModel* _buildingFootprintModel;
	VKAnnotationModel* _annotationModel;
	VKOverlayContainerModel* _overlayContainerModel;
	VKRasterOverlayMapModel* _rasterOverlayModel[2];
	VKDebugModel* _debugModel;
	NSMapTable* _tileSources;
	NSMutableArray* _drawOrder;
	NSMutableArray* _mapLayerSubmodels;
	NSMutableArray* _mapTileSubmodels;
	shared_ptr<gss::StyleManager>* _activeStyleManager;
	shared_ptr<gss::StyleManager>* _defaultStyleManager;
	shared_ptr<gss::StyleManager>* _hybridStyleManager;
	shared_ptr<gss::StyleManager>* _satelliteStyleManager;
	shared_ptr<gss::StyleManager>* _realisticStyleManager;
	double _zoomLevel;
	long long _mapType;
	id<VKMapModelDelegate> _delegate;
	id<GEORoutePreloadSession> _routePreloadSession;
	BOOL _dynamicMapModesEnabled;
	BOOL _debugDynamicMapModesEnabled;
	BOOL _buildingsAreVisible;
	BOOL _showsBuildings;
	BOOL _fullyDrawn;
	BOOL _shouldNotifyFullyDrawn;
	BOOL _hasFailedTile;
	BOOL _trafficEnabled;
	BOOL _trafficIncidentsEnabled;
	BOOL _shouldRasterize;
	long long _loadingCount;
	double _contentScale;
	unsigned char _targetDisplay;
	VehicleState _vehicleState;
	double _lodBias;
	BOOL _disableRoads;
	BOOL _disableLabels;
	BOOL _disablePolygons;
	BOOL _disableBuildingFootprints;
	BOOL _disableRasters;
	BOOL _disableGrid;
	Matrix<float, 4, 1> _clearColor;
	VKMapRasterizer* _rasterizer;
	VKRasterMapModel* _rasterViewer;
	int _annotationMarkerStyle;
	BOOL _limitingNavCameraHeight;
	NSMutableSet* _blockingStylesheetObservers;
	double _styleTransitionProgress;
	NSMutableArray* _externalAnchors;
	double _forcedMaxZoomLevel;
	VKTransitLineMapModel* _transitLineModel;
	VKSelectedTransitLineMapModel* _selectedTransitLineModel;
	BOOL _disableTransitLines;
	VKTimedAnimation* _modeTransitionAnimation;
	BOOL _disableRoadClass[9];
	id<VKMapModeObserver> _mapModeObserver;
	VKSharedResources* _sharedResources;
	shared_ptr<md::DataOverrideManager>* _dataOverrideManager;
	float _navigationPuckSize;
	ClearItem _clearItem;
	GEOFeatureStyleAttributes* _mapFeatureStyleAttributes;
	shared_ptr<gss::StyleQuery>* _styleQuery;
	int _metroArea;
	BOOL _forceMapDrawStyleUpdate;
	NSMutableSet* _polylineOverlays;
	VKPolylineOverlay* _selectedPolyline;

}

@property (nonatomic,retain) GEOResourceManifestConfiguration * additionalManifestConfiguration;              //@synthesize additionalManifestConfiguration=_additionalManifestConfiguration - In the implementation block
@property (nonatomic,readonly) GEOResourceManifestConfiguration * manifestConfiguration;                      //@synthesize manifestConfiguration=_manifestConfiguration - In the implementation block
@property (assign,nonatomic) shared_ptr<gss::StyleManager>* styleManager;                                     //@synthesize activeStyleManager=_activeStyleManager - In the implementation block
@property (nonatomic,readonly) VKSharedResources * sharedResources;                                           //@synthesize sharedResources=_sharedResources - In the implementation block
@property (assign,nonatomic) long long mapType;                                                               //@synthesize mapType=_mapType - In the implementation block
@property (assign,nonatomic) BOOL shouldLoadFallbackTiles; 
@property (assign,nonatomic) unsigned long long neighborMode; 
@property (assign,nonatomic) long long shieldSize; 
@property (assign,nonatomic) long long navigationShieldSize; 
@property (assign,nonatomic) long long shieldIdiom; 
@property (assign,nonatomic) BOOL showsPointsOfInterest; 
@property (assign,nonatomic) BOOL showsBuildings;                                                             //@synthesize showsBuildings=_showsBuildings - In the implementation block
@property (assign,nonatomic) double lodBias; 
@property (assign,nonatomic) BOOL dynamicMapModesEnabled;                                                     //@synthesize dynamicMapModesEnabled=_dynamicMapModesEnabled - In the implementation block
@property (nonatomic,readonly) long long currentMapMode;                                                      //@synthesize mapMode=_mapMode - In the implementation block
@property (assign,nonatomic) BOOL limitingNavCameraHeight;                                                    //@synthesize limitingNavCameraHeight=_limitingNavCameraHeight - In the implementation block
@property (nonatomic,readonly) VKMercatorTerrainHeightCache * terrainHeightCache; 
@property (assign,getter=isTrafficEnabled,nonatomic) BOOL trafficEnabled;                                     //@synthesize trafficEnabled=_trafficEnabled - In the implementation block
@property (assign,getter=isTrafficIncidentsEnabled,nonatomic) BOOL trafficIncidentsEnabled;                   //@synthesize trafficIncidentsEnabled=_trafficIncidentsEnabled - In the implementation block
@property (assign,nonatomic) BOOL localizeLabels; 
@property (assign,nonatomic) unsigned char labelScaleFactor; 
@property (assign,nonatomic) double contentScale;                                                             //@synthesize contentScale=_contentScale - In the implementation block
@property (assign,nonatomic) unsigned char targetDisplay; 
@property (assign,nonatomic) VehicleState vehicleState; 
@property (assign,nonatomic) id<VKMapModelDelegate> delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) VKBuildingFootprintMapModel * buildingFootprintModel;                          //@synthesize buildingFootprintModel=_buildingFootprintModel - In the implementation block
@property (nonatomic,readonly) BOOL buildingsAreVisible;                                                      //@synthesize buildingsAreVisible=_buildingsAreVisible - In the implementation block
@property (nonatomic,readonly) BOOL isFullyDrawn; 
@property (nonatomic,readonly) VKTileProvider * tileProvider; 
@property (nonatomic,readonly) VKLabelMarker * selectedLabelMarker; 
@property (assign,nonatomic) BOOL labelMarkerSelectionEnabled; 
@property (assign,nonatomic) PolylineCoordinate routeUserOffset; 
@property (nonatomic,retain) NSArray * externalTrafficIncidents; 
@property (nonatomic,readonly) VKAnnotationMarker * selectedAnnotationMarker; 
@property (nonatomic,readonly) NSArray * overlays; 
@property (nonatomic,readonly) NSSet * persistentOverlays; 
@property (nonatomic,readonly) NSArray * rasterOverlays; 
@property (nonatomic,retain) VKPolylineOverlayPainter * focusedLabelsPolylinePainter; 
@property (assign,nonatomic) BOOL debugDynamicMapModesEnabled;                                                //@synthesize debugDynamicMapModesEnabled=_debugDynamicMapModesEnabled - In the implementation block
@property (assign,nonatomic) BOOL disableRoads;                                                               //@synthesize disableRoads=_disableRoads - In the implementation block
@property (assign,nonatomic) BOOL disableLabels;                                                              //@synthesize disableLabels=_disableLabels - In the implementation block
@property (assign,nonatomic) BOOL disablePolygons;                                                            //@synthesize disablePolygons=_disablePolygons - In the implementation block
@property (assign,nonatomic) BOOL disableBuildingFootprints;                                                  //@synthesize disableBuildingFootprints=_disableBuildingFootprints - In the implementation block
@property (assign,nonatomic) BOOL disableRasters;                                                             //@synthesize disableRasters=_disableRasters - In the implementation block
@property (assign,nonatomic) BOOL disableRealisticRoads; 
@property (assign,nonatomic) BOOL disableRealisticLand; 
@property (assign,nonatomic) BOOL disableGrid;                                                                //@synthesize disableGrid=_disableGrid - In the implementation block
@property (assign,nonatomic) Matrix<float clearColor;                                                         //@synthesize clearColor=_clearColor - In the implementation block
@property (nonatomic,retain) id<GEORoutePreloadSession> routePreloadSession; 
@property (assign,nonatomic) id<VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation; 
@property (nonatomic,readonly) NSArray * visibleTileSets; 
@property (assign,nonatomic) id<VKOverlayContainerRouteDelegate> overlayContainerRouteDelegate; 
@property (assign,nonatomic) float navigationPuckSize;                                                        //@synthesize navigationPuckSize=_navigationPuckSize - In the implementation block
@property (nonatomic,readonly) BOOL shouldRasterize;                                                          //@synthesize shouldRasterize=_shouldRasterize - In the implementation block
@property (assign,nonatomic) BOOL disableTransitLines;                                                        //@synthesize disableTransitLines=_disableTransitLines - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const char*)nameForRoadClass:(int)arg1 ;
+(unsigned long long)numberOfRoadClasses;
-(void)_resetMaximumZoomLevel;
-(void)_setMaximumZoomLevel:(double)arg1 ;
-(Matrix<float)clearColor;
-(void)setDelegate:(id<VKMapModelDelegate>)arg1 ;
-(void)dealloc;
-(id<VKMapModelDelegate>)delegate;
-(BOOL)shouldRasterize;
-(void)didReceiveMemoryWarning:(BOOL)arg1 ;
-(long long)tileSize;
-(void)setContentScale:(double)arg1 ;
-(double)contentScale;
-(void)_forceLayout;
-(void)experimentConfigurationDidChange:(id)arg1 ;
-(GEOResourceManifestConfiguration *)manifestConfiguration;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3 ;
-(void)_localeChanged:(id)arg1 ;
-(long long)mapType;
-(void)setMapType:(long long)arg1 ;
-(NSArray *)visibleTileSets;
-(id)detailedDescription;
-(BOOL)disableBuildingFootprints;
-(void)setDynamicMapModesEnabled:(BOOL)arg1 ;
-(void)stylesheetAnimationDidProgress:(float)arg1 ;
-(void)setDisableBuildingFootprints:(BOOL)arg1 ;
-(void)setRouteUserOffset:(PolylineCoordinate)arg1 ;
-(PolylineCoordinate)routeUserOffset;
-(void)setDisableRealisticRoads:(BOOL)arg1 ;
-(BOOL)isRoadClassDisabled:(int)arg1 ;
-(void)beginStyleAnimationGroup;
-(void)endStyleAnimationGroup;
-(void)stylesheetAnimationDidEnd:(BOOL)arg1 ;
-(void)clearScene;
-(id)externalAnchors;
-(BOOL)debugDynamicMapModesEnabled;
-(VKPolylineOverlayPainter *)focusedLabelsPolylinePainter;
-(NSArray *)externalTrafficIncidents;
-(BOOL)disablePolygons;
-(void)performStylesheetDidChange;
-(BOOL)disableTransitLines;
-(double)_styleTransitionProgress;
-(void)setDisablePolygons:(BOOL)arg1 ;
-(BOOL)labelMarkerSelectionEnabled;
-(void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(DisplayStyle)arg2 setupHandler:(/*^block*/id)arg3 ;
-(void)disableRoadClass:(BOOL)arg1 withRoadClass:(int)arg2 ;
-(void)setDebugDynamicMapModesEnabled:(BOOL)arg1 ;
-(void)resetTileContainers;
-(id)annotationMarkers;
-(void)setDisableRoads:(BOOL)arg1 ;
-(NSArray *)rasterOverlays;
-(void)setDisableGrid:(BOOL)arg1 ;
-(void)setFocusedLabelsPolylinePainter:(VKPolylineOverlayPainter *)arg1 ;
-(BOOL)disableRoads;
-(void)setDisableLabels:(BOOL)arg1 ;
-(BOOL)disableRealisticLand;
-(long long)navigationShieldSize;
-(id<GEORoutePreloadSession>)routePreloadSession;
-(BOOL)disableLabels;
-(id)boundsForSelectedTransitLines;
-(void)finishStyleBlend;
-(void)cancelTileRequests;
-(void)didBeginTransitionToTransit;
-(void)selectAnnotationMarker:(id)arg1 ;
-(VKAnnotationMarker *)selectedAnnotationMarker;
-(void)reloadStylesheet;
-(BOOL)shouldLoadFallbackTiles;
-(BOOL)disableGrid;
-(void)setNavigationShieldSize:(long long)arg1 ;
-(void)setDisableRealisticLand:(BOOL)arg1 ;
-(void)setDisableRasters:(BOOL)arg1 ;
-(BOOL)disableRealisticRoads;
-(NSSet *)persistentOverlays;
-(void)deselectAnnotationMarker:(id)arg1 ;
-(void)setCurrentLocationText:(id)arg1 ;
-(void)setExternalTrafficIncidents:(NSArray *)arg1 ;
-(DisplayStyle)sourceMapDisplayStyle;
-(void)setStyleManager:(shared_ptr<gss::StyleManager>*)arg1 ;
-(void)forceMapType:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setDesiredMapMode:(long long)arg1 immediate:(BOOL)arg2 ;
-(long long)shieldIdiom;
-(void)setRoutePreloadSession:(id<GEORoutePreloadSession>)arg1 ;
-(BOOL)disableRasters;
-(void)setAnnotationMarkerDeselectionCallback:(/*^block*/id)arg1 ;
-(BOOL)dynamicMapModesEnabled;
-(BOOL)isFullyDrawn;
-(shared_ptr<gss::StyleManager>*)styleManager;
-(/*^block*/id)annotationMarkerDeselectionCallback;
-(void)setDisableTransitLines:(BOOL)arg1 ;
-(VehicleState)vehicleState;
-(void)setShieldIdiom:(long long)arg1 ;
-(id<VKRouteMatchedAnnotationPresentation>)routeLineSplitAnnotation;
-(id)closestRoadMarkerForSelectionAtPoint:(CGPoint)arg1 ;
-(unsigned char)labelScaleFactor;
-(id)roadMarkersForSelectionAtPoint:(CGPoint)arg1 ;
-(id)initShouldRasterize:(BOOL)arg1 mapPurpose:(unsigned long long)arg2 manifestConfiguration:(id)arg3 locale:(id)arg4 contentScale:(double)arg5 ;
-(id)annotationMarkerForSelectionAtPoint:(VKPoint)arg1 avoidCurrent:(BOOL)arg2 canvasSize:(CGSize)arg3 ;
-(id)buildingMarkerAtScreenPoint:(CGPoint)arg1 groundPoint:(VKPoint)arg2 ;
-(double)northYawAtZoom:(int)arg1 ;
-(VKMercatorTerrainHeightCache *)terrainHeightCache;
-(unsigned long long)neighborMode;
-(void)gatherNavigationRenderingPreloadItems:(vector<ggl::ShaderLoadItem, std::__1::allocator<ggl::ShaderLoadItem> >Ref)arg1 ;
-(void)flushCaches:(BOOL)arg1 ;
-(void)setLimitingNavCameraHeight:(BOOL)arg1 ;
-(void)debugHighlightLabelAtScreenPoint:(CGPoint)arg1 viewTransform:(id)arg2 ;
-(void)stylesheetAnimationWillStartFromStyle:(DisplayStyle)arg1 toStyle:(DisplayStyle)arg2 ;
-(VKSharedResources *)sharedResources;
-(void)setNavigationPuckSize:(float)arg1 ;
-(void)setStylesheetMapDisplayStyle:(DisplayStyle)arg1 ;
-(void)setNeighborMode:(unsigned long long)arg1 ;
-(BOOL)isTrafficEnabled;
-(void)layoutScene:(id)arg1 withContext:(id)arg2 ;
-(void)addSubmodel:(id)arg1 ;
-(id)navTileSource;
-(double)heightAtPoint:(VKPoint)arg1 ;
-(void)didEndNavigation;
-(void)sizeDidChange:(CGSize)arg1 ;
-(BOOL)isTrafficIncidentsEnabled;
-(long long)currentMapMode;
-(id)featureMarkerAtScreenPoint:(CGPoint)arg1 groundPoint:(VKPoint)arg2 ;
-(void)setOverlayContainerRouteDelegate:(id<VKOverlayContainerRouteDelegate>)arg1 ;
-(BOOL)supportsMapDisplayStyle:(DisplayStyle)arg1 ;
-(void)didBeginTransitionToNavigation;
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(VKTileProvider *)tileProvider;
-(void)performStylesheetTransitionDidProgress;
-(void)_transitFadeOutCompletionCallback;
-(void)createTrafficTileSourceIfNecessary:(id)arg1 ;
-(void)_updateRasterOverlayZoomOverride;
-(void)_updateTileExclusionAreas;
-(void)foreachActiveLayer:(/*^block*/id)arg1 ;
-(long long)buildingsMapMode;
-(id)roadMarkerForSelectionAtPoint:(CGPoint)arg1 ;
-(void)updateMapDrawStyleWithContext:(id)arg1 ;
-(void)_deactivateModel:(id)arg1 ;
-(void)configureTileSources;
-(id)_rasterOverlayTileSourceForLevel:(unsigned long long)arg1 ;
-(id)labelModel:(id)arg1 mapTileForTile:(id)arg2 layer:(unsigned long long)arg3 ;
-(id<VKOverlayContainerRouteDelegate>)overlayContainerRouteDelegate;
-(float)_tileSelectionScaleForContext:(id)arg1 ;
-(void)_transitionFromMode:(long long)arg1 toMode:(long long)arg2 animated:(BOOL)arg3 ;
-(VKBuildingFootprintMapModel *)buildingFootprintModel;
-(void)_activateModel:(id)arg1 ;
-(void)didEndTransitionToTransit;
-(void)performstylesheetDidReload;
-(void)didTapZoom;
-(id)createSourceForLayer:(unsigned long long)arg1 tileSet:(id)arg2 mode:(long long)arg3 ;
-(void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2 ;
-(void)_tryTransitionAndPreloadIfNecessary:(id)arg1 ;
-(void)_updateOverlayTileSource;
-(void)_setStyleManagerFromMapType:(long long)arg1 ;
-(void)updateRasterOverlayProviders:(id)arg1 withContext:(id)arg2 ;
-(void)performStylesheetDoneChanging;
-(void)startStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(DisplayStyle)arg2 ;
-(void)willTapZoom;
-(void)setClearColor:(Matrix<float)arg1 ;
-(int)tileStyleForMapLayer:(unsigned long long)arg1 ;
-(void)_updateZoomLevel:(id)arg1 ;
-(void)_mapConfigurationDidChange;
-(id)tileSetForMapLayer:(unsigned long long)arg1 tileGroup:(id)arg2 ;
-(BOOL)buildingsAreVisible;
-(void)buildingsDidBecome3D:(BOOL)arg1 ;
-(BOOL)limitingNavCameraHeight;
-(void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2 ;
-(void)setLodBias:(double)arg1 ;
-(void)_updateRegularTileProviderMode;
-(void)setStyleManager:(shared_ptr<gss::StyleManager>*)arg1 forRealistic:(BOOL)arg2 ;
-(void)performStylesheetWillTransitionToDisplayStyle:(DisplayStyle)arg1 ;
-(float)navigationPuckSize;
-(void)shouldFlushCaches:(id)arg1 ;
-(float)ppi;
-(id)sourceForLayer:(unsigned long long)arg1 mode:(long long)arg2 ;
-(id)labelDebugString;
-(double)lodBias;
-(double)maxTileHeightAtPoint:(VKPoint)arg1 ;
-(long long)maximumZoomLevelInView:(id)arg1 ;
-(long long)minimumZoomLevelInView:(id)arg1 ;
-(void)labelModelDidLayoutLabels:(id)arg1 ;
-(void)labelModel:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2 ;
-(void)reserveStencilRangeForBuildingsForScene:(id)arg1 context:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)reserveStencilRangeForRoadsForScene:(id)arg1 context:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)updateOverlayType;
-(BOOL)overlayContainerIsInTransitMode:(id)arg1 ;
-(id)overlayContainer:(id)arg1 roadTileForTile:(id)arg2 ;
-(BOOL)overlayContainerIsInRealisticMode:(id)arg1 ;
-(id)overlayContainer:(id)arg1 painterForOverlay:(id)arg2 ;
-(void)overlayContainer:(id)arg1 showingRouteInStandardModeDidChange:(BOOL)arg2 ;
-(void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2 ;
-(void)didStopLoadingTilesWithError:(id)arg1 ;
-(void)willStartLoadingTiles;
-(BOOL)tileProviderMayUseNetwork:(id)arg1 ;
-(void)tileProviderNeedsUpdate:(id)arg1 ;
-(void)polylineOverlay:(id)arg1 didUpdateRouteRibbon:(id)arg2 ;
-(void)_setStyleTransitionProgress:(double)arg1 targetStyle:(DisplayStyle)arg2 step:(long long)arg3 ;
-(BOOL)showsPointsOfInterest;
-(void)setAdditionalManifestConfiguration:(GEOResourceManifestConfiguration *)arg1 ;
-(id)labelMarkers;
-(BOOL)showsBuildings;
-(void)setShowsPointsOfInterest:(BOOL)arg1 ;
-(GEOResourceManifestConfiguration *)additionalManifestConfiguration;
-(BOOL)isShowingNoDataPlaceholders;
-(void)addPersistentOverlay:(id)arg1 ;
-(void)removeExternalAnchor:(id)arg1 ;
-(id)attributionsForCurrentRegion;
-(void)removePersistentOverlay:(id)arg1 ;
-(void)removeAnnotationMarker:(id)arg1 ;
-(void)setShouldLoadFallbackTiles:(BOOL)arg1 ;
-(void)setMapType:(long long)arg1 animated:(BOOL)arg2 ;
-(VKLabelMarker *)selectedLabelMarker;
-(/*^block*/id)annotationCoordinateTest;
-(void)setTrafficEnabled:(BOOL)arg1 ;
-(void)setRouteLineSplitAnnotation:(id<VKRouteMatchedAnnotationPresentation>)arg1 ;
-(void)setTrafficIncidentsEnabled:(BOOL)arg1 ;
-(void)setVehicleState:(VehicleState)arg1 ;
-(void)setApplicationState:(unsigned char)arg1 ;
-(void)addExternalAnchor:(id)arg1 ;
-(void)setLabelMarkerSelectionEnabled:(BOOL)arg1 ;
-(id)labelMarkerForSelectionAtPoint:(CGPoint)arg1 selectableLabelsOnly:(BOOL)arg2 ;
-(BOOL)localizeLabels;
-(/*^block*/id)annotationRectTest;
-(void)deselectLabelMarker;
-(void)selectLabelMarker:(id)arg1 ;
-(void)setLocalizeLabels:(BOOL)arg1 ;
-(void)setShowsBuildings:(BOOL)arg1 ;
-(void)addAnnotationMarker:(id)arg1 allowAnimation:(BOOL)arg2 ;
-(void)setShieldSize:(long long)arg1 ;
-(long long)shieldSize;
-(void)selectTransitLineMarker:(id)arg1 ;
-(id)selectedTransitLineIDs;
-(void)deselectTransitLineMarker;
-(id)transitLineMarkersInCurrentViewport;
-(void)removeOverlay:(id)arg1 ;
-(NSArray *)overlays;
-(void)addOverlay:(id)arg1 ;
-(void)addRasterOverlay:(id)arg1 ;
-(void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2 ;
-(void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2 ;
-(void)removeRasterOverlay:(id)arg1 ;
-(unsigned char)targetDisplay;
-(void)setLabelScaleFactor:(unsigned char)arg1 ;
-(void)setTargetDisplay:(unsigned char)arg1 ;
-(id)transitLineMarkersForSelectionAtPoint:(CGPoint)arg1 ;
-(void)setRouteContext:(id)arg1 ;
@end

