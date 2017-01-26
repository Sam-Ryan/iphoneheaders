/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXResource.h>

@class NSString;

@interface SXImageResource : SXResource

@property (nonatomic,readonly) CGSize dimensions; 
@property (nonatomic,readonly) NSString * imageIdentifier; 
+(id)typeString;
-(NSString *)imageIdentifier;
-(CGSize)dimensions;
-(double)heightForImageWidth:(double)arg1 ;
-(double)widthForImageHeight:(double)arg1 ;
-(CGSize)sizeThatFills:(CGSize)arg1 ;
-(id)description;
@end

