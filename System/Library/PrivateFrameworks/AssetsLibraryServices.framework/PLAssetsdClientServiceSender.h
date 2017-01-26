/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLAssetsdClientService.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface PLAssetsdClientServiceSender : NSObject <PLAssetsdClientService> {

	NSObject*<OS_xpc_object> _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)downloadStatusForIdentifier:(id)arg1 progress:(double)arg2 completed:(BOOL)arg3 error:(id)arg4 ;
-(id)initWithConnection:(id)arg1 ;
@end

