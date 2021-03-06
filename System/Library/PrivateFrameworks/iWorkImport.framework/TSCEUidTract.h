/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSCEUidTract : NSObject <NSCopying> {

	vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >* _columnUids;
	vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >* _rowUids;

}

@property (readonly) vector<TSU::UUIDData<TSP::UUIDData>* columnUids;              //@synthesize columnUids=_columnUids - In the implementation block
@property (readonly) vector<TSU::UUIDData<TSP::UUIDData>* rowUids;                 //@synthesize rowUids=_rowUids - In the implementation block
+(void)saveToArchive:(ASTNodeArrayArchive_ASTUidTract*)arg1 columnUids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg2 rowUids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg3 ;
+(BOOL)p_remapUidVector:(vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 usingUidMap:(const TSUUuidMap*)arg2 clearIfMissing:(BOOL)arg3 ;
-(vector<TSU::UUIDData<TSP::UUIDData>*)columnUids;
-(vector<TSU::UUIDData<TSP::UUIDData>*)rowUids;
-(id)initWithColumnUids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 rowUids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg2 ;
-(BOOL)remapUsingUidMap:(const TSUUuidMap*)arg1 ;
-(BOOL)remapUsingColumnUidMap:(const TSUUuidMap*)arg1 rowUidMap:(const TSUUuidMap*)arg2 clearIfMissing:(BOOL)arg3 ;
-(id)initWithColumnUid:(const UUIDData<TSP::UUIDData>*)arg1 rowUid:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)saveToArchive:(ASTNodeArrayArchive_ASTUidTract*)arg1 ;
-(id)initWithArchive:(const ASTNodeArrayArchive_ASTUidTract*)arg1 ;
@end

