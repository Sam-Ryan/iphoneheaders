/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameKitServices/GameKitServices-Structs.h>
@interface GKList : NSObject {

	unsigned* _items;
	unsigned long long _count;
	unsigned long long _size;
	opaque_pthread_mutex_t _lock;

}

@property (readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)initWithSize:(unsigned long long)arg1 ;
-(void)lock;
-(void)unlock;
-(void)addID:(unsigned)arg1 ;
-(void)copyItemsInto:(id)arg1 ;
-(BOOL)hasID:(unsigned)arg1 ;
-(void)addIDsFromList:(id)arg1 ;
-(void)removeID:(unsigned)arg1 ;
-(void)removeAllIDs;
-(id)allMatchingObjectsFromTable:(id)arg1 ;
-(void)print;
@end

