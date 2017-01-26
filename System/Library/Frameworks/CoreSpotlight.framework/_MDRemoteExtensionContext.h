/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/_MDExtensionContext.h>
#import <libobjc.A.dylib/_MDRemoteExtensionContextProtocol.h>

@class CSIndexExtensionRequestHandler, NSString;

@interface _MDRemoteExtensionContext : _MDExtensionContext <_MDRemoteExtensionContextProtocol> {

	CSIndexExtensionRequestHandler* _requestHandler;

}

@property (nonatomic,retain) CSIndexExtensionRequestHandler * requestHandler;              //@synthesize requestHandler=_requestHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)getLastUpdateTimeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)performJob:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(id)hostContext;
-(void)setRequestHandler:(CSIndexExtensionRequestHandler *)arg1 ;
-(CSIndexExtensionRequestHandler *)requestHandler;
@end

