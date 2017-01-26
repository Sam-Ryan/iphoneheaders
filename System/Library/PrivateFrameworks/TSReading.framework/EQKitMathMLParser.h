/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:27:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class NSError, EQKitEnvironmentInstance, NSData;

@interface EQKitMathMLParser : NSObject {

	xmlNode* mRootNode;
	xmlNs* mNS;
	NSError* mError;
	EQKitEnvironmentInstance* mEnvironment;
	NSData* mSource;
	stack<EQKitMathMLParserState, std::__1::deque<EQKitMathMLParserState, std::__1::allocator<EQKitMathMLParserState> > >* mState;
	AttributeCollection* mAttributeCollection;

}

@property (nonatomic,readonly) xmlNs* ns; 
@property (nonatomic,readonly) NSError * error; 
@property (assign,nonatomic) AttributeCollection* attributeCollection; 
-(id)initWithDocument:(xmlDoc*)arg1 node:(xmlNode*)arg2 source:(id)arg3 environment:(id)arg4 ;
-(AttributeCollection*)attributeCollection;
-(void)parseAttributesForNode:(id)arg1 withXMLNode:(xmlNode*)arg2 ;
-(void)reportError:(long long)arg1 withNode:(xmlNode*)arg2 ;
-(id)parseNode:(xmlNode*)arg1 ;
-(id)parseChildrenAsArrayFromXMLNode:(xmlNode*)arg1 ;
-(void)pushState:(int)arg1 ;
-(BOOL)isElement:(int)arg1 allowedInState:(int)arg2 ;
-(void)setAttributeCollection:(AttributeCollection*)arg1 ;
-(id)parseChildrenAsNodeFromXMLNode:(xmlNode*)arg1 ;
-(id)parseChildrenAsTokenContentFromXMLNode:(xmlNode*)arg1 ;
-(xmlNs*)ns;
-(void)dealloc;
-(id)init;
-(int)state;
-(id)environment;
-(id)parse;
-(NSError *)error;
-(void)popState;
@end
