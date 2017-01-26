/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <SafariShared/WBSFormMetadataController.h>

@class WebScriptWorld;

@interface WBUFormMetadataControllerWK1 : WBSFormMetadataController {

	WebScriptWorld* _scriptWorld;

}

@property (nonatomic,readonly) WebScriptWorld * scriptWorld;              //@synthesize scriptWorld=_scriptWorld - In the implementation block
+(id)sharedFormMetadataController;
-(id)formAutoFillNodeForJSWrapper:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(void)clearScriptWorld;
-(WebScriptWorld *)scriptWorld;
@end

