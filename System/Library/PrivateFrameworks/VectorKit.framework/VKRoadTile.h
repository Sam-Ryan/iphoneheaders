/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKVectorTile.h>

@class VKTrafficTile;

@interface VKRoadTile : VKVectorTile {

	VKTrafficTile* _trafficTile;
	unique_ptr<vk::RoadLayer, std::__1::default_delete<vk::RoadLayer> >* _roadLayer;
	unique_ptr<vk::PatternedLayer, std::__1::default_delete<vk::PatternedLayer> >* _patternedRibbonLayer;

}

@property (nonatomic,retain) VKTrafficTile * trafficTile;                         //@synthesize trafficTile=_trafficTile - In the implementation block
@property (nonatomic,readonly) RoadLayer* roadLayer; 
@property (nonatomic,readonly) PatternedLayer* patternedRibbonLayer; 
-(void)dealloc;
-(void)updateViewDependentStateIfNecessaryWithContext:(id)arg1 ;
-(VKTrafficTile *)trafficTile;
-(PatternedLayer*)patternedRibbonLayer;
-(RoadLayer*)roadLayer;
-(id)initWithKey:(const VKTileKey*)arg1 modelTile:(id)arg2 styleManager:(shared_ptr<gss::StyleManager>*)arg3 sharedResources:(id)arg4 contentScale:(double)arg5 device:(Device*)arg6 ;
-(void)setTrafficTile:(VKTrafficTile *)arg1 ;
-(void)buildGglMeshesWithDevice:(Device*)arg1 ;
-(void)addRoadRibbonTo:(unordered_map<vk::RoadBatchKey, std::__1::vector<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> > > >, std::__1::hash<vk::RoadBatchKey>, std::__1::equal_to<vk::RoadBatchKey>, std::__1::allocator<std::__1::pair<const vk::RoadBatchKey, std::__1::vector<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::RoadRibbon, std::__1::default_delete<vk::RoadRibbon> > > > > > >*)arg1 styleQuery:(shared_ptr<gss::StyleQuery>*)arg2 painterZ:(unsigned)arg3 numPoints:(unsigned long long)arg4 points:(Matrix<float, 2, 1>*)arg5 startCap:(BOOL)arg6 endCap:(BOOL)arg7 ;
-(void)addPatternedRibbonTo:(unordered_map<vk::PatternedBatchKey, std::__1::vector<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> > > >, std::__1::hash<vk::PatternedBatchKey>, std::__1::equal_to<vk::PatternedBatchKey>, std::__1::allocator<std::__1::pair<const vk::PatternedBatchKey, std::__1::vector<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::PatternedRibbon, std::__1::default_delete<vk::PatternedRibbon> > > > > > >*)arg1 styleQuery:(shared_ptr<gss::StyleQuery>*)arg2 painterZ:(unsigned)arg3 numPoints:(unsigned long long)arg4 points:(Matrix<float, 2, 1>*)arg5 ;
@end

