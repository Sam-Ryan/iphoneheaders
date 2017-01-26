/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCEFormulaRewriteInfo_RangeEntry : NSObject {

	NSRange _range;
	vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >* _orderedUuids;
	unsigned short _offset;

}

@property (readonly) NSRange range;                                                        //@synthesize range=_range - In the implementation block
@property (readonly) const vector<TSU::UUIDData<TSP::UUIDData>* orderedUuids;              //@synthesize orderedUuids=_orderedUuids - In the implementation block
@property (assign) unsigned short offset;                                                  //@synthesize offset=_offset - In the implementation block
-(void)saveToMessage:(RewriteRangeEntryArchive*)arg1 ;
-(id)initFromMessage:(const RewriteRangeEntryArchive*)arg1 ;
-(id)initWithRange:(NSRange)arg1 orderedUuids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg2 offset:(unsigned short)arg3 ;
-(const vector<TSU::UUIDData<TSP::UUIDData>*)orderedUuids;
-(id)description;
-(void)setOffset:(unsigned short)arg1 ;
-(unsigned short)offset;
-(NSRange)range;
@end

