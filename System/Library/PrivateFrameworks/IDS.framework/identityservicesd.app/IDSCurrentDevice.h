/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:02 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface IDSCurrentDevice : NSObject {

	NSString* _localDeviceIdentifier;

}

@property (nonatomic,readonly) NSData * encryptionClassAKey; 
@property (nonatomic,readonly) NSData * encryptionClassCKey; 
@property (nonatomic,readonly) NSData * encryptionClassDKey; 
@property (nonatomic,readonly) BOOL hasAllEncryptionKeys; 
@property (nonatomic,retain,readonly) NSString * deviceIdentifier; 
+(id)sharedInstance;
-(NSData *)encryptionClassAKey;
-(NSData *)encryptionClassCKey;
-(NSData *)encryptionClassDKey;
-(BOOL)hasAllEncryptionKeys;
-(id)_deviceIdentifierKeychainID;
-(void)regenerateDeviceIdentifier;
-(id)init;
-(NSString *)deviceIdentifier;
@end

