/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSSubscribeStreamsProtocolDelegate <MSStreamsProtocolDelegate>
@required
-(void)subscribeStreamsProtocol:(id)arg1 willReceiveUpdatesForPersonID:(id)arg2 wasReset:(BOOL)arg3 metadata:(id)arg4;
-(void)subscribeStreamsProtocol:(id)arg1 didReceiveAssetCollections:(id)arg2 forPersonID:(id)arg3;
-(void)subscribeStreamsProtocol:(id)arg1 didFinishReceivingUpdatesForPersonID:(id)arg2 ctag:(id)arg3;
-(void)subscribeStreamsProtocol:(id)arg1 didFindDisappearedSubscriptionForPersonID:(id)arg2;
-(void)subscribeStreamsProtocol:(id)arg1 didFindTemporarilyUnavailableSubscriptionForPersonID:(id)arg2;
-(void)subscribeStreamsProtocol:(id)arg1 didFindShareState:(id)arg2;
-(void)subscribeStreamsProtocol:(id)arg1 didFinishError:(id)arg2;
-(void)subscribeStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;

@end

