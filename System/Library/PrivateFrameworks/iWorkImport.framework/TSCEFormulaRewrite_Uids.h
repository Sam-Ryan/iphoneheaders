/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSIndexSet;

@interface TSCEFormulaRewrite_Uids : NSObject {

	vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >* _uids;
	NSIndexSet* _indexes;
	unordered_map<TSU::UUIDData<TSP::UUIDData>, unsigned short, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, unsigned short> > >* _indexesForUids;
	unordered_map<unsigned short, TSU::UUIDData<TSP::UUIDData>, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, TSU::UUIDData<TSP::UUIDData> > > >* _uidsForIndexes;

}

@property (readonly) const vector<TSU::UUIDData<TSP::UUIDData>* uids;              //@synthesize uids=_uids - In the implementation block
@property (readonly) NSIndexSet * indexes;                                         //@synthesize indexes=_indexes - In the implementation block
-(void)saveToMessage:(IndexedUidsArchive*)arg1 ;
-(id)initFromMessage:(const IndexedUidsArchive*)arg1 ;
-(void)unloadIndexes;
-(id)initWithUids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(void)loadIndexesForTable:(id)arg1 isRows:(BOOL)arg2 ;
-(UUIDData<TSP::UUIDData>)uidForIndex:(unsigned short)arg1 ;
-(unsigned short)indexForUid:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)subtractIndexesFromIndexSet:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)containsIndex:(unsigned short)arg1 ;
-(NSIndexSet *)indexes;
-(const vector<TSU::UUIDData<TSP::UUIDData>*)uids;
@end

