/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKObstacle.h>

@interface GKCircleObstacle : GKObstacle {

	SphericalObstacle* _obstacle;

}

@property (assign,nonatomic) float radius; 
@property (assign,nonatomic)  position; 
+(id)obstacleWithRadius:(float)arg1 ;
-(id)init;
-(void)setPosition:;
-()position;
-(id)initWithRadius:(float)arg1 ;
-(float)radius;
-(void)setRadius:(float)arg1 ;
-(Obstacle*)obstacle;
@end

