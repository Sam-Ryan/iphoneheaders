/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:15:53 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class JaliscoAppLibrary, NSArray, NSURLSession;

@interface JaliscoAppArtworkOperation : CloudLibraryOperation {

	JaliscoAppLibrary* _appLibrary;
	NSArray* _adamIDs;
	BOOL _searchResultRequest;
	NSURLSession* _downloadURLSession;

}

@property (assign,getter=isSearchResultRequest,nonatomic) BOOL searchResultRequest;              //@synthesize searchResultRequest=_searchResultRequest - In the implementation block
+(id)cachedBitmapDataForBundleIdentifier:(id)arg1 ;
+(id)pngDataFromCachedBitmap:(id)arg1 scale:(double)arg2 ;
-(id)initWithJaliscoAppLibrary:(id)arg1 ;
-(void)setSpecificAdamIDs:(id)arg1 ;
-(void)setSearchResultRequest:(BOOL)arg1 ;
-(BOOL)isSearchResultRequest;
-(void)downloadEntry:(id)arg1 cache:(id)arg2 ;
-(id)description;
-(void)main;
@end

