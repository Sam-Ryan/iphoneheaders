/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface QLDismissTrackingInformation : NSObject <NSSecureCoding> {

	double _progress;
	double _animationDuration;
	double _animationSpringDamping;
	CGPoint _center;
	CGRect _bounds;
	PHDisplayVelocity _velocity;
	CGAffineTransform _transform;

}

@property (assign) double progress;                            //@synthesize progress=_progress - In the implementation block
@property (assign) CGPoint center;                             //@synthesize center=_center - In the implementation block
@property (assign) CGRect bounds;                              //@synthesize bounds=_bounds - In the implementation block
@property (assign) CGAffineTransform transform;                //@synthesize transform=_transform - In the implementation block
@property (assign) PHDisplayVelocity velocity;                 //@synthesize velocity=_velocity - In the implementation block
@property (assign) double animationDuration;                   //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign) double animationSpringDamping;              //@synthesize animationSpringDamping=_animationSpringDamping - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dismissTrackingInformationFromTracker:(id)arg1 ;
-(CGRect)bounds;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setVelocity:(PHDisplayVelocity)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(CGPoint)center;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(void)setCenter:(CGPoint)arg1 ;
-(PHDisplayVelocity)velocity;
-(void)setProgress:(double)arg1 ;
-(double)animationDuration;
-(double)progress;
-(void)setAnimationSpringDamping:(double)arg1 ;
-(double)animationSpringDamping;
@end

