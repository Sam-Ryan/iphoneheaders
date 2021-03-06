/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class CUIPSDImageRef;

@interface CUIPSDLayerBaseRef : NSObject {

	CUIPSDImageRef* _imageRef;
	unsigned _layerIndex;

}

@property (readonly) CGRect bounds; 
@property (readonly) BOOL visibility; 
@property (readonly) double opacity; 
@property (readonly) double fillOpacity; 
@property (readonly) int blendMode; 
@property (readonly) BOOL hasLayerMask; 
@property (readonly) BOOL hasVectorMask; 
-(CPSDLayerRecord*)_psdLayerRecord;
-(BOOL)hasVectorMask;
-(BOOL)hasLayerMask;
-(id)_psdImageRef;
-(BOOL)isLayerGroup;
-(double)fillOpacity;
-(id)layerMaskRef;
-(id)vectorMaskRef;
-(CGImageRef)_createMaskFromAlphaChannel:(long long)arg1 ;
-(CGRect)bounds;
-(id)name;
-(double)opacity;
-(int)blendMode;
-(BOOL)visibility;
@end

