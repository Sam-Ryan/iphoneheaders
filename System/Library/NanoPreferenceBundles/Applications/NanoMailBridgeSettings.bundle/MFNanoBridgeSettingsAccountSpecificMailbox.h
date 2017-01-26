/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:32:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoMailBridgeSettings.bundle/NanoMailBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailBridgeSettings/MFNanoBridgeSettingsMailbox.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MFMailboxUid, NSURL, NSString;

@interface MFNanoBridgeSettingsAccountSpecificMailbox : MFNanoBridgeSettingsMailbox <NSSecureCoding> {

	MFMailboxUid* _mailboxUid;
	NSURL* _mailboxURL;
	NSString* _accountUniqueIdentifier;

}

@property (nonatomic,readonly) NSString * accountUniqueIdentifier;              //@synthesize accountUniqueIdentifier=_accountUniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * mailboxURL;                              //@synthesize mailboxURL=_mailboxURL - In the implementation block
@property (nonatomic,readonly) int type; 
+(BOOL)supportsSecureCoding;
-(NSString *)accountUniqueIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isValid;
-(int)type;
-(unsigned long long)level;
-(id)icon;
-(id)displayName;
-(id)initWithMailboxUid:(id)arg1 ;
-(id)initWithAccountUniqueIdentifier:(id)arg1 mailboxURL:(id)arg2 ;
-(id)_mailboxUid;
-(NSURL *)mailboxURL;
-(void)invalidateCachedData;
@end
