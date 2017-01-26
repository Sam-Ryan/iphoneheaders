/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@class NSMutableArray;

@interface BLImagePatchList : NSObject {

	CGImageRef _baseImage;
	CGSize _size;
	NSMutableArray* _patchArray;

}
+(id)imagePatchListWithSingleImage:(CGImageRef)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(long long)count;
-(id)description;
-(id)initWithImage:(CGImageRef)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)addPatch:(id)arg1 ;
-(void)removeAllPatches;
@end

