/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKRoadSignArtwork : NSObject {

	CTLineRef _line;
	long long _orientation;
	BOOL _onRoute;
	float _contentScale;
	float _scale;
	CGSize _layoutSize;

}
-(void)dealloc;
-(id)image;
-(void)_updateLayoutSize;
-(Box<float, 2>)localRenderBounds;
-(Matrix<float, 2, 1>)offsetPixelForPixel:(Matrix<float, 2, 1>)arg1 ;
-(id)initWithString:(id)arg1 orientation:(long long)arg2 contentScale:(double)arg3 scale:(double)arg4 onRoute:(BOOL)arg5 ;
-(Box<float, 2>)localCollisionBounds;
@end

