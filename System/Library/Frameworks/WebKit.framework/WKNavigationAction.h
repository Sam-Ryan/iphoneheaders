/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSURL, WKFrameInfo, NSURLRequest, NSString;

@interface WKNavigationAction : NSObject <WKObject> {

	ObjectStorage<API::NavigationAction> _navigationAction;

}

@property (nonatomic,readonly) NSURL * _originalURL; 
@property (getter=_isUserInitiated,nonatomic,readonly) BOOL _userInitiated; 
@property (nonatomic,readonly) BOOL _canHandleRequest; 
@property (nonatomic,readonly) BOOL _shouldOpenExternalSchemes; 
@property (nonatomic,readonly) BOOL _shouldOpenAppLinks; 
@property (nonatomic,readonly) BOOL _shouldOpenExternalURLs; 
@property (nonatomic,copy,readonly) WKFrameInfo * sourceFrame; 
@property (nonatomic,copy,readonly) WKFrameInfo * targetFrame; 
@property (nonatomic,readonly) long long navigationType; 
@property (nonatomic,copy,readonly) NSURLRequest * request; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(BOOL)_shouldOpenExternalSchemes;
-(NSURL *)_originalURL;
-(BOOL)_isUserInitiated;
-(BOOL)_canHandleRequest;
-(BOOL)_shouldOpenAppLinks;
-(BOOL)_shouldOpenExternalURLs;
-(long long)navigationType;
-(void)dealloc;
-(NSString *)description;
-(NSURLRequest *)request;
-(WKFrameInfo *)targetFrame;
-(Object*)_apiObject;
-(WKFrameInfo *)sourceFrame;
@end

