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

@interface WKConnection : NSObject <WKObject> {

	WeakObjCPtr<id<WKConnectionDelegate> > _delegate;

}

@property (assign) id<WKConnectionDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)setDelegate:(id<WKConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id<WKConnectionDelegate>)delegate;
-(WebConnection*)_connection;
-(Object*)_apiObject;
-(void)sendMessageWithName:(id)arg1 body:(id)arg2 ;
@end

