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

@class EQKitMathMLNode;

@interface EQKitMathMLBinaryNode : EQKitMathMLNode <EQKitMathMLNode> {

	EQKitMathMLNode* mFirst;
	EQKitMathMLNode* mSecond;

}
-(BOOL)isBaseFontNameUsed;
-(id)initFromXMLNode:(xmlNode*)arg1 parser:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(const set<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum> >Ref)mathMLAttributes;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
@end

