/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDSpecStroke.h>

@class TSDStrokePattern, TSUColor;

@interface TSDSpecStrokeSetPattern : TSDSpecStroke {

	TSDStrokePattern* _pattern;
	int _lineCap;
	int _lineJoin;
	double _miterLimit;
	double _width;
	TSUColor* _color;
	BOOL _definedLineCap;
	BOOL _definedLineJoin;
	BOOL _definedMiterLimit;
	BOOL _definedWidth;
	BOOL _definedColor;

}
+(void)saveObject:(id)arg1 toArchive:(SpecStrokeSetPatternArchive*)arg2 archiver:(id)arg3 ;
+(id)newFromArchive:(const SpecStrokeSetPatternArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveSpecStrokeSetPatternToArchive:(SpecStrokeSetPatternArchive*)arg1 archiver:(id)arg2 ;
-(id)initSpecStrokeSetPatternWithArchive:(const SpecStrokeSetPatternArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithCurrentProperty:(id)arg1 ;
-(BOOL)canApplyOnObject:(id)arg1 ;
-(id)operationPropertyName;
-(id)strokeModifiedFromStroke:(id)arg1 ;
-(id)apply:(id)arg1 ;
@end

