/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPShapeRep.h>

@interface TSWPTOCRep : TSWPShapeRep
-(id)hitRep:(CGPoint)arg1 ;
-(id)tocInfo;
-(unsigned long long)charIndexAtPoint:(CGPoint)arg1 ;
-(id)paragraphStylesBetweenCharIndex:(unsigned long long)arg1 andCharIndex:(unsigned long long)arg2 ;
-(BOOL)shouldCreateKnobs;
-(BOOL)shouldShowKnobs;
-(BOOL)canMakePathEditable;
-(id)i_paragraphStyleAtPoint:(CGPoint)arg1 ;
-(unsigned long long)i_indexOfHitTOCEntryAtPoint:(CGPoint)arg1 ;
@end

