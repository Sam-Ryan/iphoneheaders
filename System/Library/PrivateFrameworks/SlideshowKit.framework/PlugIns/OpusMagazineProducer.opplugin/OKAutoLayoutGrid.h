/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMagazineProducer.opplugin/OpusMagazineProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OKAutoLayoutGrid : NSObject {

	long long* _tiles;
	unsigned long long _rows;
	unsigned long long _columns;

}

@property (readonly) unsigned long long rows;                 //@synthesize rows=_rows - In the implementation block
@property (readonly) unsigned long long columns;              //@synthesize columns=_columns - In the implementation block
-(void)mark:(unsigned long long)arg1 forAreaX:(unsigned long long)arg2 Y:(unsigned long long)arg3 W:(unsigned long long)arg4 H:(unsigned long long)arg5 ;
-(id)nextPossibleRects:(BOOL)arg1 ;
-(id)initWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 ;
-(BOOL)hasAnyEmptyTiles;
-(BOOL)nextEmptyTile:(unsigned long long*)arg1 :(unsigned long long*)arg2 ;
-(void)unmarkForAreaX:(unsigned long long)arg1 Y:(unsigned long long)arg2 W:(unsigned long long)arg3 H:(unsigned long long)arg4 ;
-(BOOL)biggestEmptyRectFromPtX:(unsigned long long)arg1 Y:(unsigned long long)arg2 W:(unsigned long long*)arg3 H:(unsigned long long*)arg4 ;
-(void)dealloc;
-(id)description;
-(void)reset;
-(unsigned long long)rows;
-(unsigned long long)columns;
@end
