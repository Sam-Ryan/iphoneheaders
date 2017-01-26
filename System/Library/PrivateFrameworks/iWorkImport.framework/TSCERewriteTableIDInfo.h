/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCERewriteTableIDInfo : NSObject {

	TSUUuidMap* _tableIDMap;

}
-(void)saveToMessage:(RewriteTableIDInfoArchive*)arg1 ;
-(id)initFromMessage:(const RewriteTableIDInfoArchive*)arg1 ;
-(BOOL)alreadyHaveMappingsForTableIDs:(const TSUUuidMap*)arg1 ;
-(id)initWithTableIDMap:(const TSUUuidMap*)arg1 ;
-(const TSUUuidMap*)tableIDMap;
-(vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)originalTableIDs;
-(id)extendMappingWithTableIDs:(const TSUUuidMap*)arg1 ;
-(void)rollbackMappings:(id)arg1 ;
-(id)description;
@end

