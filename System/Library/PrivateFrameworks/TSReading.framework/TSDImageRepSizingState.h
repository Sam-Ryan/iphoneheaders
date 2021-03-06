/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSDImageProvider;

@interface TSDImageRepSizingState : NSObject {

	CGSize mDesiredSize;
	TSDImageProvider* mProvider;
	CGPathRef mMaskPath;
	BOOL mIncludesAdjustments;
	int mStatus;
	CGImageRef mSizedImage;
	long long mSizedImageOrientation;

}

@property (assign,nonatomic) CGSize desiredSize; 
@property (nonatomic,retain) TSDImageProvider * provider; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) CGImageRef sizedImage; 
@property (nonatomic,readonly) BOOL sizedImageHasMask; 
@property (assign,nonatomic) long long sizedImageOrientation; 
@property (nonatomic,readonly) CGPathRef maskPath; 
@property (assign,nonatomic) BOOL sizedImageIncludesAdjustments; 
-(CGPathRef)maskPath;
-(id)initWithDesiredSize:(CGSize)arg1 provider:(id)arg2 maskPath:(CGPathRef)arg3 ;
-(void)setSizedImageIncludesAdjustments:(BOOL)arg1 ;
-(void)generateSizedImage;
-(CGImageRef)sizedImage;
-(long long)sizedImageOrientation;
-(BOOL)sizedImageHasMask;
-(BOOL)sizedImageIncludesAdjustments;
-(void)setSizedImage:(CGImageRef)arg1 ;
-(void)setSizedImageOrientation:(long long)arg1 ;
-(void)dealloc;
-(CGSize)desiredSize;
-(void)setDesiredSize:(CGSize)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(TSDImageProvider *)provider;
-(void)setProvider:(TSDImageProvider *)arg1 ;
@end

