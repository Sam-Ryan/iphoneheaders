/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPublishStorageProtocolDelegate <NSObject>
@required
-(int)publishStorageProtocol:(id)arg1 didRequestFDForAsset:(id)arg2;
-(void)publishStorageProtocol:(id)arg1 didFinishUsingFD:(int)arg2 forAsset:(id)arg3;
-(void)publishStorageProtocol:(id)arg1 didFinishUploadingAsset:(id)arg2 error:(id)arg3;
-(void)publishStorageProtocolDidFinishPublishingAllAssets:(id)arg1;

@end

