/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface BBThumbnailSizeConstraints : NSObject <NSSecureCoding> {

	float _fixedWidth;
	float _fixedHeight;
	float _fixedDimension;
	float _minAspectRatio;
	float _maxAspectRatio;
	float _thumbnailScale;
	long long _constraintType;

}

@property (assign,nonatomic) long long constraintType;              //@synthesize constraintType=_constraintType - In the implementation block
@property (assign,nonatomic) float fixedWidth;                      //@synthesize fixedWidth=_fixedWidth - In the implementation block
@property (assign,nonatomic) float fixedHeight;                     //@synthesize fixedHeight=_fixedHeight - In the implementation block
@property (assign,nonatomic) float fixedDimension;                  //@synthesize fixedDimension=_fixedDimension - In the implementation block
@property (assign,nonatomic) float minAspectRatio;                  //@synthesize minAspectRatio=_minAspectRatio - In the implementation block
@property (assign,nonatomic) float maxAspectRatio;                  //@synthesize maxAspectRatio=_maxAspectRatio - In the implementation block
@property (assign,nonatomic) float thumbnailScale;                  //@synthesize thumbnailScale=_thumbnailScale - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)areReasonable;
-(long long)constraintType;
-(float)minAspectRatio;
-(float)fixedWidth;
-(float)fixedDimension;
-(void)setConstraintType:(long long)arg1 ;
-(void)setFixedWidth:(float)arg1 ;
-(void)setFixedDimension:(float)arg1 ;
-(void)setMinAspectRatio:(float)arg1 ;
-(void)setThumbnailScale:(float)arg1 ;
-(float)thumbnailScale;
-(void)setFixedHeight:(float)arg1 ;
-(float)fixedHeight;
-(float)maxAspectRatio;
-(void)setMaxAspectRatio:(float)arg1 ;
@end

