/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSWPLineSpacing : NSObject <NSCopying> {

	int _mode;
	double _amount;
	double _baselineRule;

}
+(id)lineSpacing;
-(void)saveToArchive:(LineSpacingArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const LineSpacingArchive*)arg1 unarchiver:(id)arg2 ;
-(double)baselineRule;
-(id)initWithMode:(int)arg1 amount:(double)arg2 baselineRule:(double)arg3 ;
-(id)initWithMode:(int)arg1 amount:(double)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)mode;
-(double)amount;
@end

