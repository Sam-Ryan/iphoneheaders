/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CPCopying.h>

@class CPShape;

@interface CPZoneBorderNeighbor : NSObject <NSCopying, CPCopying> {

	CPShape* neighborShape;
	int shapeSide;

}
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initSuper;
-(id)neighborShape;
-(int)shapeSide;
-(void)setNeighborShape:(id)arg1 ;
-(void)setShapeSide:(int)arg1 ;
@end

