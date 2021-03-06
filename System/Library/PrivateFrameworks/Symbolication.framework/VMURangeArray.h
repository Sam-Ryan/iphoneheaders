/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VMURangeArray : NSObject <NSCopying> {

	unsigned _count;
	VMURange* _ranges;
	unsigned _max;
	BOOL _sorted;

}
-(void)setCapacity:(unsigned)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(VMURange)range;
-(VMURange)rangeAtIndex:(unsigned)arg1 ;
-(void)sort;
-(BOOL)intersectsRange:(VMURange)arg1 ;
-(void)removeAllRanges;
-(id)initWithRanges:(const VMURange*)arg1 count:(unsigned)arg2 ;
-(unsigned long long)indexForLocation:(unsigned long long)arg1 ;
-(void)addRanges:(id)arg1 ;
-(VMURange)rangeForLocation:(unsigned long long)arg1 ;
-(BOOL)intersectsLocation:(unsigned long long)arg1 ;
-(VMURange)subrangeNotExcludedBySelfForRange:(VMURange)arg1 ;
-(VMURange)largestRange;
-(unsigned long long)sumLengths;
-(VMURange*)ranges;
-(void)addRange:(VMURange)arg1 ;
-(void)insertRange:(VMURange)arg1 atIndex:(unsigned)arg2 ;
-(void)removeRangeAtIndex:(unsigned)arg1 ;
@end

