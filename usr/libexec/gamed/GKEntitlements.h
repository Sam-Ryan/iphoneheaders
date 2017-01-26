/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:12 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GKEntitlements : NSObject {

	unsigned long long _entitlements;

}
-(BOOL)hasAnyEntitlement;
-(unsigned long long)_entitlementForName:(id)arg1 ;
-(unsigned long long)_valuesForEntitlement:(id)arg1 forConnection:(id)arg2 ;
-(BOOL)_shouldBypasAuthenticationForConnection:(id)arg1 ;
-(BOOL)hasEntitlements:(unsigned long long)arg1 ;
-(BOOL)hasAnyPrivateEntitlement;
-(id)description;
-(id)initWithConnection:(id)arg1 ;
@end
