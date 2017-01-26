/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecModel.h>

@class NSString;

@interface WBSParsecMovieCardDetailSection : WBSParsecModel {

	NSString* _title;
	NSString* _descriptionText;
	unsigned long long _descriptionMaxLines;

}

@property (nonatomic,copy,readonly) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptionText;                     //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,readonly) unsigned long long descriptionMaxLines;              //@synthesize descriptionMaxLines=_descriptionMaxLines - In the implementation block
+(id)movieCardDetailSectionSchema;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSString *)descriptionText;
-(unsigned long long)descriptionMaxLines;
@end
