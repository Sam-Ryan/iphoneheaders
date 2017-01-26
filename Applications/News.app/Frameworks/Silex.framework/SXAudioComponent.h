/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXComponent.h>

@class NSString;

@interface SXAudioComponent : SXComponent

@property (nonatomic,readonly) NSString * stillImageIdentifier; 
@property (nonatomic,readonly) NSString * resourceIdentifier; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) NSString * accessibilityCaption; 
+(id)typeString;
-(NSString *)accessibilityCaption;
-(NSString *)caption;
-(NSString *)resourceIdentifier;
-(NSString *)stillImageIdentifier;
-(Class)componentViewClass;
@end

