/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, NSMutableArray, NSMutableSet;

@interface VKMapDebugView : UIView {

	NSString* _debugMessage;
	NSMutableArray* _buildingPaths;
	NSMutableSet* _intersectionPoints;
	NSMutableArray* _poiPaths;
	NSMutableArray* _roadPaths;
	NSMutableArray* _roadPoints;
	CGPoint _currentPoint;
	CGPoint _frontierPoint;

}

@property (nonatomic,copy) NSString * debugMessage;                          //@synthesize debugMessage=_debugMessage - In the implementation block
@property (nonatomic,retain) NSMutableArray * buildingPaths;                 //@synthesize buildingPaths=_buildingPaths - In the implementation block
@property (assign,nonatomic) CGPoint currentPoint;                           //@synthesize currentPoint=_currentPoint - In the implementation block
@property (assign,nonatomic) CGPoint frontierPoint;                          //@synthesize frontierPoint=_frontierPoint - In the implementation block
@property (nonatomic,retain) NSMutableSet * intersectionPoints;              //@synthesize intersectionPoints=_intersectionPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * poiPaths;                      //@synthesize poiPaths=_poiPaths - In the implementation block
@property (nonatomic,retain) NSMutableArray * roadPaths;                     //@synthesize roadPaths=_roadPaths - In the implementation block
@property (nonatomic,retain) NSMutableArray * roadPoints;                    //@synthesize roadPoints=_roadPoints - In the implementation block
+(id)sharedInstance;
-(void)_addValidPaths:(id)arg1 array:(id)arg2 ;
-(void)setBuildingPaths:(NSMutableArray *)arg1 ;
-(void)setCurrentPoint:(CGPoint)arg1 frontierPoint:(CGPoint)arg2 ;
-(void)setFrontierPoint:(CGPoint)arg1 ;
-(NSMutableSet *)intersectionPoints;
-(void)setCurrentPoint:(CGPoint)arg1 ;
-(void)setRoadPaths:(NSMutableArray *)arg1 ;
-(void)setRoadPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)buildingPaths;
-(NSMutableArray *)roadPoints;
-(NSMutableArray *)roadPaths;
-(void)addPOIPaths:(id)arg1 ;
-(CGPoint)frontierPoint;
-(NSMutableArray *)poiPaths;
-(void)addRoadPoints:(id)arg1 ;
-(void)removePointsAndPaths;
-(void)addBuildingPaths:(id)arg1 ;
-(void)addRoadPaths:(id)arg1 ;
-(void)addIntersectionPoints:(id)arg1 ;
-(void)setIntersectionPoints:(NSMutableSet *)arg1 ;
-(void)setPoiPaths:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(CGPoint)currentPoint;
-(void)_orientationDidChange:(id)arg1 ;
-(void)setDebugMessage:(NSString *)arg1 ;
-(NSString *)debugMessage;
@end

