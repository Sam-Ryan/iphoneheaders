/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface _WKUserContentExtensionStore : NSObject <WKObject> {

	ObjectStorage<API::UserContentExtensionStore> _userContentExtensionStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)defaultStore;
+(id)storeWithURL:(id)arg1 ;
-(void)_removeAllContentExtensions;
-(void)dealloc;
-(Object*)_apiObject;
-(void)compileContentExtensionForIdentifier:(id)arg1 encodedContentExtension:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)lookupContentExtensionForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeContentExtensionForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

