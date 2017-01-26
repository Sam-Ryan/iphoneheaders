/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@class AVMetadataFaceObject;

@interface CAMFaceResult : NSObject {

	long long _identifier;
	double _rollAngle;
	AVMetadataFaceObject* _underlyingFaceObject;
	CGRect _bounds;

}

@property (nonatomic,readonly) long long identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                                            //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) double rollAngle;                                         //@synthesize rollAngle=_rollAngle - In the implementation block
@property (nonatomic,readonly) AVMetadataFaceObject * underlyingFaceObject;              //@synthesize underlyingFaceObject=_underlyingFaceObject - In the implementation block
-(CGRect)bounds;
-(id)description;
-(long long)identifier;
-(double)rollAngle;
-(AVMetadataFaceObject *)underlyingFaceObject;
-(id)initWithFaceObject:(id)arg1 ;
-(id)burstMetadataRepresentation;
@end
