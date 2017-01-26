/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:15:52 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryConcurrentOperation.h>

@class NSError, NSMutableArray, NSURLSession, ML3MusicLibrary, NSString, NSURL;

@interface CloudArtworkImportOperation : CloudLibraryConcurrentOperation {

	NSError* _operationError;
	NSMutableArray* _completionHandlers;
	unsigned _mediaType;
	NSURLSession* _URLSession;
	ML3MusicLibrary* _musicLibrary;
	unsigned long long _cloudID;
	NSString* _artworkToken;
	long long _artworkType;
	long long _sourceType;
	NSURL* _assetURL;

}

@property (nonatomic,readonly) NSURLSession * URLSession;                   //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,readonly) ML3MusicLibrary * musicLibrary;              //@synthesize musicLibrary=_musicLibrary - In the implementation block
@property (nonatomic,readonly) unsigned long long cloudID;                  //@synthesize cloudID=_cloudID - In the implementation block
@property (nonatomic,readonly) NSString * artworkToken;                     //@synthesize artworkToken=_artworkToken - In the implementation block
@property (nonatomic,readonly) long long artworkType;                       //@synthesize artworkType=_artworkType - In the implementation block
@property (nonatomic,readonly) long long sourceType;                        //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic) unsigned mediaType;                            //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy) NSURL * assetURL;                                //@synthesize assetURL=_assetURL - In the implementation block
-(id)initWithURLSession:(id)arg1 musicLibrary:(id)arg2 cloudID:(unsigned long long)arg3 artworkToken:(id)arg4 artworkType:(long long)arg5 sourceType:(long long)arg6 ;
-(unsigned long long)cloudID;
-(void)callCompletionHandlers;
-(id)description;
-(void)start;
-(long long)sourceType;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(long long)artworkType;
-(ML3MusicLibrary *)musicLibrary;
-(NSString *)artworkToken;
-(NSURLSession *)URLSession;
-(void)setAssetURL:(NSURL *)arg1 ;
-(unsigned)mediaType;
-(NSURL *)assetURL;
-(void)setMediaType:(unsigned)arg1 ;
@end

