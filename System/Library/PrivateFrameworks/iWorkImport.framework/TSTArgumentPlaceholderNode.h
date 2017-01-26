/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTExpressionNode.h>

@class NSString;

@interface TSTArgumentPlaceholderNode : TSTExpressionNode {

	short mMode;
	NSString* mDetokenizedText;

}

@property (assign,nonatomic) short mode; 
+(id)argumentSpecForFunctionIndex:(int)arg1 argumentIndex:(int)arg2 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(ArgumentPlaceholderNodeArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const ArgumentPlaceholderNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(id)formulaPlainText;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(SCD_Struct_TS315)arg2 symbolTable:(TSCESymbolTable*)arg3 ;
-(id)detokenizedText;
-(id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3 ;
-(id)copyIntoContext:(id)arg1 bakeModes:(BOOL)arg2 children:(id)arg3 ;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2 ;
-(id)exportString;
-(TSTCSENodeData)recordHashesForSubexpressions:(id)arg1 ;
-(BOOL)isEqualToExpressionNode:(id)arg1 ;
-(id)initWithContext:(id)arg1 firstIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3 ;
-(void)setArgumentSpec:(id)arg1 ;
-(BOOL)hasMenu;
-(id)initWithContext:(id)arg1 argumentSpec:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(void)p_invalidate;
-(id)bakedValue;
-(void)dealloc;
-(id)string;
-(void)setMode:(short)arg1 ;
-(short)mode;
-(int)tokenType;
@end
