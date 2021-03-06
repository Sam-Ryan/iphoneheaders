/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/VKLabelNavFeature.h>

@class NSString, VKLabelTile, VKLabelNavJunction, VKLabelNavRoadLabel;

@interface VKLabelNavRoad : NSObject <VKLabelNavFeature> {

	VKLabelTile* _tile;
	SCD_Struct_VK472* _data;
	unsigned long long _vertexIndexA;
	unsigned long long _vertexIndexB;
	SCD_Struct_VK473* _junctionA;
	SCD_Struct_VK473* _junctionB;
	VKLabelNavJunction* _navJunctionA;
	vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > >* _simplifiedPoints;
	Matrix<float, 2, 1> _direction;
	BOOL _isRoadLabelUnique;
	BOOL _isOnRoute;
	BOOL _isStartOfRoadName;
	BOOL _isInGuidance;
	BOOL _isGuidanceStepStart;
	BOOL _areLabelsDisabled;
	PolylineCoordinate _routeOffset;
	float _routeCrossProduct;
	long long _intraRoadPriority;
	double _length;
	NSString* _name;
	NSString* _shieldDisplayGroup;
	NSString* _shieldGroup;
	VKLabelNavRoadLabel* _roadSign;
	VKLabelNavRoadLabel* _roadShield;
	BOOL _areNavStylesInitialized;
	BOOL _hasVisibleSigns;
	BOOL _hasVisibleShields;
	BOOL _suppressRoadSignIfShieldPresent;

}

@property (nonatomic,readonly) VKLabelTile * tile;                                //@synthesize tile=_tile - In the implementation block
@property (nonatomic,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) const char* cstrName; 
@property (nonatomic,readonly) NSString * shieldDisplayGroup; 
@property (nonatomic,readonly) NSString * shieldGroup; 
@property (nonatomic,readonly) SCD_Struct_VK473* junctionB;                       //@synthesize junctionB=_junctionB - In the implementation block
@property (nonatomic,readonly) VKLabelNavJunction * navJunctionA;                 //@synthesize navJunctionA=_navJunctionA - In the implementation block
@property (assign,nonatomic) Matrix<float direction;                              //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) BOOL isOnRoute;                                      //@synthesize isOnRoute=_isOnRoute - In the implementation block
@property (assign,nonatomic) BOOL isStartOfRoadName;                              //@synthesize isStartOfRoadName=_isStartOfRoadName - In the implementation block
@property (assign,nonatomic) BOOL isInGuidance;                                   //@synthesize isInGuidance=_isInGuidance - In the implementation block
@property (assign,nonatomic) BOOL isGuidanceStepStart;                            //@synthesize isGuidanceStepStart=_isGuidanceStepStart - In the implementation block
@property (assign,nonatomic) BOOL areLabelsDisabled;                              //@synthesize areLabelsDisabled=_areLabelsDisabled - In the implementation block
@property (assign,nonatomic) PolylineCoordinate routeOffset;                      //@synthesize routeOffset=_routeOffset - In the implementation block
@property (assign,nonatomic) float routeCrossProduct;                             //@synthesize routeCrossProduct=_routeCrossProduct - In the implementation block
@property (assign,nonatomic) long long intraRoadPriority;                         //@synthesize intraRoadPriority=_intraRoadPriority - In the implementation block
@property (assign,nonatomic) BOOL isRoadLabelUnique;                              //@synthesize isRoadLabelUnique=_isRoadLabelUnique - In the implementation block
@property (nonatomic,readonly) BOOL isAwayFromRoute; 
@property (nonatomic,readonly) BOOL suppressRoadSignIfShieldPresent;              //@synthesize suppressRoadSignIfShieldPresent=_suppressRoadSignIfShieldPresent - In the implementation block
@property (nonatomic,readonly) BOOL isRamp; 
@property (nonatomic,readonly) BOOL isOnewayToJunction; 
@property (nonatomic,readonly) int roadClass; 
@property (nonatomic,readonly) long long roadSignAlignment; 
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(double)length;
-(void)setDirection:(Matrix<float)arg1 ;
-(Matrix<float)direction;
-(BOOL)hasShield;
-(BOOL)isRamp;
-(int)roadClass;
-(PolylineCoordinate)routeOffset;
-(VKLabelTile *)tile;
-(id)labelWithType:(BOOL)arg1 ;
-(BOOL)isOnRoute;
-(BOOL)isRoadLabelUnique;
-(float)_findRoadOffsetForDistanceToRay:(float)arg1 rayStart:(VKPoint)arg2 rayVector:(Matrix<float, 2, 1>)arg3 roadGraph:(id)arg4 ;
-(id)_newLabelWithNavContext:(NavContext*)arg1 isShieldLabel:(BOOL)arg2 worldPoint:(VKPoint)arg3 alignment:(long long)arg4 ;
-(SCD_Struct_VK473*)junctionB;
-(BOOL)_findLabelAnchorPoint:(VKPoint*)arg1 isShieldLabel:(BOOL)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 roadGraph:(id)arg6 ;
-(BOOL)_worldPointForRoadOffset:(float)arg1 worldPoint:(VKPoint*)arg2 ;
-(void)_worldRoadPoints:(vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > >*)arg1 ;
-(BOOL)isAwayFromRoute;
-(void)clearRoadSign;
-(long long)roadSignAlignment;
-(NSString *)shieldGroup;
-(BOOL)hasVisibleShields;
-(void)setAreLabelsDisabled:(BOOL)arg1 ;
-(BOOL)hasVisibleSigns;
-(BOOL)suppressRoadSignIfShieldPresent;
-(BOOL)isInGuidance;
-(VKLabelNavJunction *)navJunctionA;
-(void)setIsGuidanceStepStart:(BOOL)arg1 ;
-(BOOL)areLabelsDisabled;
-(void)setIsRoadLabelUnique:(BOOL)arg1 ;
-(BOOL)isGuidanceStepStart;
-(void)recreateRoadSignWithAlignment:(long long)arg1 navContext:(NavContext*)arg2 ;
-(void)prepareStyleVarsWithContext:(NavContext*)arg1 ;
-(long long)intraRoadPriority;
-(BOOL)isStartOfRoadName;
-(BOOL)isOnewayToJunction;
-(void)setIsInGuidance:(BOOL)arg1 ;
-(void)setIsStartOfRoadName:(BOOL)arg1 ;
-(void)createLabelWithNavContext:(NavContext*)arg1 isShieldLabel:(BOOL)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 minRouteDistance:(float)arg6 roadGraph:(id)arg7 ;
-(void)setIntraRoadPriority:(long long)arg1 ;
-(void)setRouteCrossProduct:(float)arg1 ;
-(float)routeCrossProduct;
-(void)setIsOnRoute:(BOOL)arg1 ;
-(id)initWithRoadEdge:(const SCD_Struct_VK476*)arg1 navJunctionA:(id)arg2 routeOffset:(PolylineCoordinate)arg3 tile:(id)arg4 ;
-(BOOL)matchesRoadEdge:(const SCD_Struct_VK476*)arg1 ;
-(NSString *)shieldDisplayGroup;
-(const char*)cstrName;
-(void)getRoadEdge:(SCD_Struct_VK476*)arg1 ;
-(BOOL)matchesRoad:(id)arg1 ;
-(void)appendSimplifiedWorldRoadPoints:(vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > >*)arg1 ;
-(void)setRouteOffset:(PolylineCoordinate)arg1 ;
@end

