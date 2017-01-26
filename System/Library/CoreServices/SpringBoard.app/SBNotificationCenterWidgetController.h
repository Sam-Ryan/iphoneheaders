/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:24 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_NCWidgetController_Host_IPC.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSString;

@interface SBNotificationCenterWidgetController : NSObject <_NCWidgetController_Host_IPC, NSXPCListenerDelegate> {

	NSXPCListener* _listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultWidgetController;
+(id)_sharedInstanceCreateIfNecessary:(BOOL)arg1 ;
+(id)containingBundleIdentifierForWidgetWithBundleIdentifer:(id)arg1 ;
+(BOOL)isInternalWidgetBundleIdentifier:(id)arg1 ;
+(id)containingBundleProxyForWidgetWithBundleIdentifer:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)__setHasContent:(BOOL)arg1 forWidgetWithBundleIdentifier:(id)arg2 ;
@end

