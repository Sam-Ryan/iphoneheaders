/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@class NSMutableArray, NSArray, SXMosaicGalleryCluster, SXMosaicGalleryColumnLayout;

@interface SXMosaicGalleryGroupLayout : NSObject {

	double _height;
	NSMutableArray* _columnRanges;
	NSArray* _frames;
	unsigned long long _numberOfColumns;
	SXMosaicGalleryCluster* _cluster;
	SXMosaicGalleryColumnLayout* _columnLayout;

}

@property (nonatomic,readonly) double height;                                           //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) SXMosaicGalleryCluster * cluster;                        //@synthesize cluster=_cluster - In the implementation block
@property (nonatomic,readonly) SXMosaicGalleryColumnLayout * columnLayout;              //@synthesize columnLayout=_columnLayout - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfColumns;                      //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (nonatomic,readonly) NSArray * frames;                                        //@synthesize frames=_frames - In the implementation block
@property (nonatomic,readonly) NSMutableArray * columnRanges;                           //@synthesize columnRanges=_columnRanges - In the implementation block
-(SXMosaicGalleryColumnLayout *)columnLayout;
-(NSRange)columnRangeForItem:(id)arg1 ;
-(double)desiredHeightForItem:(id)arg1 ;
-(NSMutableArray *)columnRanges;
-(double)calculateHeight;
-(id)calculateFrames;
-(id)initWithCluster:(id)arg1 numberOfColumns:(unsigned long long)arg2 columnLayout:(id)arg3 ;
-(id)init;
-(unsigned long long)numberOfColumns;
-(double)height;
-(SXMosaicGalleryCluster *)cluster;
-(CGRect)frameForItemAtIndex:(unsigned long long)arg1 ;
-(NSArray *)frames;
@end

