/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSCH3DDataBuffer;

@interface TSCH3DResource : NSObject <NSCopying> {

	int mCaching;
	TSCH3DDataBuffer* mCache;
	int mUpdate;
	BOOL mChanged;
	BOOL mCached;
	DataBufferInfo mDataBufferInfo;
	unsigned long long mUniqueIdentifier;

}

@property (nonatomic,readonly) TSCH3DDataBuffer * buffer; 
@property (nonatomic,readonly) DataBufferInfo bufferInfo; 
@property (assign,nonatomic) int update; 
@property (assign,nonatomic) BOOL changed; 
@property (nonatomic,readonly) BOOL isTexturable; 
@property (assign,nonatomic) int caching; 
@property (nonatomic,readonly) unsigned long long uniqueIdentifier; 
+(unsigned long long)allocateResourceUniqueIdentifier;
+(void)deallocateResourceUniqueIdentifier:(unsigned long long)arg1 ;
+(id)resourceWithCaching:(int)arg1 ;
+(id)resource;
-(DataBufferInfo)bufferInfo;
-(id)initWithCaching:(int)arg1 ;
-(BOOL)isTexturable;
-(void)flushMemory;
-(int)caching;
-(void)setCaching:(int)arg1 ;
-(void)updateBufferInfoFromBuffer:(id)arg1 ;
-(BOOL)cacheNeedsUpdate;
-(void)dealloc;
-(id)init;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)update;
-(unsigned long long)uniqueIdentifier;
-(void)setCache:(id)arg1 ;
-(TSCH3DDataBuffer *)buffer;
-(BOOL)changed;
-(void)setChanged:(BOOL)arg1 ;
-(void)setUpdate:(int)arg1 ;
@end

