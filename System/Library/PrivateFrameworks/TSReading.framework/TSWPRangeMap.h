/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSWPRangeMap : NSObject {

	NSRange _subRange;
	vector<_TSWPCharIndexAndAffinity, std::__1::allocator<_TSWPCharIndexAndAffinity> >* _unmappedIndexes;
	vector<_TSWPCharIndexAndAffinity, std::__1::allocator<_TSWPCharIndexAndAffinity> >* _mappedIndexes;

}
-(id)initWithSubRange:(NSRange)arg1 unmappedPairIndexes:(const vector<unsigned long, std::__1::allocator<unsigned long> >*)arg2 ;
-(id)initWithSubRange:(NSRange)arg1 unmappedIndexes:(const vector<unsigned long, std::__1::allocator<unsigned long> >*)arg2 affinity:(int)arg3 ;
-(void)adjustByDelta:(long long)arg1 ;
-(NSRange)unmappedCharRange:(NSRange)arg1 ;
-(unsigned long long)unmappedCharIndex:(unsigned long long)arg1 ;
-(NSRange)mappedCharRange:(NSRange)arg1 ;
-(unsigned long long)mappedCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)p_extendLeftMappedIndex:(unsigned long long)arg1 ;
-(unsigned long long)p_extendRightMappedIndex:(unsigned long long)arg1 ;
@end

