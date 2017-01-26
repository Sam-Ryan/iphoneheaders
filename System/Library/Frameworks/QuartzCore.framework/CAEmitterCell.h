/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CAPropertyInfo.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/CAMediaTiming.h>

@class NSString, NSArray, NSDictionary;

@interface CAEmitterCell : NSObject <NSCopying, CAPropertyInfo, NSCoding, CAMediaTiming> {

	void** _attr[2];
	void* _state;
	unsigned _flags;

}

@property (copy) NSString * particleType; 
@property (assign) double orientationLatitude; 
@property (assign) double orientationLongitude; 
@property (assign) double orientationRange; 
@property (assign) double rotation; 
@property (assign) double rotationRange; 
@property (assign) float mass; 
@property (assign) float massRange; 
@property (copy) NSString * contentsFrameMode; 
@property (assign) unsigned contentsFrameCount; 
@property (assign) unsigned contentsFramesPerRow; 
@property (assign) float contentsFramesPerSecond; 
@property (copy) NSArray * emitterBehaviors; 
@property (copy) NSString * name; 
@property (getter=isEnabled) BOOL enabled; 
@property (assign) float birthRate; 
@property (assign) float lifetime; 
@property (assign) float lifetimeRange; 
@property (assign) double emissionLatitude; 
@property (assign) double emissionLongitude; 
@property (assign) double emissionRange; 
@property (assign) double velocity; 
@property (assign) double velocityRange; 
@property (assign) double xAcceleration; 
@property (assign) double yAcceleration; 
@property (assign) double zAcceleration; 
@property (assign) double scale; 
@property (assign) double scaleRange; 
@property (assign) double scaleSpeed; 
@property (assign) double spin; 
@property (assign) double spinRange; 
@property (assign) CGColorRef color; 
@property (assign) float redRange; 
@property (assign) float greenRange; 
@property (assign) float blueRange; 
@property (assign) float alphaRange; 
@property (assign) float redSpeed; 
@property (assign) float greenSpeed; 
@property (assign) float blueSpeed; 
@property (assign) float alphaSpeed; 
@property (retain) id contents; 
@property (assign) CGRect contentsRect; 
@property (assign) double contentsScale; 
@property (copy) NSString * minificationFilter; 
@property (copy) NSString * magnificationFilter; 
@property (assign) float minificationFilterBias; 
@property (copy) NSArray * emitterCells; 
@property (copy) NSDictionary * style; 
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) BOOL autoreverses; 
@property (copy) NSString * fillMode; 
+(id)properties;
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)emitterCell;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(NSString *)particleType;
-(float)massRange;
-(unsigned)contentsFrameCount;
-(unsigned)contentsFramesPerRow;
-(float)contentsFramesPerSecond;
-(NSString *)contentsFrameMode;
-(NSArray *)emitterBehaviors;
-(void)setParticleType:(NSString *)arg1 ;
-(void)setMassRange:(float)arg1 ;
-(void)setEmitterBehaviors:(NSArray *)arg1 ;
-(void)setContentsFrameMode:(NSString *)arg1 ;
-(void)setContentsFrameCount:(unsigned)arg1 ;
-(void)setContentsFramesPerRow:(unsigned)arg1 ;
-(void)setContentsFramesPerSecond:(float)arg1 ;
-(void)setMass:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)mass;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(double)orientationLatitude;
-(double)orientationLongitude;
-(double)orientationRange;
-(double)rotationRange;
-(float)blueSpeed;
-(void)setOrientationLatitude:(double)arg1 ;
-(void)setOrientationLongitude:(double)arg1 ;
-(void)setOrientationRange:(double)arg1 ;
-(void)setRotationRange:(double)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(void)setSpeed:(float)arg1 ;
-(void)setVelocity:(double)arg1 ;
-(double)duration;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setDuration:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(double)scale;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(NSDictionary *)style;
-(void)setStyle:(NSDictionary *)arg1 ;
-(id)contents;
-(float)speed;
-(double)timeOffset;
-(void)setTimeOffset:(double)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(float)repeatCount;
-(void)setFillMode:(NSString *)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setBeginTime:(double)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(void)setAutoreverses:(BOOL)arg1 ;
-(void)setMagnificationFilter:(NSString *)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(double)contentsScale;
-(void)setContentsScale:(double)arg1 ;
-(double)beginTime;
-(double)velocity;
-(void)setContents:(id)arg1 ;
-(void)setVelocityRange:(double)arg1 ;
-(double)velocityRange;
-(CGColorRef)color;
-(void)setColor:(CGColorRef)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(CGRect)contentsRect;
-(void)setMinificationFilter:(NSString *)arg1 ;
-(BOOL)autoreverses;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(NSString *)fillMode;
-(void)CA_prepareRenderValue;
-(float)alphaRange;
-(void)setAlphaRange:(float)arg1 ;
-(float)alphaSpeed;
-(void)setAlphaSpeed:(float)arg1 ;
-(float)birthRate;
-(void)setBirthRate:(float)arg1 ;
-(float)blueRange;
-(void)setBlueRange:(float)arg1 ;
-(void)setBlueSpeed:(float)arg1 ;
-(double)emissionLatitude;
-(void)setEmissionLatitude:(double)arg1 ;
-(double)emissionLongitude;
-(void)setEmissionLongitude:(double)arg1 ;
-(double)emissionRange;
-(void)setEmissionRange:(double)arg1 ;
-(NSArray *)emitterCells;
-(void)setEmitterCells:(NSArray *)arg1 ;
-(float)greenRange;
-(void)setGreenRange:(float)arg1 ;
-(float)greenSpeed;
-(void)setGreenSpeed:(float)arg1 ;
-(float)lifetime;
-(void)setLifetime:(float)arg1 ;
-(float)lifetimeRange;
-(void)setLifetimeRange:(float)arg1 ;
-(NSString *)magnificationFilter;
-(NSString *)minificationFilter;
-(float)minificationFilterBias;
-(void)setMinificationFilterBias:(float)arg1 ;
-(float)redRange;
-(void)setRedRange:(float)arg1 ;
-(float)redSpeed;
-(void)setRedSpeed:(float)arg1 ;
-(double)scaleRange;
-(void)setScaleRange:(double)arg1 ;
-(double)scaleSpeed;
-(void)setScaleSpeed:(double)arg1 ;
-(double)spin;
-(void)setSpin:(double)arg1 ;
-(double)spinRange;
-(void)setSpinRange:(double)arg1 ;
-(double)xAcceleration;
-(void)setXAcceleration:(double)arg1 ;
-(double)yAcceleration;
-(void)setYAcceleration:(double)arg1 ;
-(double)zAcceleration;
-(void)setZAcceleration:(double)arg1 ;
-(double)repeatDuration;
-(void)setRepeatDuration:(double)arg1 ;
@end

