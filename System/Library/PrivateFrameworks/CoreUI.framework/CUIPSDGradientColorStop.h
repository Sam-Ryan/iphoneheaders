/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDGradientStop.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CUIPSDGradientColorStop : CUIPSDGradientStop <NSCoding> {

	psdGradientColor gradientColor;

}
+(id)colorStopWithLocation:(double)arg1 gradientColor:(psdGradientColor)arg2 ;
+(void)initialize;
-(BOOL)isColorStop;
-(double)colorLocation;
-(id)initWithLocation:(double)arg1 gradientColor:(psdGradientColor)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(psdGradientColor)gradientColor;
@end

