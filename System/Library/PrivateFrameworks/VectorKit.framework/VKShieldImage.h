/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKImage.h>

@interface VKShieldImage : VKImage {

	CGPoint _center;

}

@property (readonly) CGPoint center;              //@synthesize center=_center - In the implementation block
-(CGPoint)center;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 usedAsTextureAndImage:(BOOL)arg3 centerPoint:(CGPoint)arg4 ;
@end

