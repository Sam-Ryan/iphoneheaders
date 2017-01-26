/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:26:54 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/kbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/TIKeyboardActivityObserving.h>

@class NSXPCListener, NSString;

@interface TIKeyboardInputManagerServer : NSObject <NSXPCListenerDelegate, TIKeyboardActivityObserving> {

	NSXPCListener* _listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedKeyboardInputManagerServer;
-(void)prepareForInactivity;
-(void)dealloc;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)appleKeyboardsInternalSettingsChanged:(id)arg1 ;
-(void)handleMemoryPressureLevel:(unsigned long long)arg1 ;
-(void)keyboardActivityDidTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(void)reduceCacheToSize:(unsigned long long)arg1 ;
@end

