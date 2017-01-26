/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponent.h>

@class NSString, SXJSONArray;

@interface SXMapComponent : SXComponent

@property (nonatomic,readonly) SCD_Struct_SX12 region; 
@property (nonatomic,readonly) unsigned long long defaultMapType; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) NSString * accessibilityCaption; 
@property (nonatomic,readonly) SXJSONArray * items; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
+(id)typeString;
-(SXJSONArray *)items;
-(NSString *)accessibilityCaption;
-(NSString *)caption;
-(unsigned long long)defaultMapType;
-(SCD_Struct_SX12)region;
-(Class)componentViewClass;
-(unsigned long long)defaultMapTypeWithValue:(id)arg1 withType:(int)arg2 ;
@end

