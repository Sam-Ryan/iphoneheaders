/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString;

@interface DMFFetchControlGroupIdentifiersRequest : CATTaskRequest {

	BOOL _includeTemporary;
	NSString* _leaderIdentifier;

}

@property (nonatomic,copy) NSString * leaderIdentifier;              //@synthesize leaderIdentifier=_leaderIdentifier - In the implementation block
@property (assign,nonatomic) BOOL includeTemporary;                  //@synthesize includeTemporary=_includeTemporary - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIncludeTemporary:(BOOL)arg1 ;
-(void)setLeaderIdentifier:(NSString *)arg1 ;
-(BOOL)includeTemporary;
-(NSString *)leaderIdentifier;
@end

