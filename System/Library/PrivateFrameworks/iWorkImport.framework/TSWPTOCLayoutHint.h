/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDHint.h>

@class NSString;

@interface TSWPTOCLayoutHint : NSObject <TSDHint> {

	NSRange _charRange;

}

@property (nonatomic,readonly) NSRange charRange;                   //@synthesize charRange=_charRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)archivedHintClass;
-(void)saveToArchive:(TOCLayoutHintArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const TOCLayoutHintArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)overlapsWithSelectionPath:(id)arg1 ;
-(void)offsetByDelta:(int)arg1 ;
-(id)firstChildHint;
-(id)lastChildHint;
-(id)copyForArchiving;
-(BOOL)isFirstHint;
-(NSRange)charRange;
-(id)initWithRange:(NSRange)arg1 ;
@end

