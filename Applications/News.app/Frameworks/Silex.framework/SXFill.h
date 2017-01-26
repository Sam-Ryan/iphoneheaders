/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>
#import <Silex/SXClassFactoryProtocol.h>

@class NSString;

@interface SXFill : SXJSONObject <SXClassFactoryProtocol>

@property (nonatomic,readonly) unsigned long long attachment; 
@property (nonatomic,readonly) unsigned long long fillMode; 
@property (nonatomic,readonly) unsigned long long horizontalAlignment; 
@property (nonatomic,readonly) unsigned long long verticalAlignment; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initializeObject;
+(id)typeString;
-(unsigned long long)verticalAlignment;
-(unsigned long long)horizontalAlignment;
-(unsigned long long)fillMode;
-(unsigned long long)attachment;
-(unsigned long long)attachmentWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)fillModeWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)horizontalAlignmentWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)verticalAlignmentWithValue:(id)arg1 withType:(int)arg2 ;
@end

