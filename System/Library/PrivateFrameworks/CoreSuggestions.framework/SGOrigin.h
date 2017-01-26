/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, SGSimpleNamedEmailAddress, NSArray, NSDate, NSURL;

@interface SGOrigin : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _type;
	NSString* _sourceKey;
	NSString* _externalKey;
	NSString* _contextSnippet;
	NSRange _contextSnippetRange;
	SGSimpleNamedEmailAddress* _from;
	NSArray* _to;
	NSArray* _cc;
	NSArray* _bcc;
	NSDate* _date;
	NSString* _title;
	BOOL _fromForwardedMessage;

}

@property (nonatomic,readonly) unsigned long long type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * sourceKey;                                       //@synthesize sourceKey=_sourceKey - In the implementation block
@property (nonatomic,readonly) NSString * externalKey;                                     //@synthesize externalKey=_externalKey - In the implementation block
@property (nonatomic,readonly) NSString * contextSnippet;                                  //@synthesize contextSnippet=_contextSnippet - In the implementation block
@property (nonatomic,readonly) NSRange contextSnippetRange;                                //@synthesize contextSnippetRange=_contextSnippetRange - In the implementation block
@property (nonatomic,readonly) SGSimpleNamedEmailAddress * from;                           //@synthesize from=_from - In the implementation block
@property (nonatomic,readonly) NSArray * to;                                               //@synthesize to=_to - In the implementation block
@property (nonatomic,readonly) NSArray * cc;                                               //@synthesize cc=_cc - In the implementation block
@property (nonatomic,readonly) NSArray * bcc;                                              //@synthesize bcc=_bcc - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                              //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (getter=isFromForwardedMessage,readonly) BOOL fromForwardedMessage;              //@synthesize fromForwardedMessage=_fromForwardedMessage - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
+(BOOL)supportsSecureCoding;
+(id)originWithType:(unsigned long long)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 fromForwardedMessage:(BOOL)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSURL *)url;
-(unsigned long long)type;
-(NSString *)title;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)to;
-(SGSimpleNamedEmailAddress *)from;
-(NSString *)contextSnippet;
-(NSRange)contextSnippetRange;
-(NSString *)externalKey;
-(NSArray *)bcc;
-(NSArray *)cc;
-(id)initWithType:(unsigned long long)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 fromForwardedMessage:(BOOL)arg4 ;
-(BOOL)isEqualToOrigin:(id)arg1 ;
-(NSString *)sourceKey;
-(BOOL)isFromForwardedMessage;
@end

