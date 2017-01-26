/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSettingsServiceDelegate.h>

@class AFSettingsConnection, NSString;

@interface AFSettingsConnectionServiceDelegate : NSObject <AFSettingsServiceDelegate> {

	AFSettingsConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)syncVerificationPartialResult:(id)arg1 ;
-(oneway void)syncVerificationServerReport:(id)arg1 ;
-(id)initWithSettingsConnection:(id)arg1 ;
@end

