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
#import <TSReading/EQKitLayoutSchemataRow.h>

@class NSArray, NSString;

@interface EQKitMathMLMRow : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataRow> {

	NSArray* mChildren;
	struct {
		unsigned mImplied;
	}  mFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isBaseFontNameUsed;
-(int)isOperatorPaddingRequired;
-(Schemata*)layoutSchemata;
-(id)schemataChildren;
-(BOOL)isEmbellishedOperator;
-(id)operatorCore;
-(id)initFromXMLNode:(xmlNode*)arg1 parser:(id)arg2 ;
-(id)initWithChildren:(id)arg1 node:(xmlNode*)arg2 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(const set<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum> >Ref)mathMLAttributes;
-(id)initWithChildren:(id)arg1 ;
@end

