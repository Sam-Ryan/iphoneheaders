/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:36 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKWebProcessPlugInScriptWorld : NSObject <WKObject> {

	ObjectStorage<WebKit::InjectedBundleScriptWorld> _world;

}

@property (readonly) InjectedBundleScriptWorld* _scriptWorld; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)world;
+(id)normalWorld;
-(void)dealloc;
-(Object*)_apiObject;
-(InjectedBundleScriptWorld*)_scriptWorld;
-(void)clearWrappers;
@end

