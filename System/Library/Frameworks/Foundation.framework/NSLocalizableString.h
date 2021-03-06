/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface NSLocalizableString : NSString {

	NSString* _stringsFileKey;
	NSString* _developmentLanguageString;

}

@property (copy,readonly) NSString * stringsFileKey; 
@property (copy,readonly) NSString * developmentLanguageString; 
+(id)localizableStringWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2 ;
-(id)initWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2 ;
-(NSString *)stringsFileKey;
-(void)setStringsFileKey:(NSString *)arg1 ;
-(NSString *)developmentLanguageString;
-(void)setDevelopmentLanguageString:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
@end

