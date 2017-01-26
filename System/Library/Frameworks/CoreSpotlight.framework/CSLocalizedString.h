/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <Foundation/NSString.h>
#import <libobjc.A.dylib/CSCoderEncoder.h>

@class NSDictionary, NSString;

@interface CSLocalizedString : NSString <CSCoderEncoder> {

	NSDictionary* _localizedStrings;
	NSString* _defaultString;

}

@property (nonatomic,readonly) NSDictionary * localizedStrings;              //@synthesize localizedStrings=_localizedStrings - In the implementation block
@property (nonatomic,readonly) NSString * defaultString;                     //@synthesize defaultString=_defaultString - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCSCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(NSDictionary *)localizedStrings;
-(NSString *)defaultString;
-(id)initWithLocalizedStrings:(id)arg1 ;
-(id)localizedString;
@end

