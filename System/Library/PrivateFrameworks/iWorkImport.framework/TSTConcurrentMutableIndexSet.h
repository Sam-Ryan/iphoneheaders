/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableIndexSet;

@interface TSTConcurrentMutableIndexSet : NSObject {

	opaque_pthread_rwlock_t mRWLock;
	NSMutableIndexSet* mMutableIndexSet;

}
-(void)dealloc;
-(id)init;
-(void)addIndex:(unsigned long long)arg1 ;
-(void)removeAllIndexes;
-(void)enumerateIndexesUsingBlock:(/*^block*/id)arg1 ;
@end

