/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraKit/CameraKit-Structs.h>
@interface CMKTimelapseJPEGReader : NSObject
+(id)_decodeOptionsWithMaxPixelSize:(long long)arg1 applyTransform:(BOOL)arg2 useBGRA:(BOOL)arg3 ;
+(id)newDataFromFilePath:(id)arg1 ;
+(CVBufferRef)createPixelBufferFromData:(id)arg1 applyTransform:(BOOL)arg2 maxPixelSize:(long long)arg3 useBGRA:(BOOL)arg4 ;
+(CGImageRef)createCGImageFromData:(id)arg1 applyTransform:(BOOL)arg2 maxPixelSize:(long long)arg3 useBGRA:(BOOL)arg4 ;
@end

