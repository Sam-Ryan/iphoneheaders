/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSValue : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic,readonly) PUDisplayVelocity pu_displayVelocityValue; 
@property (readonly) SCD_Struct_NS55 MKCoordinateValue; 
@property (readonly) SCD_Struct_NS55 MKCoordinateSpanValue; 
@property (readonly) SCD_Struct_NS60 UIKBHandwritingPointValue; 
@property (readonly) CATransform3D CATransform3DValue; 
@property (readonly) const char* objCType; 
+(id)valueWithSCNMatrix4:(SCNMatrix4)arg1 ;
+(id)SCN_valueWithCGPoint:(CGPoint)arg1 ;
+(id)valueWithSCNVector3:(SCNVector3)arg1 ;
+(id)valueWithSCNVector4:(SCNVector4)arg1 ;
+(id)valueWithHKLinearTransform:(HKLinearTransform)arg1 ;
+(id)valueWithHKGraphSeriesDataBlockPath:(timespec)arg1 ;
+(id)pu_valueWithDisplayVelocity:(PUDisplayVelocity)arg1 ;
+(id)valueWithMKCoordinateSpan:(SCD_Struct_NS55)arg1 ;
+(id)valueWithMKCoordinate:(SCD_Struct_NS55)arg1 ;
+(id)_mapkit_valueWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)_mapkit_valueWithCGPoint:(CGPoint)arg1 ;
+(id)valueWithML3NameOrder:(timespec)arg1 ;
+(id)valueWithCoordinate:(SCD_Struct_NS55)arg1 ;
+(id)_geo_valueWithGEOPlaceDataComponentKey:(_GEOPlaceDataComponentKey)arg1 ;
+(id)valueWithCGRect:(CGRect)arg1 ;
+(id)akValueWithPoint:(CGPoint)arg1 ;
+(id)akValueWithSize:(CGSize)arg1 ;
+(id)akValueWithRect:(CGRect)arg1 ;
+(id)valueWithCMTimeRange:(SCD_Struct_NS12)arg1 ;
+(id)valueWithCMTimeMapping:(SCD_Struct_NS13)arg1 ;
+(id)valueWithCMTime:(SCD_Struct_NS11)arg1 ;
+(id)valueWithUIKBHandwritingPoint:(SCD_Struct_NS60)arg1 ;
+(id)valueWithCGRect:(CGRect)arg1 ;
+(id)valueWithCGSize:(CGSize)arg1 ;
+(id)valueWithCGPoint:(CGPoint)arg1 ;
+(id)valueWithCGVector:(CGVector)arg1 ;
+(id)valueWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)valueWithUIEdgeInsets:(UIEdgeInsets)arg1 ;
+(id)valueWithUIOffset:(UIOffset)arg1 ;
+(id)_web_valueWithCGRect:(CGRect)arg1 ;
+(id)valueWithCAPoint3D:(CAPoint3D)arg1 ;
+(id)valueWithCATransform3D:(CATransform3D)arg1 ;
+(id)valueWithCAColorMatrix:(CAColorMatrix)arg1 ;
+(id)valueWithCGPoint:(CGPoint)arg1 ;
+(id)bs_valueWithCGRect:(CGRect)arg1 ;
+(id)valueWithWeakObject:(id)arg1 ;
+(id)valueWithEdgeInsets:(NSEdgeInsets)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)valueWithBytes:(const void*)arg1 objCType:(const char*)arg2 ;
+(BOOL)supportsSecureCoding;
+(void)initialize;
+(id)valueWithSize:(CGSize)arg1 ;
+(id)valueWithRect:(CGRect)arg1 ;
+(id)valueWithNonretainedObject:(id)arg1 ;
+(id)valueWithPointer:(const void*)arg1 ;
+(id)valueWithRange:(NSRange)arg1 ;
+(id)valueWithPoint:(CGPoint)arg1 ;
+(id)value:(const void*)arg1 withObjCType:(const char*)arg2 ;
-(SCNMatrix4)SCNMatrix4Value;
-(CGPoint)SCN_CGPointValue;
-(SCNVector3)SCNVector3Value;
-(SCNVector4)SCNVector4Value;
-(HKLinearTransform)HKLinearTransformValue;
-(id)hk_midPointToValue:(id)arg1 percentage:(double)arg2 ;
-(BOOL)hk_animatable;
-(BOOL)_hk_isCGPoint;
-(BOOL)_hk_isHKLinearTransform;
-(id)_hk_CGPointMidPointToValue:(id)arg1 percentage:(double)arg2 ;
-(id)_hk_HKLinearTransformMidPointToValue:(id)arg1 percentage:(double)arg2 ;
-(timespec)HKGraphSeriesDataBlockPathValue;
-(PUDisplayVelocity)pu_displayVelocityValue;
-(SCD_Struct_NS55)MKCoordinateValue;
-(SCD_Struct_NS55)MKCoordinateSpanValue;
-(CGAffineTransform)_mapkit_CGAffineTransformValue;
-(CGRect)_mapkit_CGRectValue;
-(CGPoint)_mapkit_CGPointValue;
-(CGRect)CADoubleRectValue;
-(id)_mapkit_initWithCGRect:(CGRect)arg1 ;
-(id)_mapkit_initWithCADoubleRect:(CGRect)arg1 ;
-(id)_mapkit_initWithCADoublePoint:(CGPoint)arg1 ;
-(id)_mapkit_initWithMKMapRect:(SCD_Struct_NS61)arg1 ;
-(SCD_Struct_NS61)MKMapRectValue;
-(CGPoint)CADoublePointValue;
-(id)_mapkit_initWithZoomRegion:(SCD_Struct_NS62)arg1 ;
-(SCD_Struct_NS62)_mapkit_zoomRegionValue;
-(id)_mapkit_initWithCGPoint:(CGPoint)arg1 ;
-(timespec)ML3NameOrderValue;
-(id)cplFullDescription;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(id)initWithCPLArchiver:(id)arg1 ;
-(SCD_Struct_NS55)coordinateValue;
-(_GEOPlaceDataComponentKey)_geo_GEOPlaceDataComponentKeyValue;
-(CGRect)CGRectValue;
-(CGPoint)akPointValue;
-(CGSize)akSizeValue;
-(CGRect)akRectValue;
-(SCD_Struct_NS13)CMTimeMappingValue;
-(SCD_Struct_NS12)CMTimeRangeValue;
-(SCD_Struct_NS11)CMTimeValue;
-(SCD_Struct_NS60)UIKBHandwritingPointValue;
-(CGAffineTransform)CGAffineTransformValue;
-(CGRect)CGRectValue;
-(CGSize)CGSizeValue;
-(CGPoint)CGPointValue;
-(UIEdgeInsets)UIEdgeInsetsValue;
-(CGVector)CGVectorValue;
-(UIOffset)UIOffsetValue;
-(CGRect)CGRectValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLType;
-(id)CA_roundToIntegerFromValue:(id)arg1 ;
-(id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator*)arg4 ;
-(id)CA_addValue:(id)arg1 multipliedBy:(int)arg2 ;
-(double)CA_distanceToValue:(id)arg1 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(Object*)CA_copyRenderValue;
-(CAPoint3D)CAPoint3DValue;
-(CATransform3D)CATransform3DValue;
-(CAColorMatrix)CAColorMatrixValue;
-(CGPoint)CGPointValue;
-(CGRect)bs_CGRectValue;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(BOOL)isNSValue__;
-(BOOL)_matchType:(const char*)arg1 size:(unsigned long long)arg2 ;
-(id)weakObjectValue;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)rangeValue;
-(void)getValue:(void*)arg1 ;
-(Class)classForCoder;
-(CGSize)sizeValue;
-(CGRect)rectValue;
-(const char*)objCType;
-(BOOL)isEqualToValue:(id)arg1 ;
-(CGPoint)pointValue;
-(void*)pointerValue;
-(NSEdgeInsets)edgeInsetsValue;
-(id)initWithBytes:(const void*)arg1 objCType:(const char*)arg2 ;
-(id)nonretainedObjectValue;
@end

