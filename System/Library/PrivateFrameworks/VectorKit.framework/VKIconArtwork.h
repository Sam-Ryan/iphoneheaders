/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKImage, NSMutableArray;

@interface VKIconArtwork : NSObject {

	BOOL _hasIcon;
	VKImage* _image;
	double _contentScale;
	NSMutableArray* _completionHandlers;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double contentScale;              //@synthesize contentScale=_contentScale - In the implementation block
-(CGSize)size;
-(void)dealloc;
-(id)image;
-(double)contentScale;
-(void)_cleanUpAfterDrawing;
-(id)_newImage;
-(void)getImage:(/*^block*/id)arg1 ;
-(id)initWithImage:(CGImageRef)arg1 contentScale:(double)arg2 ;
@end

