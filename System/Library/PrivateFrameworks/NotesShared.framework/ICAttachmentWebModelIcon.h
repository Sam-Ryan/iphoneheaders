/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@class NSURL, UIImage;

@interface ICAttachmentWebModelIcon : NSObject {

	BOOL _scaleImageToIconSize;
	NSURL* _url;
	double _scale;
	UIImage* _image;
	CGSize _size;

}

@property (nonatomic,retain) NSURL * url;                            //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL scaleImageToIconSize;              //@synthesize scaleImageToIconSize=_scaleImageToIconSize - In the implementation block
@property (assign,nonatomic) CGSize size;                            //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                           //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) UIImage * image;                        //@synthesize image=_image - In the implementation block
-(CGSize)size;
-(void)setImage:(UIImage *)arg1 ;
-(id)description;
-(NSURL *)url;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(UIImage *)image;
-(void)setSize:(CGSize)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)scaleImageToIconSize;
-(id)initWithImageURL:(id)arg1 ;
-(id)initWithFallbackURL:(id)arg1 withSize:(CGSize)arg2 ;
-(id)initWithURL:(id)arg1 withSize:(CGSize)arg2 ;
-(void)setScaleImageToIconSize:(BOOL)arg1 ;
@end
