/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDPDataPoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray, NSString, NSURL, _CDContact;

@interface _CDInteraction : NSObject <_CDPDataPoint, NSSecureCoding> {

	BOOL _isResponse;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _uuid;
	NSString* _locationUUID;
	long long _mechanism;
	long long _direction;
	NSString* _bundleId;
	NSURL* _contentURL;
	NSString* _domainIdentifier;
	NSString* _account;
	_CDContact* _sender;
	NSArray* _recipients;
	NSArray* _keywords;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL userIsSender; 
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,readonly) NSArray * peopleIdentifiers; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) BOOL userIsThreadInitiator; 
@property (retain) NSDate * startDate;                                   //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                                     //@synthesize endDate=_endDate - In the implementation block
@property (retain) NSString * uuid;                                      //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSString * locationUUID;                              //@synthesize locationUUID=_locationUUID - In the implementation block
@property (assign) long long mechanism;                                  //@synthesize mechanism=_mechanism - In the implementation block
@property (assign) long long direction;                                  //@synthesize direction=_direction - In the implementation block
@property (assign) BOOL isResponse;                                      //@synthesize isResponse=_isResponse - In the implementation block
@property (retain) NSString * bundleId;                                  //@synthesize bundleId=_bundleId - In the implementation block
@property (retain) NSURL * contentURL;                                   //@synthesize contentURL=_contentURL - In the implementation block
@property (retain) NSString * domainIdentifier;                          //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (retain) NSString * account;                                   //@synthesize account=_account - In the implementation block
@property (retain) _CDContact * sender;                                  //@synthesize sender=_sender - In the implementation block
@property (retain) NSArray * recipients;                                 //@synthesize recipients=_recipients - In the implementation block
@property (retain) NSArray * keywords;                                   //@synthesize keywords=_keywords - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)timestamp;
-(NSString *)title;
-(NSArray *)peopleIdentifiers;
-(BOOL)userIsSender;
-(BOOL)userIsThreadInitiator;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)setDirection:(long long)arg1 ;
-(long long)direction;
-(_CDContact *)sender;
-(void)setSender:(_CDContact *)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)uuid;
-(void)setMechanism:(long long)arg1 ;
-(id)descriptionOfArray:(id)arg1 ;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(long long)mechanism;
-(void)setUuid:(NSString *)arg1 ;
-(void)setLocationUUID:(NSString *)arg1 ;
-(NSString *)locationUUID;
-(void)setIsResponse:(BOOL)arg1 ;
-(BOOL)isResponse;
-(NSURL *)contentURL;
-(void)setContentURL:(NSURL *)arg1 ;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSString *)domainIdentifier;
-(void)setKeywords:(NSArray *)arg1 ;
-(NSArray *)keywords;
@end

