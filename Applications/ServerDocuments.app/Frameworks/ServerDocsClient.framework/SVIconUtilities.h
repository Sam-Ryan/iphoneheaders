/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/ServerDocuments.app/Frameworks/ServerDocsClient.framework/ServerDocsClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface SVIconUtilities : NSObject {

	NSCache* _iconCache;

}

@property (nonatomic,retain) NSCache * iconCache;              //@synthesize iconCache=_iconCache - In the implementation block
+(id)sharedIconUtilities;
+(id)_createThumbnailWithImage:(id)arg1 forSize:(double)arg2 ;
+(id)_createIconForFileWithName:(id)arg1 type:(id)arg2 size:(double)arg3 ;
+(id)_createFolderIconForSize:(double)arg1 ;
+(id)_createServerFolderIconForSize:(double)arg1 ;
+(id)_createPersonalFolderIconForSize:(double)arg1 ;
+(id)_createSharepointIconForSize:(double)arg1 ;
+(id)_suffixForSize:(double)arg1 ;
+(id)_createBadgedFolderIconWithImage:(id)arg1 size:(double)arg2 ;
-(id)serverFolderIconForSize:(double)arg1 ;
-(void)setIconCache:(NSCache *)arg1 ;
-(id)_cachedIconForKey:(id)arg1 withIconCreationBlock:(/*^block*/id)arg2 ;
-(id)folderIconForSize:(double)arg1 ;
-(id)cachedThumbnailForFileAtPath:(id)arg1 versionIdentifier:(id)arg2 size:(double)arg3 ;
-(id)thumbnailForFileAtPath:(id)arg1 thumbnailURL:(id)arg2 versionIdentifier:(id)arg3 size:(double)arg4 ;
-(id)thumbnailForLocalFileAtURL:(id)arg1 size:(double)arg2 ;
-(id)iconForFileWithName:(id)arg1 type:(id)arg2 size:(double)arg3 ;
-(id)personalFolderIconForSize:(double)arg1 ;
-(id)sharepointIconForSize:(double)arg1 ;
-(void)clearCache;
-(NSCache *)iconCache;
@end

