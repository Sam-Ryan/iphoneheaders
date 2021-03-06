/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticExtensions/DEAttachmentItem.h>

@class UIImage;

@interface DEAttachmentVideo : DEAttachmentItem {

	UIImage* _thumbnail;

}

@property (nonatomic,retain) UIImage * thumbnail;              //@synthesize thumbnail=_thumbnail - In the implementation block
+(id)attachmentVideoWithURL:(id)arg1 ;
+(id)attachmentVideoWithAssetURL:(id)arg1 andThumbnail:(id)arg2 ;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
-(id)generateThumbnailFromURL:(id)arg1 ;
@end

