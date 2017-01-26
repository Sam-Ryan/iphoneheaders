/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate;

@interface HMHomeInvitationData : NSObject <NSSecureCoding> {

	NSUUID* _identifier;
	NSDate* _startDate;
	NSDate* _endDate;
	long long _invitationState;

}

@property (nonatomic,copy,readonly) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate;               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                 //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) long long invitationState;               //@synthesize invitationState=_invitationState - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)homeInvitationStateDescription:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSUUID *)identifier;
-(void)setInvitationState:(long long)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(long long)invitationState;
-(id)initWithInvitationState:(long long)arg1 invitationIdentifier:(id)arg2 expiryDate:(id)arg3 ;
@end

