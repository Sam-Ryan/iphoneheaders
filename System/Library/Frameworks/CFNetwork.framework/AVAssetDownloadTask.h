/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLSessionTask.h>

@class AVURLAsset, NSURL, NSDictionary, NSArray, NSURLRequest, NSURLResponse;

@interface AVAssetDownloadTask : NSURLSessionTask {

	AVURLAsset* _URLAsset;
	NSURL* _destinationURL;
	NSDictionary* _options;
	NSArray* _loadedTimeRanges;

}

@property (nonatomic,readonly) AVURLAsset * URLAsset;                   //@synthesize URLAsset=_URLAsset - In the implementation block
@property (nonatomic,readonly) NSURL * destinationURL;                  //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;                  //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSArray * loadedTimeRanges;              //@synthesize loadedTimeRanges=_loadedTimeRanges - In the implementation block
@property (copy,readonly) NSURLRequest * originalRequest; 
@property (copy,readonly) NSURLRequest * currentRequest; 
@property (copy,readonly) NSURLResponse * response; 
-(AVURLAsset *)URLAsset;
-(NSDictionary *)options;
-(NSArray *)loadedTimeRanges;
-(NSURL *)destinationURL;
@end

