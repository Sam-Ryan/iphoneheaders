/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NAUIWeakRef;

@interface NAUIWeakDisplayLinkTargetProxy : NSObject {

	NAUIWeakRef* _weakTarget;
	SEL _weakTargetSelector;

}
+(SEL)proxyDisplayLinkSelector;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)_weakDisplayLinkTargetProxyAction:(id)arg1 ;
@end

