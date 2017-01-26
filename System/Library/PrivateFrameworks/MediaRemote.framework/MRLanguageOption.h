/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface MRLanguageOption : NSObject <NSSecureCoding> {

	unsigned _languageOptionType;
	NSString* _languageTag;
	NSArray* _languageOptionCharacteristics;
	NSString* _displayName;
	NSString* _identifier;

}

@property (nonatomic,readonly) unsigned languageOptionType;                          //@synthesize languageOptionType=_languageOptionType - In the implementation block
@property (nonatomic,readonly) NSString * languageTag;                               //@synthesize languageTag=_languageTag - In the implementation block
@property (nonatomic,readonly) NSArray * languageOptionCharacteristics;              //@synthesize languageOptionCharacteristics=_languageOptionCharacteristics - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)displayName;
-(id)initWithType:(unsigned)arg1 languageTag:(id)arg2 characteristics:(id)arg3 displayName:(id)arg4 identifier:(id)arg5 ;
-(unsigned)languageOptionType;
-(NSString *)languageTag;
-(NSArray *)languageOptionCharacteristics;
@end

