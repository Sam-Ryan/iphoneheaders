/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@interface SXMosaicGalleryColumnLayout : NSObject {

	double _width;
	double _gutter;

}

@property (nonatomic,readonly) double width;               //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double gutter;              //@synthesize gutter=_gutter - In the implementation block
-(double)gutter;
-(double)widthForColumnRange:(NSRange)arg1 numberOfColumns:(unsigned long long)arg2 ;
-(double)positionForColumnRange:(NSRange)arg1 numberOfColumns:(unsigned long long)arg2 ;
-(double)positionOfColumn:(unsigned long long)arg1 inNumberOfColumns:(unsigned long long)arg2 ;
-(double)widthOfColumn:(unsigned long long)arg1 inNumberOfColumns:(unsigned long long)arg2 ;
-(id)initWithWidth:(double)arg1 gutter:(double)arg2 ;
-(double)width;
@end

