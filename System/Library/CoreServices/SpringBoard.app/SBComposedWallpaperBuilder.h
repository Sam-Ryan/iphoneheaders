/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:23 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class SBFFileCache;

@interface SBComposedWallpaperBuilder : NSObject {

	SBFFileCache* _fileCache;

}

@property (nonatomic,readonly) SBFFileCache * fileCache;              //@synthesize fileCache=_fileCache - In the implementation block
-(id)initWithAssetCache:(id)arg1 ;
-(void)buildWallpaperFromSpecification:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)buildWallpaperOfSize:(CGSize)arg1 fromSpecification:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(SBFFileCache *)fileCache;
-(void)buildWallpaperOfSize:(CGSize)arg1 fromSpecification:(id)arg2 assets:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)drawColorLayer:(id)arg1 inBounds:(CGRect)arg2 ;
-(id)drawImageLayer:(id)arg1 inBounds:(CGRect)arg2 assets:(id)arg3 ;
-(id)init;
@end

