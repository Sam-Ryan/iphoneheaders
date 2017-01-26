/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPContainedObject.h>

@interface TSTTileIDKeyDict : TSPContainedObject {

	hash_map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > >* mMap;

}
-(void)applyFunction:(/*function pointer*/void*)arg1 withState:(void*)arg2 ;
-(id)tileForID:(SCD_Struct_TS118)arg1 ;
-(void)setTile:(id)arg1 forID:(SCD_Struct_TS118)arg2 ;
-(void)removeTileForID:(SCD_Struct_TS118)arg1 ;
-(void)makeTilesPerformSelector:(SEL)arg1 ;
-(void)dealloc;
-(long long)count;
-(void)removeAllTiles;
-(id)initWithOwner:(id)arg1 ;
@end
