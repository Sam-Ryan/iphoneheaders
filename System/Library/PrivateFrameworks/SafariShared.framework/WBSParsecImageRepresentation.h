/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecModel.h>

@protocol OS_dispatch_group;
@class NSString, UIImage, NSObject, NSNumber;

@interface WBSParsecImageRepresentation : WBSParsecModel {

	NSString* _dataString;
	NSString* _identifier;
	NSString* _imageURLString;
	UIImage* _image;
	BOOL _template;
	NSObject*<OS_dispatch_group> _downloadGroup;
	NSNumber* _baselineOffset;
	NSNumber* _roundCornerRadius;

}

@property (nonatomic,readonly) NSNumber * baselineOffset;                 //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (nonatomic,readonly) NSNumber * roundCornerRadius;              //@synthesize roundCornerRadius=_roundCornerRadius - In the implementation block
+(id)schema;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSNumber *)baselineOffset;
-(id)initWithJSONObject:(id)arg1 ;
-(id)imageWithSession:(id)arg1 ;
-(void)_fetchImageData;
-(id)imageWithScaleFactor:(double)arg1 ;
-(void)imageWithCompletion:(/*^block*/id)arg1 forScale:(double)arg2 ;
-(id)test_data;
-(id)test_identifier;
-(id)test_imageURLString;
-(BOOL)test_isTemplate;
-(NSNumber *)roundCornerRadius;
@end
