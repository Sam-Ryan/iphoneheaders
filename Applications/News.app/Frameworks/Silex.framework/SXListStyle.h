/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>

@class NSString, SXJSONArray;

@interface SXListStyle : SXJSONObject

@property (nonatomic,readonly) unsigned long long style; 
@property (nonatomic,readonly) NSString * character; 
@property (nonatomic,readonly) SXJSONArray * indices; 
@property (nonatomic,readonly) unsigned long long depth; 
-(unsigned long long)depth;
-(SXJSONArray *)indices;
-(NSString *)character;
-(unsigned long long)style;
-(unsigned long long)styleWithValue:(id)arg1 withType:(int)arg2 ;
@end

