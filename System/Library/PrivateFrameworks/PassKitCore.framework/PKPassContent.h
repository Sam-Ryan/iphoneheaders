/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKContent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKImage, NSString, NSArray, PKPassPersonalization;

@interface PKPassContent : PKContent <NSSecureCoding> {

	long long _transitType;
	PKImage* _footerImage;
	NSString* _logoText;
	NSArray* _frontFieldBuckets;
	NSArray* _backFieldBuckets;
	PKPassPersonalization* _personalization;

}

@property (assign,nonatomic) long long transitType;                              //@synthesize transitType=_transitType - In the implementation block
@property (nonatomic,retain) PKImage * footerImage;                              //@synthesize footerImage=_footerImage - In the implementation block
@property (nonatomic,copy) NSString * logoText;                                  //@synthesize logoText=_logoText - In the implementation block
@property (nonatomic,copy) NSArray * frontFieldBuckets;                          //@synthesize frontFieldBuckets=_frontFieldBuckets - In the implementation block
@property (nonatomic,copy) NSArray * backFieldBuckets;                           //@synthesize backFieldBuckets=_backFieldBuckets - In the implementation block
@property (nonatomic,copy) PKPassPersonalization * personalization;              //@synthesize personalization=_personalization - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setFooterImage:(PKImage *)arg1 ;
-(void)setLogoText:(NSString *)arg1 ;
-(void)setTransitType:(long long)arg1 ;
-(void)setFrontFieldBuckets:(NSArray *)arg1 ;
-(void)setBackFieldBuckets:(NSArray *)arg1 ;
-(void)setPersonalization:(PKPassPersonalization *)arg1 ;
-(long long)transitType;
-(PKImage *)footerImage;
-(void)flushFormattedFieldValues;
-(NSString *)logoText;
-(NSArray *)frontFieldBuckets;
-(PKPassPersonalization *)personalization;
-(NSArray *)backFieldBuckets;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
@end

