/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet, _CDContact, NSString, NSSet;

@interface _CDAdvisedInteraction : NSObject <NSCopying, NSSecureCoding> {

	NSMutableSet* _reasons;
	_CDContact* _contact;
	NSString* _account;
	NSString* _bundleId;
	long long _mechanism;
	double _score;
	long long _similarOutgoingInteractionsCount;
	long long _similarIncomingInteractionsCount;
	long long _similarBidirectionalInteractionsCount;

}

@property (retain) _CDContact * contact;                                         //@synthesize contact=_contact - In the implementation block
@property (retain) NSString * account;                                           //@synthesize account=_account - In the implementation block
@property (retain) NSString * bundleId;                                          //@synthesize bundleId=_bundleId - In the implementation block
@property (assign) long long mechanism;                                          //@synthesize mechanism=_mechanism - In the implementation block
@property (assign) double score;                                                 //@synthesize score=_score - In the implementation block
@property (retain) NSSet * reasons; 
@property (assign) long long similarOutgoingInteractionsCount;                   //@synthesize similarOutgoingInteractionsCount=_similarOutgoingInteractionsCount - In the implementation block
@property (assign) long long similarIncomingInteractionsCount;                   //@synthesize similarIncomingInteractionsCount=_similarIncomingInteractionsCount - In the implementation block
@property (assign) long long similarBidirectionalInteractionsCount;              //@synthesize similarBidirectionalInteractionsCount=_similarBidirectionalInteractionsCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(id)descriptionOfReasons:(id)arg1 ;
-(void)setMechanism:(long long)arg1 ;
-(void)setReasons:(NSSet *)arg1 ;
-(void)addReasons:(id)arg1 ;
-(long long)similarOutgoingInteractionsCount;
-(void)setSimilarOutgoingInteractionsCount:(long long)arg1 ;
-(long long)similarIncomingInteractionsCount;
-(void)setSimilarIncomingInteractionsCount:(long long)arg1 ;
-(long long)similarBidirectionalInteractionsCount;
-(void)setSimilarBidirectionalInteractionsCount:(long long)arg1 ;
-(void)setScore:(double)arg1 ;
-(long long)mechanism;
-(void)addReason:(long long)arg1 ;
-(NSSet *)reasons;
-(_CDContact *)contact;
-(void)setContact:(_CDContact *)arg1 ;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(double)score;
@end

