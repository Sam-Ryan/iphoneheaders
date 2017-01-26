/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAssetCacheInternal, NSURL;

@interface AVAssetCache : NSObject {

	AVAssetCacheInternal* _priv;

}

@property (assign,nonatomic) long long maxSize; 
@property (assign,nonatomic) long long maxEntrySize; 
@property (nonatomic,readonly) long long currentSize; 
@property (nonatomic,copy,readonly) NSURL * URL; 
+(id)assetCacheWithURL:(id)arg1 ;
-(void)dealloc;
-(id)allKeys;
-(long long)maxSize;
-(void)setMaxSize:(long long)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(long long)maxEntrySize;
-(long long)currentSize;
-(void)removeEntryForKey:(id)arg1 ;
-(long long)sizeOfEntryForKey:(id)arg1 ;
-(id)lastModifiedDateOfEntryForKey:(id)arg1 ;
-(void)setMaxEntrySize:(long long)arg1 ;
-(void)finalize;
@end

