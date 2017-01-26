/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, HAPPairingKey;

@interface HAPPairingIdentity : NSObject {

	NSString* _identifier;
	HAPPairingKey* _publicKey;
	HAPPairingKey* _privateKey;
	unsigned long long _permissions;

}

@property (nonatomic,copy,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) HAPPairingKey * publicKey;                   //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,readonly) HAPPairingKey * privateKey;                  //@synthesize privateKey=_privateKey - In the implementation block
@property (nonatomic,readonly) unsigned long long permissions;              //@synthesize permissions=_permissions - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(NSString *)identifier;
-(id)shortDescription;
-(unsigned long long)permissions;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(HAPPairingKey *)privateKey;
-(id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3 permissions:(unsigned long long)arg4 ;
-(HAPPairingKey *)publicKey;
@end
