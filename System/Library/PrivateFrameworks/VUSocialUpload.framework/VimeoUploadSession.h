/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VimeoRemoteSessionProtocol;
@interface VimeoUploadSession : NSObject {

	id<VimeoRemoteSessionProtocol> _remoteSession;

}
+(id)sharedSession;
-(id)init;
-(BOOL)uploadPost:(id)arg1 error:(id*)arg2 ;
@end

