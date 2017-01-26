/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:36 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKImageAttachmentItem.h>

@class NSURL;

@interface CKAnimatedImageAttachmentItem : CKImageAttachmentItem {

	NSURL* _animatedPreviewURL;
	CGSize _imageSize;

}

@property (nonatomic,retain) NSURL * animatedPreviewURL;              //@synthesize animatedPreviewURL=_animatedPreviewURL - In the implementation block
@property (assign) CGSize imageSize;                                  //@synthesize imageSize=_imageSize - In the implementation block
+(BOOL)shouldScaleUpPreview;
+(id)UTITypes;
-(CGSize)size;
-(void)dealloc;
-(CGSize)imageSize;
-(void)setImageSize:(CGSize)arg1 ;
-(void)generatePreviewWithCompletion:(/*^block*/id)arg1 ;
-(NSURL *)animatedPreviewURL;
-(id)_savedPreviewFromURL:(id)arg1 ;
-(id)_newImageData;
-(id)generateThumbnailsForWidth:(double)arg1 withImageData:(id)arg2 ;
-(id)generateAnimatedPreviewFromThumbnails:(id)arg1 width:(double)arg2 withImageData:(id)arg3 ;
-(id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 ;
-(void)setAnimatedPreviewURL:(NSURL *)arg1 ;
@end

