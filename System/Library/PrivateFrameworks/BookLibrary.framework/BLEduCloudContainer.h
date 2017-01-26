/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:12:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface BLEduCloudContainer : NSObject {

	id _cloudToken;
	NSURL* _documentsURL;

}

@property (nonatomic,retain) id cloudToken;                     //@synthesize cloudToken=_cloudToken - In the implementation block
@property (nonatomic,retain) NSURL * documentsURL;              //@synthesize documentsURL=_documentsURL - In the implementation block
+(id)sharedEduCloudContainer;
-(BOOL)isSignedIn;
-(BOOL)addBookItem:(id)arg1 error:(id*)arg2 ;
-(id)allBookItems;
-(id)fileNameForPermlink:(id)arg1 ;
-(id)cloudToken;
-(id)cloudUrlForPermlink:(id)arg1 ;
-(BOOL)_writePlist:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)_addOrUpdateCloudEntryWithDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)_coordinatedReadOfPromisesWithError:(id*)arg1 ;
-(id)dictionaryAsBookItem:(id)arg1 path:(id)arg2 ;
-(id)performMetadataActionOnCloudURL:(id)arg1 action:(/*^block*/id)arg2 ;
-(BOOL)removeBookItem:(id)arg1 error:(id*)arg2 ;
-(void)updateBookItem:(id)arg1 error:(id*)arg2 ;
-(id)bookItemForPath:(id)arg1 ;
-(id)bookItemForPermlink:(id)arg1 ;
-(id)bookItemsForPermlinks:(id)arg1 ;
-(void)setCloudToken:(id)arg1 ;
-(void)setDocumentsURL:(NSURL *)arg1 ;
-(id)init;
-(NSURL *)documentsURL;
@end

