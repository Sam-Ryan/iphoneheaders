/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VUSocialUpload/FlickrRequest.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSURL, NSData, NSString, NSArray;

@interface FlickrPost : FlickrRequest <NSURLConnectionDelegate> {

	BOOL _hidden;
	unsigned _visibility;
	int _safetyLevel;
	int _contentType;
	NSURL* _assetURL;
	NSData* _photoData;
	NSString* _title;
	NSString* _postDescription;
	NSArray* _tags;
	long long _photoSetID;

}

@property (nonatomic,retain) NSURL * assetURL;                        //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,retain) NSData * photoData;                      //@synthesize photoData=_photoData - In the implementation block
@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * postDescription;              //@synthesize postDescription=_postDescription - In the implementation block
@property (nonatomic,retain) NSArray * tags;                          //@synthesize tags=_tags - In the implementation block
@property (assign,nonatomic) long long photoSetID;                    //@synthesize photoSetID=_photoSetID - In the implementation block
@property (assign,nonatomic) unsigned visibility;                     //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) int safetyLevel;                         //@synthesize safetyLevel=_safetyLevel - In the implementation block
@property (assign,nonatomic) int contentType;                         //@synthesize contentType=_contentType - In the implementation block
@property (assign,nonatomic) BOOL hidden;                             //@synthesize hidden=_hidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setContentType:(int)arg1 ;
-(NSString *)postDescription;
-(void)setHidden:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(int)contentType;
-(NSArray *)tags;
-(BOOL)hidden;
-(void)setVisibility:(unsigned)arg1 ;
-(id)serializedDictionary;
-(void)setAssetURL:(NSURL *)arg1 ;
-(void)setPhotoData:(NSData *)arg1 ;
-(NSData *)photoData;
-(unsigned)visibility;
-(NSURL *)assetURL;
-(void)setTags:(NSArray *)arg1 ;
-(long long)photoSetID;
-(void)setPhotoSetID:(long long)arg1 ;
-(void)setPostDescription:(NSString *)arg1 ;
-(void)_uploadData:(id)arg1 toAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)uploadToAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)safetyLevel;
-(void)setSafetyLevel:(int)arg1 ;
@end

