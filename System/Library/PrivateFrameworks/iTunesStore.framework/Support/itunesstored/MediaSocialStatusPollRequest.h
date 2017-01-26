/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:39 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface MediaSocialStatusPollRequest : NSObject <NSCopying> {

	NSNumber* _accountIdentifier;
	NSString* _activityIdentifier;
	double _pollingDuration;
	double _pollingInterval;
	long long _postIdentifier;
	NSString* _sourceApplicationIdentifier;
	double _postCreateTime;

}

@property (nonatomic,copy) NSString * activityIdentifier;                       //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * accountIdentifier;                        //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (assign,nonatomic) double pollingDuration;                            //@synthesize pollingDuration=_pollingDuration - In the implementation block
@property (assign,nonatomic) double pollingInterval;                            //@synthesize pollingInterval=_pollingInterval - In the implementation block
@property (assign,nonatomic) long long postIdentifier;                          //@synthesize postIdentifier=_postIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationIdentifier;              //@synthesize sourceApplicationIdentifier=_sourceApplicationIdentifier - In the implementation block
@property (assign,nonatomic) double postCreateTime;                             //@synthesize postCreateTime=_postCreateTime - In the implementation block
-(void)setPollingDuration:(double)arg1 ;
-(void)setPostIdentifier:(long long)arg1 ;
-(void)setPostCreateTime:(double)arg1 ;
-(double)pollingDuration;
-(long long)postIdentifier;
-(double)postCreateTime;
-(void)setSourceApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)sourceApplicationIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSString *)activityIdentifier;
-(void)setPollingInterval:(double)arg1 ;
-(double)pollingInterval;
-(void)setActivityIdentifier:(NSString *)arg1 ;
@end

