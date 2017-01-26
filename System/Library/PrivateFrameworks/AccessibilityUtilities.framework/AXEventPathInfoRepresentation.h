/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AXEventPathInfoRepresentation : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _pathIndex;
	unsigned char _pathIdentity;
	unsigned char _pathProximity;
	unsigned _pathWindowContextID;
	float _pathPressure;
	float _pathMajorRadius;
	float _pathMinorRadius;
	float _pathMajorRadiusTolerance;
	float _pathTwist;
	float _pathQuality;
	float _pathDensity;
	unsigned _pathEventMask;
	float _orbValue;
	unsigned _transducerType;
	float _altitude;
	float _azimuth;
	float _barrelPressure;
	unsigned _willUpdateMask;
	unsigned _didUpdateMask;
	void* _pathWindow;
	CGPoint _pathLocation;

}

@property (assign,nonatomic) unsigned char pathIndex;                     //@synthesize pathIndex=_pathIndex - In the implementation block
@property (assign,nonatomic) unsigned char pathIdentity;                  //@synthesize pathIdentity=_pathIdentity - In the implementation block
@property (assign,nonatomic) CGPoint pathLocation;                        //@synthesize pathLocation=_pathLocation - In the implementation block
@property (assign,nonatomic) unsigned pathWindowContextID;                //@synthesize pathWindowContextID=_pathWindowContextID - In the implementation block
@property (assign,nonatomic) unsigned char pathProximity;                 //@synthesize pathProximity=_pathProximity - In the implementation block
@property (assign,nonatomic) float pathPressure;                          //@synthesize pathPressure=_pathPressure - In the implementation block
@property (assign,nonatomic) float pathMajorRadius;                       //@synthesize pathMajorRadius=_pathMajorRadius - In the implementation block
@property (assign,nonatomic) float pathMinorRadius;                       //@synthesize pathMinorRadius=_pathMinorRadius - In the implementation block
@property (assign,nonatomic) float pathMajorRadiusTolerance;              //@synthesize pathMajorRadiusTolerance=_pathMajorRadiusTolerance - In the implementation block
@property (assign,nonatomic) float pathTwist;                             //@synthesize pathTwist=_pathTwist - In the implementation block
@property (assign,nonatomic) float pathQuality;                           //@synthesize pathQuality=_pathQuality - In the implementation block
@property (assign,nonatomic) float pathDensity;                           //@synthesize pathDensity=_pathDensity - In the implementation block
@property (assign,nonatomic) unsigned pathEventMask;                      //@synthesize pathEventMask=_pathEventMask - In the implementation block
@property (assign,nonatomic) float orbValue;                              //@synthesize orbValue=_orbValue - In the implementation block
@property (assign,nonatomic) unsigned transducerType;                     //@synthesize transducerType=_transducerType - In the implementation block
@property (assign,nonatomic) float altitude;                              //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) float azimuth;                               //@synthesize azimuth=_azimuth - In the implementation block
@property (assign,nonatomic) float barrelPressure;                        //@synthesize barrelPressure=_barrelPressure - In the implementation block
@property (assign,nonatomic) unsigned willUpdateMask;                     //@synthesize willUpdateMask=_willUpdateMask - In the implementation block
@property (assign,nonatomic) unsigned didUpdateMask;                      //@synthesize didUpdateMask=_didUpdateMask - In the implementation block
@property (assign,nonatomic) void* pathWindow;                            //@synthesize pathWindow=_pathWindow - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)representationWithPathInfo:(SCD_Struct_AX12*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)pathMajorRadius;
-(unsigned char)pathIndex;
-(float)altitude;
-(void)setAltitude:(float)arg1 ;
-(float)azimuth;
-(CGPoint)pathLocation;
-(unsigned)pathWindowContextID;
-(void)setPathIndex:(unsigned char)arg1 ;
-(void)setPathIdentity:(unsigned char)arg1 ;
-(void)setPathProximity:(unsigned char)arg1 ;
-(void)setPathPressure:(float)arg1 ;
-(void)setPathMajorRadius:(float)arg1 ;
-(void)setPathLocation:(CGPoint)arg1 ;
-(void)setPathWindowContextID:(unsigned)arg1 ;
-(void)setPathWindow:(void*)arg1 ;
-(unsigned char)pathIdentity;
-(unsigned char)pathProximity;
-(float)pathPressure;
-(void*)pathWindow;
-(float)pathMajorRadiusTolerance;
-(void)setPathMajorRadiusTolerance:(float)arg1 ;
-(float)pathTwist;
-(void)setPathTwist:(float)arg1 ;
-(float)pathMinorRadius;
-(void)setPathMinorRadius:(float)arg1 ;
-(float)pathQuality;
-(void)setPathQuality:(float)arg1 ;
-(float)pathDensity;
-(void)setPathDensity:(float)arg1 ;
-(unsigned)pathEventMask;
-(void)setPathEventMask:(unsigned)arg1 ;
-(float)orbValue;
-(void)setOrbValue:(float)arg1 ;
-(unsigned)transducerType;
-(void)setTransducerType:(unsigned)arg1 ;
-(void)setAzimuth:(float)arg1 ;
-(float)barrelPressure;
-(void)setBarrelPressure:(float)arg1 ;
-(unsigned)willUpdateMask;
-(void)setWillUpdateMask:(unsigned)arg1 ;
-(unsigned)didUpdateMask;
-(void)setDidUpdateMask:(unsigned)arg1 ;
-(void)writeToPathInfo:(SCD_Struct_AX12*)arg1 ;
-(id)_tabularDescription;
@end

