/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _MFMailAccountProxySource;

@interface MFMailAccountProxyGenerator : NSObject {

	_MFMailAccountProxySource* _proxySource;
	BOOL _allowsRestrictedAccounts;

}
-(void)dealloc;
-(id)init;
-(id)initWithAllowsRestrictedAccounts:(BOOL)arg1 ;
-(id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(BOOL)arg2 originatingBundleID:(id)arg3 sourceAccountManagement:(int)arg4 ;
-(id)defaultMailAccountProxyForDeliveryOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(id)activeAccountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(id)allAccountProxies;
-(id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(BOOL)arg2 ;
@end

