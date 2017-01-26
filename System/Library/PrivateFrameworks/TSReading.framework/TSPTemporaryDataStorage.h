/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:27:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPFileDataStorage.h>

@class NSURL, SFUCryptoKey;

@interface TSPTemporaryDataStorage : TSPFileDataStorage {

	NSURL* _URL;
	SFUCryptoKey* _decryptionKey;
	BOOL _isMissingData;

}

@property (assign,nonatomic) BOOL isMissingData;              //@synthesize isMissingData=_isMissingData - In the implementation block
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 decryptionKey:(id)arg2 ;
-(BOOL)isMissingData;
-(void)setIsMissingData:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
@end

