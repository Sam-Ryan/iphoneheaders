/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <MobileSlideShow/PLSTransportCoding.h>

@class NSString;

@interface PLSAssetProperties : NSObject <NSCoding, PLSTransportCoding> {

	id _imageProperties;
	id _fileSystemProperties;
	NSString* _fileName;

}

@property (nonatomic,retain) id imageProperties;                   //@synthesize imageProperties=_imageProperties - In the implementation block
@property (nonatomic,retain) id fileSystemProperties;              //@synthesize fileSystemProperties=_fileSystemProperties - In the implementation block
@property (nonatomic,retain) NSString * fileName;                  //@synthesize fileName=_fileName - In the implementation block
+(id)assetProperties;
-(id)initFromPropertyList:(id)arg1 ;
-(void)setFileSystemProperties:(id)arg1 ;
-(id)fileSystemProperties;
-(BOOL)readPropertiesFromAssetURL:(id)arg1 error:(id*)arg2 ;
-(void)setImageProperties:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)propertyList;
-(id)imageProperties;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
@end

