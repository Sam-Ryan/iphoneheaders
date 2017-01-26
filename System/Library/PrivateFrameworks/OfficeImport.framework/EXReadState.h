/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCXReadState.h>

@protocol TCCancelDelegate;
@class EDSheet, OCPPackagePart, NSMutableArray, EDReference, EXOfficeArtState, EXOAVState, NSMutableDictionary, ECColumnWidthConvertor, EDWorkbook, EDResources, TCImportTracing, CXNamespace;

@interface EXReadState : OCXReadState {

	unsigned mCurrentSheetIndex;
	EDSheet* mCurrentSheet;
	unsigned long long mCellStyleXfsOffset;
	double mDefaultColumnWidth;
	double mDefaultRowHeight;
	OCPPackagePart* mCurrentPart;
	OCPPackagePart* mWorkbookPart;
	map<long, unsigned long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, unsigned long> > >* mSharedFormulasMap;
	NSMutableArray* mArrayedFormulas;
	EDReference* mSheetDimension;
	EXOfficeArtState* mOfficeArtState;
	EXOAVState* mOAVState;
	BOOL mMaxColumnsWarned;
	BOOL mMaxRowsWarned;
	BOOL mIsPredefinedTableStylesRead;
	NSMutableDictionary* mReferenceForCommentTextBox;
	BOOL mIsPredefinedDxfsBeingRead;
	xmlNs* mRelationshipNS;
	ECColumnWidthConvertor* mColumnWidthConvertor;
	NSMutableArray* mLegacyDrawables;
	EDWorkbook* mWorkbook;
	EDResources* mResources;
	id<TCCancelDelegate> mCancelDelegate;
	TCImportTracing* mTracing;
	CXNamespace* mEXSpreadsheetMLNamespace;
	CXNamespace* mEXSpreadsheetDrawingNamespace;
	CXNamespace* mEXSpreadsheetRelationsNamespace;
	unsigned mCurrentRowMinColumnIndex;
	unsigned mCurrentRowMaxColumnIndex;

}

@property (nonatomic,readonly) id<TCCancelDelegate> cancelDelegate; 
@property (nonatomic,retain) CXNamespace * EXSpreadsheetMLNamespace; 
@property (nonatomic,retain) CXNamespace * EXSpreadsheetDrawingNamespace; 
@property (nonatomic,retain) CXNamespace * EXSpreadsheetRelationsNamespace; 
-(void)dealloc;
-(BOOL)isCancelled;
-(id)resources;
-(void)setResources:(id)arg1 ;
-(id)currentSheet;
-(id)workbook;
-(id)columnWidthConvertor;
-(double)defaultColumnWidth;
-(double)defaultRowHeight;
-(void)setWorkbook:(id)arg1 ;
-(void)setCurrentSheet:(id)arg1 ;
-(void)reportWarning:(TCTaggedMessageStructure*)arg1 ;
-(void)setupNSForXMLFormat:(int)arg1 ;
-(id)oavState;
-(id)officeArtState;
-(id<TCCancelDelegate>)cancelDelegate;
-(void)setOfficeArtState:(id)arg1 ;
-(void)setCurrentSheetIndex:(unsigned)arg1 ;
-(id)initWithWorkbookPart:(id)arg1 cancelDelegate:(id)arg2 tracing:(id)arg3 ;
-(void)reportWorksheetWarning:(TCTaggedMessageStructure*)arg1 ;
-(void)setDefaultColumnWidth:(double)arg1 ;
-(void)setDefaultRowHeight:(double)arg1 ;
-(unsigned)currentRowMinColumnIndex;
-(unsigned)currentRowMaxColumnIndex;
-(unsigned long long)cellStyleXfsOffset;
-(void)setCellStyleXfsOffset:(unsigned long long)arg1 ;
-(CXNamespace *)EXSpreadsheetDrawingNamespace;
-(id)arrayedFormulas;
-(void)addSharedBaseFormulaIndex:(unsigned long long)arg1 withIndex:(long long)arg2 ;
-(unsigned long long)sharedBaseFormulaIndexWithIndex:(long long)arg1 ;
-(CXNamespace *)EXSpreadsheetMLNamespace;
-(id)sheetDimension;
-(void)setCurrentRowMinColumnIndex:(unsigned)arg1 ;
-(void)setCurrentRowMaxColumnIndex:(unsigned)arg1 ;
-(void)resetForNewSheet;
-(id)currentPart;
-(id)legacyDrawables;
-(id)workbookPart;
-(BOOL)isPredefinedDxfsBeingRead;
-(BOOL)isPredefinedTableStylesRead;
-(void)setPredefinedTableStylesRead:(BOOL)arg1 ;
-(void)setPredefinedDxfsBeingRead:(BOOL)arg1 ;
-(id)authorForReference:(id)arg1 ;
-(id)textBoxForReference:(id)arg1 ;
-(void)relationshipNameSpaceForWorkbook:(xmlNs*)arg1 ;
-(void)setCurrentPart:(id)arg1 ;
-(void)setSheetDimension:(id)arg1 ;
-(void)setTextBox:(id)arg1 author:(id)arg2 forReference:(id)arg3 ;
-(void)setEXSpreadsheetMLNamespace:(CXNamespace *)arg1 ;
-(void)setEXSpreadsheetDrawingNamespace:(CXNamespace *)arg1 ;
-(void)setEXSpreadsheetRelationsNamespace:(CXNamespace *)arg1 ;
-(unsigned)currentSheetIndex;
-(xmlNs*)relationshipNameSpaceForWorkbook;
-(CXNamespace *)EXSpreadsheetRelationsNamespace;
@end

