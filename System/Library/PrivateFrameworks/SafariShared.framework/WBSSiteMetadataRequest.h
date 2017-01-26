/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSDictionary;

@interface WBSSiteMetadataRequest : NSObject <NSCopying> {

	NSURL* _url;
	NSDictionary* _extraInfo;

}

@property (nonatomic,readonly) NSURL * url;                                //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraInfo;              //@synthesize extraInfo=_extraInfo - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSURL *)url;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 extraInfo:(id)arg2 ;
-(NSDictionary *)extraInfo;
@end

