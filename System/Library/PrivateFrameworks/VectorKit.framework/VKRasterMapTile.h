/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKRasterMapTile : NSObject {

	shared_ptr<ggl::BitmapDataBase>* _bitmapData;
	VKTileKey _superTileKey;
	VKTileKey _finalTileKey;
	double _scale;
	CGImageRef _image;

}

@property (nonatomic,readonly) VKRasterTileKey tileKey; 
-(CGImageRef)_image;
-(void)dealloc;
-(id)tileForKey:(const VKRasterTileKey*)arg1 ;
-(VKRasterTileKey)tileKey;
-(BOOL)writeImageToFile:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)imageDataInFormat:(unsigned long long)arg1 ;
-(id)initWithBitmapData:(shared_ptr<ggl::BitmapDataBase>*)arg1 tileKey:(const VKTileKey*)arg2 scale:(double)arg3 ;
-(void)foreachTileOfSize:(unsigned)arg1 perform:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithBitmapData:(shared_ptr<ggl::BitmapDataBase>*)arg1 superKey:(const VKTileKey*)arg2 finalKey:(const VKTileKey*)arg3 scale:(double)arg4 ;
-(id)imageDataInFormat:(unsigned long long)arg1 compressionLevel:(double)arg2 ;
@end

