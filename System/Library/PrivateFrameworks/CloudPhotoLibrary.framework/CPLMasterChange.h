/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLItemChange.h>

@class NSArray, NSDate, NSString, NSData;

@interface CPLMasterChange : CPLItemChange {

	NSArray* _resources;
	NSDate* _creationDate;
	NSString* _itemType;
	NSDate* _importDate;
	NSString* _filename;
	NSString* _importGroupIdentifier;
	NSString* _mediaMetaDataType;
	NSData* _mediaMetaData;
	long long _originalOrientation;
	unsigned long long _fullSizeJPEGSource;

}

@property (nonatomic,copy) NSArray * resources;                                  //@synthesize resources=_resources - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                                //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSString * itemType;                                  //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,readonly) BOOL isImage; 
@property (nonatomic,readonly) BOOL isVideo; 
@property (nonatomic,copy) NSDate * importDate;                                  //@synthesize importDate=_importDate - In the implementation block
@property (nonatomic,copy) NSString * filename;                                  //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy) NSString * importGroupIdentifier;                     //@synthesize importGroupIdentifier=_importGroupIdentifier - In the implementation block
@property (nonatomic,copy) NSString * mediaMetaDataType;                         //@synthesize mediaMetaDataType=_mediaMetaDataType - In the implementation block
@property (nonatomic,retain) NSData * mediaMetaData;                             //@synthesize mediaMetaData=_mediaMetaData - In the implementation block
@property (assign,nonatomic) long long originalOrientation;                      //@synthesize originalOrientation=_originalOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long fullSizeJPEGSource;              //@synthesize fullSizeJPEGSource=_fullSizeJPEGSource - In the implementation block
-(id)init;
-(void)setName:(id)arg1 ;
-(id)name;
-(BOOL)isVideo;
-(NSArray *)resources;
-(void)setResources:(NSArray *)arg1 ;
-(long long)dequeueOrder;
-(id)propertiesForChangeType:(unsigned long long)arg1 ;
-(/*^block*/id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1 ;
-(void)prepareForStorage;
-(void)awakeFromStorage;
-(unsigned long long)dataClassType;
-(void)setFilename:(NSString *)arg1 ;
-(long long)originalOrientation;
-(void)setOriginalOrientation:(long long)arg1 ;
-(void)setImportDate:(NSDate *)arg1 ;
-(void)setFullSizeJPEGSource:(unsigned long long)arg1 ;
-(unsigned long long)fullSizeJPEGSource;
-(NSDate *)importDate;
-(void)setMediaMetaData:(NSData *)arg1 ;
-(void)setMediaMetaDataType:(NSString *)arg1 ;
-(void)setImportGroupIdentifier:(NSString *)arg1 ;
-(BOOL)supportsResources;
-(NSData *)mediaMetaData;
-(NSString *)mediaMetaDataType;
-(NSString *)importGroupIdentifier;
-(NSString *)itemType;
-(void)setItemType:(NSString *)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(id)propertiesDescription;
-(BOOL)isImage;
-(NSString *)filename;
@end

