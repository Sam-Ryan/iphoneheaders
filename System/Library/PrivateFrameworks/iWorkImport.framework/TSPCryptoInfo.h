/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SFUCryptoKey, NSArray;


@protocol TSPCryptoInfo <NSObject>
@property (nonatomic,readonly) SFUCryptoKey * cryptoKey; 
@property (nonatomic,readonly) unsigned long long preferredBlockSize; 
@property (nonatomic,readonly) NSArray * blockInfos; 
@property (nonatomic,readonly) unsigned long long decodedLength; 
@required
-(SFUCryptoKey *)cryptoKey;
-(unsigned long long)decodedLength;
-(id)mutableCryptoInfoCopy;
-(NSArray *)blockInfos;
-(unsigned long long)preferredBlockSize;

@end

