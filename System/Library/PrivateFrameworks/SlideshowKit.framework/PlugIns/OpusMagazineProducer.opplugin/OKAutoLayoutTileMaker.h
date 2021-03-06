/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMagazineProducer.opplugin/OpusMagazineProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusMagazineProducer/OpusMagazineProducer-Structs.h>
@class OKAutoLayoutGrid;

@interface OKAutoLayoutTileMaker : NSObject {

	double _blockAspectRatio;
	OKAutoLayoutGrid* _tileTable;
	unsigned long long _rows;
	unsigned long long _columns;
	double _maxFrameAspectRatio;
	double _minFrameAspectRatio;
	double _minFrameArea;
	double _oneUpWhitespaceAllowed;

}

@property (assign) unsigned long long rows;                    //@synthesize rows=_rows - In the implementation block
@property (assign) unsigned long long columns;                 //@synthesize columns=_columns - In the implementation block
@property (assign) double maxFrameAspectRatio;                 //@synthesize maxFrameAspectRatio=_maxFrameAspectRatio - In the implementation block
@property (assign) double minFrameAspectRatio;                 //@synthesize minFrameAspectRatio=_minFrameAspectRatio - In the implementation block
@property (assign) double minFrameArea;                        //@synthesize minFrameArea=_minFrameArea - In the implementation block
@property (assign) double oneUpWhitespaceAllowed;              //@synthesize oneUpWhitespaceAllowed=_oneUpWhitespaceAllowed - In the implementation block
-(void)setOneUpWhitespaceAllowed:(double)arg1 ;
-(BOOL)_isQualifiedOneUpLayout:(id)arg1 ;
-(BOOL)_isQualifiedFrame:(CGRect)arg1 ;
-(void)setMaxFrameAspectRatio:(double)arg1 ;
-(id)layoutsForFrames:(unsigned long long)arg1 inRect:(CGRect)arg2 borderInPx:(unsigned long long)arg3 ;
-(void)_findNextFrameFromGrid:(id)arg1 curIndex:(unsigned long long)arg2 maxIndex:(unsigned long long)arg3 curFrames:(id)arg4 layouts:(id)arg5 ;
-(void)_oneUpLayouts:(id)arg1 ;
-(double)maxFrameAspectRatio;
-(double)oneUpWhitespaceAllowed;
-(double)minFrameArea;
-(double)croppingScoreOfLayout:(id)arg1 forAspectRatios:(id)arg2 ;
-(double)minFrameAspectRatio;
-(void)setMinFrameArea:(double)arg1 ;
-(id)convertTiles:(id)arg1 toResolution:(unsigned long long)arg2 :(unsigned long long)arg3 borderInPx:(unsigned long long)arg4 offsetX:(unsigned long long)arg5 offsetY:(unsigned long long)arg6 ;
-(void)setMinFrameAspectRatio:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned long long)rows;
-(void)setRows:(unsigned long long)arg1 ;
-(unsigned long long)columns;
-(void)setColumns:(unsigned long long)arg1 ;
-(void)_prepare:(double)arg1 ;
@end

