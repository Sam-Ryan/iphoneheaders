/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAsset.h>

@class AVURLAssetInternal, AVAssetResourceLoader, AVAssetCache, NSString, NSURL;

@interface AVURLAsset : AVAsset {

	AVURLAssetInternal* _URLAsset;

}

@property (nonatomic,readonly) AVAssetResourceLoader * resourceLoader; 
@property (nonatomic,readonly) AVAssetCache * assetCache; 
@property (nonatomic,readonly) BOOL shouldMatchDataInCacheByURLPathComponentOnly; 
@property (nonatomic,readonly) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,copy,readonly) NSURL * URL; 
+(id)instanceIdentifierMapTable;
+(id)userInfoObjectForURLAssetInstanceIdentifier:(id)arg1 ;
+(void)setUserInfoObject:(id)arg1 forURLAsset:(id)arg2 ;
+(id)userInfoObjectForURLAsset:(id)arg1 ;
+(id)_figFileMIMETypes;
+(id)_figStreamingMIMETypes;
+(id)_figStreamingUTIs;
+(id)_figFileUTIs;
+(id)_figFilePathExtensions;
+(id)_fileUTTypes;
+(id)_streamingUTTypes;
+(id)_UTTypes;
+(id)_figMIMETypes;
+(id)_avfValidationPlist;
+(id)_getFigAssetCreationOptionsFromURLAssetInitializationOptions:(id)arg1 figAssetCreationFlags:(unsigned long long*)arg2 error:(id*)arg3 ;
+(id)_figHFSFileTypes;
+(BOOL)isPlayableExtendedMIMEType:(id)arg1 ;
+(id)audiovisualMIMETypes;
+(id)URLAssetWithURL:(id)arg1 options:(id)arg2 ;
+(id)audiovisualTypes;
-(void)_removeUserInfoObject;
-(void)_setUserInfoObject:(id)arg1 ;
-(void)_handleURLRequest:(id)arg1 ;
-(BOOL)_hasResourceLoaderDelegate;
-(AVAssetResourceLoader *)resourceLoader;
-(NSString *)cacheKey;
-(BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
-(BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;
-(id)identifyingTagClass;
-(id)_instanceIdentifier;
-(id)originalNetworkContentURL;
-(id)SHA1Digest;
-(id)downloadDestinationURL;
-(BOOL)_shouldOptimizeAccessForLinearMoviePlayback;
-(id)resolvedURL;
-(unsigned long long)downloadToken;
-(AVAssetCache *)assetCache;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSURL *)URL;
-(void)cancelLoading;
-(void)_addFigAssetNotifications;
-(void)_removeFigAssetNotifications;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(id)_absoluteURL;
-(unsigned long long)referenceRestrictions;
-(void)_tracksDidChange;
-(void)_setAssetInspectorLoader:(id)arg1 ;
-(id)_errorForFigNotificationPayload:(CFDictionaryRef)arg1 key:(CFStringRef)arg2 ;
-(Class)_classForAssetTracks;
-(id)_tracks;
-(id)lyrics;
-(id)tracks;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(void)finalize;
@end
