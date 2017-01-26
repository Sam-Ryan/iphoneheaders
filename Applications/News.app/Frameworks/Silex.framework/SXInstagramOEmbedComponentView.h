/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXOEmbedComponentView.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@class NSString;

@interface SXInstagramOEmbedComponentView : SXOEmbedComponentView <WKNavigationDelegate> {

	BOOL _assumeDone;
	CGSize _viewportSize;

}

@property (assign,nonatomic) BOOL assumeDone;                       //@synthesize assumeDone=_assumeDone - In the implementation block
@property (assign,nonatomic) CGSize viewportSize;                   //@synthesize viewportSize=_viewportSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentComponent;
-(id)modifiedHTML:(id)arg1 ;
-(BOOL)shouldAllowRequestToURL:(id)arg1 ;
-(void)updateWebView:(id)arg1 toWidth:(double)arg2 ;
-(id)unableToLoadMessage;
-(void)setAssumeDone:(BOOL)arg1 ;
-(BOOL)assumeDone;
-(void)updateWebViewWithRectString:(id)arg1 ;
-(id)URL;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(CGSize)viewportSize;
-(void)setViewportSize:(CGSize)arg1 ;
@end

