/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSPComponentExternalReferenceMap : NSObject <NSCopying> {

	hash_map<const long long, TSP::ComponentExternalReferenceInfo, TSP::ObjectIdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ComponentExternalReferenceInfo> > >* _map;

}
-(void)saveToMessage:(RepeatedPtrField<TSP::ComponentExternalReference>*)arg1 ;
-(ComponentExternalReferenceInfo)externalReferenceInfoForObjectIdentifier:(long long)arg1 ;
-(id)initWithMapSize:(unsigned long long)arg1 ;
-(void)addExternalReferenceToObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isWeak:(BOOL)arg3 ;
-(void)enumerateExternalReferences:(/*^block*/id)arg1 ;
-(id)initFromMessage:(const RepeatedPtrField<TSP::ComponentExternalReference>*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
