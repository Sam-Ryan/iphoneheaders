/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:05:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/UsageBundles/VideosUsage.bundle/VideosUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage, MPArtworkCatalog;

@interface VideosUsageEntityItem : NSObject {

	NSString* _title;
	NSString* _subtitle;
	NSString* _fileSizeString;
	UIImage* _placeholderImage;
	MPArtworkCatalog* _artworkCatalog;

}

@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * fileSizeString;                        //@synthesize fileSizeString=_fileSizeString - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                     //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,retain) MPArtworkCatalog * artworkCatalog;              //@synthesize artworkCatalog=_artworkCatalog - In the implementation block
-(void)setFileSizeString:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)fileSizeString;
-(void)setArtworkCatalog:(MPArtworkCatalog *)arg1 ;
-(MPArtworkCatalog *)artworkCatalog;
@end

