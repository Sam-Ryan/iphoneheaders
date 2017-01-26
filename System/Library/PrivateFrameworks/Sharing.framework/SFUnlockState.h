/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface SFUnlockState : NSObject <NSSecureCoding> {

	NSNumber* _unlockEnabled;
	NSNumber* _remotePasscodeEnabled;

}

@property (readonly) NSNumber * unlockEnabled;                      //@synthesize unlockEnabled=_unlockEnabled - In the implementation block
@property (readonly) NSNumber * remotePasscodeEnabled;              //@synthesize remotePasscodeEnabled=_remotePasscodeEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithUnlockEnabled:(id)arg1 remotePasscodeEnabled:(id)arg2 ;
-(NSNumber *)unlockEnabled;
-(NSNumber *)remotePasscodeEnabled;
@end

