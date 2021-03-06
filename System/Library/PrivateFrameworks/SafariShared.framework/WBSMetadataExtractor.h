/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WKWebProcessPlugInScriptWorld, JSContext, WKWebProcessPlugInFrame;

@interface WBSMetadataExtractor : NSObject {

	WKWebProcessPlugInScriptWorld* _webProcessPlugInScriptWorld;
	JSContext* _context;
	WKWebProcessPlugInFrame* _webProcessPlugInFrame;

}

@property (nonatomic,readonly) WKWebProcessPlugInFrame * webProcessPlugInFrame;              //@synthesize webProcessPlugInFrame=_webProcessPlugInFrame - In the implementation block
@property (nonatomic,readonly) JSContext * context; 
+(id)metadataExtractorScriptSource;
-(void)dealloc;
-(JSContext *)context;
-(id)initWithWebProcessPlugInFrame:(id)arg1 useNormalWorld:(BOOL)arg2 ;
-(id)makeContext;
-(id)_resultForInvokingFunctionWithName:(id)arg1 ;
-(id)initWithWebProcessPlugInFrame:(id)arg1 ;
-(id)appleTouchIconURLs;
-(id)faviconURLs;
-(WKWebProcessPlugInFrame *)webProcessPlugInFrame;
@end

