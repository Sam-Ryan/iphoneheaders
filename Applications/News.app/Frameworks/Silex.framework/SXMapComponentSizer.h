/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentSizer.h>

@interface SXMapComponentSizer : SXComponentSizer
+(BOOL)isSpanSetOnRegion:(SCD_Struct_SX12)arg1 ;
+(BOOL)isCenterSetOnRegion:(SCD_Struct_SX12)arg1 ;
+(SCD_Struct_SX12)regionForCoordinates:(id)arg1 ;
+(SCD_Struct_SX12)regionFromRegion:(SCD_Struct_SX12)arg1 coordinates:(id)arg2 ;
+(SCD_Struct_SX12)mapRectForRegion:(SCD_Struct_SX12)arg1 ;
-(double)calculateHeightForWidth:(double)arg1 ;
@end

