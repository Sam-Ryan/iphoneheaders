/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSMutableSet, NSMutableString, NSString, TSCH3DGLVersion;

@interface TSCH3DShaderProgram : NSObject {

	NSMutableDictionary* mLinks;
	NSMutableArray* mDeclarationSection;
	NSMutableArray* mTemporarySection;
	NSMutableArray* mStatementSection;
	NSMutableArray* mResolutionSection;
	NSMutableArray* mOutcomeSection;
	NSMutableArray* mConclusionSection;
	NSMutableArray* mSections[6];
	NSMutableArray* mFunctions;
	NSMutableSet* mFunctionNames;
	NSMutableString* mAccumulator;
	BOOL mIsLinked;
	NSString* mVertex;
	NSString* mFragment;
	TSCH3DGLVersion* mVersion;

}

@property (nonatomic,readonly) NSString * vertex; 
@property (nonatomic,readonly) NSString * fragment; 
@property (nonatomic,readonly) TSCH3DGLVersion * version; 
-(void)addUniformVariable:(id)arg1 ;
-(void)addFunctionString:(id)arg1 name:(id)arg2 ;
-(void)addDeclaration:(id)arg1 statement:(id)arg2 ;
-(void)addConclusion:(id)arg1 statement:(id)arg2 ;
-(void)addTemporary:(id)arg1 statement:(id)arg2 ;
-(void)addFragmentDeclaration:(id)arg1 statement:(id)arg2 ;
-(void)addVertexDeclaration:(id)arg1 statement:(id)arg2 ;
-(void)addResolution:(id)arg1 statement:(id)arg2 ;
-(void)addAttributeVariable:(id)arg1 ;
-(id)usedUniformNameForVariable:(id)arg1 ;
-(id)usedAttributeNameForVariable:(id)arg1 ;
-(void)addStatement:(id)arg1 ;
-(void)assignVariable:(id)arg1 statement:(id)arg2 substitutes:(id)arg3 type:(TSCH3DShaderType)arg4 toSection:(int)arg5 ;
-(void)addOutcome:(id)arg1 statement:(id)arg2 ;
-(NSString *)vertex;
-(void)addStatement:(id)arg1 statement:(id)arg2 ;
-(void)addVertexStatement:(id)arg1 statement:(id)arg2 ;
-(void)addFragmentDeclarationWithFormat:(id)arg1 ;
-(id)existingLinkageOfVariable:(id)arg1 ;
-(void)p_addCompatibilityFunctions;
-(pair<bool, TSCH3DShaderVariableLinkage *>)resultLinkageOfVariable:(id)arg1 ;
-(BOOL)isSamplerVariable:(id)arg1 ;
-(TSCH3DShaderType)uniformLinkageFor:(id)arg1 ;
-(id)linkageOfVariable:(id)arg1 ;
-(void)p_addToSection:(id)arg1 variable:(id)arg2 space:(id)arg3 type:(TSCH3DShaderType)arg4 format:(id)arg5 substitutes:(id)arg6 ;
-(void)addToSection:(id)arg1 variable:(id)arg2 space:(id)arg3 type:(TSCH3DShaderType)arg4 format:(id)arg5 arguments:(char*)arg6 ;
-(void)addDeclaration:(id)arg1 space:(id)arg2 type:(TSCH3DShaderType)arg3 format:(id)arg4 arguments:(char*)arg5 ;
-(void)addToSection:(id)arg1 statement:(id)arg2 type:(TSCH3DShaderType)arg3 ;
-(void)addTemporary:(id)arg1 space:(id)arg2 type:(TSCH3DShaderType)arg3 format:(id)arg4 arguments:(char*)arg5 ;
-(void)addStatement:(id)arg1 space:(id)arg2 type:(TSCH3DShaderType)arg3 format:(id)arg4 arguments:(char*)arg5 ;
-(void)addResolution:(id)arg1 space:(id)arg2 type:(TSCH3DShaderType)arg3 format:(id)arg4 arguments:(char*)arg5 ;
-(void)addOutcome:(id)arg1 space:(id)arg2 type:(TSCH3DShaderType)arg3 format:(id)arg4 arguments:(char*)arg5 ;
-(void)addConclusion:(id)arg1 space:(id)arg2 type:(TSCH3DShaderType)arg3 format:(id)arg4 arguments:(char*)arg5 ;
-(unsigned long long)processSection:(id)arg1 accumulate:(id)arg2 conclusions:(id)arg3 ;
-(void)p_generateType:(TSCH3DShaderType)arg1 globalType:(TSCH3DShaderVariableScopeType)arg2 storageQualifier:(id)arg3 ;
-(void)p_generatePreprocessorDefinitionsForType:(TSCH3DShaderType)arg1 ;
-(void)p_generateGlobalsForType:(TSCH3DShaderType)arg1 ;
-(void)p_generateSection:(id)arg1 type:(TSCH3DShaderType)arg2 ;
-(id)p_generateType:(TSCH3DShaderType)arg1 ;
-(id)usedNameForVariable:(id)arg1 type:(TSCH3DShaderType)arg2 scope:(TSCH3DShaderVariableScopeType)arg3 ;
-(void)addDeclaration:(id)arg1 space:(id)arg2 statement:(id)arg3 ;
-(void)addVertexDeclaration:(id)arg1 space:(id)arg2 statement:(id)arg3 ;
-(void)addDeclaration:(id)arg1 type:(TSCH3DShaderType)arg2 statement:(id)arg3 ;
-(void)addFragmentDeclaration:(id)arg1 space:(id)arg2 statement:(id)arg3 ;
-(void)addVertexDeclaration:(id)arg1 ;
-(void)addFragmentDeclaration:(id)arg1 ;
-(void)addDeclaration:(id)arg1 type:(TSCH3DShaderType)arg2 ;
-(void)addDeclarationWithSpace:(id)arg1 statement:(id)arg2 ;
-(void)addVertexDeclarationWithFormat:(id)arg1 ;
-(void)addTemporary:(id)arg1 space:(id)arg2 statement:(id)arg3 ;
-(void)addVertexTemporary:(id)arg1 statement:(id)arg2 ;
-(void)addVertexTemporary:(id)arg1 space:(id)arg2 statement:(id)arg3 ;
-(void)addFragmentTemporary:(id)arg1 statement:(id)arg2 ;
-(void)addTemporary:(id)arg1 type:(TSCH3DShaderType)arg2 statement:(id)arg3 ;
-(void)addFragmentTemporary:(id)arg1 space:(id)arg2 statement:(id)arg3 ;
-(void)addVertexTemporary:(id)arg1 ;
-(void)addFragmentTemporary:(id)arg1 ;
-(void)addTemporary:(id)arg1 type:(TSCH3DShaderType)arg2 ;
-(void)addTemporary:(id)arg1 ;
-(void)addTemporaryWithSpace:(id)arg1 statement:(id)arg2 ;
-(void)addVertexTemporaryWithFormat:(id)arg1 ;
-(void)addFragmentTemporaryWithFormat:(id)arg1 ;
-(void)addStatement:(id)arg1 space:(id)arg2 statement:(id)arg3 ;
-(void)addVertexStatement:(id)arg1 space:(id)arg2 statement:(id)arg3 ;
-(void)addFragmentStatement:(id)arg1 statement:(id)arg2 ;
-(void)addStatement:(id)arg1 type:(TSCH3DShaderType)arg2 statement:(id)arg3 ;
-(void)addFragmentStatement:(id)arg1 space:(id)arg2 statement:(id)arg3 ;
-(void)addVertexStatement:(id)arg1 ;
-(void)addFragmentStatement:(id)arg1 ;
-(void)addStatement:(id)arg1 type:(TSCH3DShaderType)arg2 ;
-(void)addStatementWithSpace:(id)arg1 statement:(id)arg2 ;
-(void)addVertexStatementWithFormat:(id)arg1 ;
-(void)addFragmentStatementWithFormat:(id)arg1 ;
-(void)addResolution:(id)arg1 space:(id)arg2 statement:(id)arg3 ;
-(void)addVertexResolution:(id)arg1 statement:(id)arg2 ;
-(void)addVertexResolution:(id)arg1 space:(id)arg2 statement:(id)arg3 ;
-(void)addFragmentResolution:(id)arg1 statement:(id)arg2 ;
-(void)addResolution:(id)arg1 type:(TSCH3DShaderType)arg2 statement:(id)arg3 ;
-(void)addFragmentResolution:(id)arg1 space:(id)arg2 statement:(id)arg3 ;
-(void)addVertexResolution:(id)arg1 ;
-(void)addFragmentResolution:(id)arg1 ;
-(void)addResolution:(id)arg1 type:(TSCH3DShaderType)arg2 ;
-(void)addResolution:(id)arg1 ;
-(void)addResolutionWithSpace:(id)arg1 statement:(id)arg2 ;
-(void)addVertexResolutionWithFormat:(id)arg1 ;
-(void)addFragmentResolutionWithFormat:(id)arg1 ;
-(void)addOutcome:(id)arg1 space:(id)arg2 statement:(id)arg3 ;
-(void)addVertexOutcome:(id)arg1 statement:(id)arg2 ;
-(void)addVertexOutcome:(id)arg1 space:(id)arg2 statement:(id)arg3 ;
-(void)addFragmentOutcome:(id)arg1 statement:(id)arg2 ;
-(void)addOutcome:(id)arg1 type:(TSCH3DShaderType)arg2 statement:(id)arg3 ;
-(void)addFragmentOutcome:(id)arg1 space:(id)arg2 statement:(id)arg3 ;
-(void)addVertexOutcome:(id)arg1 ;
-(void)addFragmentOutcome:(id)arg1 ;
-(void)addOutcome:(id)arg1 type:(TSCH3DShaderType)arg2 ;
-(void)addOutcome:(id)arg1 ;
-(void)addOutcomeWithSpace:(id)arg1 statement:(id)arg2 ;
-(void)addVertexOutcomeWithFormat:(id)arg1 ;
-(void)addFragmentOutcomeWithFormat:(id)arg1 ;
-(void)addConclusion:(id)arg1 space:(id)arg2 statement:(id)arg3 ;
-(void)addVertexConclusion:(id)arg1 statement:(id)arg2 ;
-(void)addVertexConclusion:(id)arg1 space:(id)arg2 statement:(id)arg3 ;
-(void)addFragmentConclusion:(id)arg1 statement:(id)arg2 ;
-(void)addConclusion:(id)arg1 type:(TSCH3DShaderType)arg2 statement:(id)arg3 ;
-(void)addFragmentConclusion:(id)arg1 space:(id)arg2 statement:(id)arg3 ;
-(void)addVertexConclusion:(id)arg1 ;
-(void)addFragmentConclusion:(id)arg1 ;
-(void)addConclusion:(id)arg1 type:(TSCH3DShaderType)arg2 ;
-(void)addConclusion:(id)arg1 ;
-(void)addConclusionWithSpace:(id)arg1 statement:(id)arg2 ;
-(void)addVertexConclusionWithFormat:(id)arg1 ;
-(void)addFragmentConclusionWithFormat:(id)arg1 ;
-(BOOL)hasFunction:(id)arg1 ;
-(void)accumulateSection:(id)arg1 intoArray:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(NSString *)fragment;
-(TSCH3DGLVersion *)version;
-(void)link;
-(void)addDeclaration:(id)arg1 ;
-(id)initWithVersion:(id)arg1 ;
@end
