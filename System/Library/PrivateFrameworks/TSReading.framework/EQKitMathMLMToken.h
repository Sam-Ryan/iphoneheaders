/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:27:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitMathMLNode.h>
#import <TSReading/EQKitMathMLNode.h>
#import <TSReading/EQKitFontStyling.h>
#import <TSReading/EQKitLayoutSchemataToken.h>

@class NSString;

@interface EQKitMathMLMToken : EQKitMathMLNode <EQKitMathMLNode, EQKitFontStyling, EQKitLayoutSchemataToken> {

	struct {
		unsigned mType : 2;
	}  mFlags;
	SCD_Union_EQ16 mContent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)schemataTokenString;
-(unsigned)schemataUnicharOrNul;
-(id)initWithString:(id)arg1 environment:(id)arg2 ;
-(int)scriptContext;
-(int)scriptVariant;
-(id)initFromXMLNode:(xmlNode*)arg1 parser:(id)arg2 ;
-(id)schemataFontStyling;
-(id)fontStyling;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(const set<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum> >*)mathMLAttributes;
-(id)initWithContent:(id)arg1 ;
-(BOOL)isNumber;
@end

