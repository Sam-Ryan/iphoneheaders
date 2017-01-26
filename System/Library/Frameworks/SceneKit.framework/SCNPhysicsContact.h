/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNNode;

@interface SCNPhysicsContact : NSObject {

	SCNNode* _nodeA;
	SCNNode* _nodeB;
	SCNVector3 _contactPoint;
	SCNVector3 _contactNormal;
	double _collisionImpulse;
	double _distance;
	long long _updateCount;

}

@property (nonatomic,readonly) SCNNode * nodeA; 
@property (nonatomic,readonly) SCNNode * nodeB; 
@property (nonatomic,readonly) SCNVector3 contactPoint; 
@property (nonatomic,readonly) SCNVector3 contactNormal; 
@property (nonatomic,readonly) double collisionImpulse; 
@property (nonatomic,readonly) double penetrationDistance; 
+(id)_contactWithManifold:(const btPersistentManifold*)arg1 index:(long long)arg2 ;
-(void)dealloc;
-(id)description;
-(SCNVector3)contactPoint;
-(void)_setupWithManifold:(const btPersistentManifold*)arg1 index:(long long)arg2 point:(const btManifoldPoint*)arg3 ;
-(void)_fillNodeA:(id)arg1 nodeB:(id)arg2 contactPoint:(SCNVector3)arg3 collisionImpulse:(SCNVector3)arg4 distance:(double)arg5 ;
-(void)_fillNodeA:(id)arg1 nodeB:(id)arg2 ;
-(SCNNode *)nodeA;
-(SCNNode *)nodeB;
-(SCNVector3)contactNormal;
-(double)collisionImpulse;
-(double)penetrationDistance;
-(void)_prepareUpdate;
-(BOOL)_shouldPostUpdate;
@end

