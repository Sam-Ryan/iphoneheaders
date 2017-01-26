/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpriteKit/SpriteKit-Structs.h>
@class SKPhysicsBody;

@interface SKPhysicsContact : NSObject {

	SKPhysicsBody* _bodyA;
	SKPhysicsBody* _bodyB;
	double _collisionImpulse;
	CGPoint _contactPoint;
	CGVector _contactNormal;

}

@property (nonatomic,readonly) SKPhysicsBody * bodyA;                //@synthesize bodyA=_bodyA - In the implementation block
@property (nonatomic,readonly) SKPhysicsBody * bodyB;                //@synthesize bodyB=_bodyB - In the implementation block
@property (nonatomic,readonly) CGPoint contactPoint;                 //@synthesize contactPoint=_contactPoint - In the implementation block
@property (nonatomic,readonly) CGVector contactNormal;               //@synthesize contactNormal=_contactNormal - In the implementation block
@property (nonatomic,readonly) double collisionImpulse;              //@synthesize collisionImpulse=_collisionImpulse - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)copyWithZone:(NSZone*)arg1 ;
-(SKPhysicsBody *)bodyA;
-(SKPhysicsBody *)bodyB;
-(CGPoint)contactPoint;
-(CGVector)contactNormal;
-(double)collisionImpulse;
@end

