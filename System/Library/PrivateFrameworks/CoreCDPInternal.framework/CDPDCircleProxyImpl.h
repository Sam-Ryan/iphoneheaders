/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPDCircleProxy.h>

@class CDPContext, NSString;

@interface CDPDCircleProxyImpl : NSObject <CDPDCircleProxy> {

	CDPContext* _cdpContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CDPContext * cdpContext;               //@synthesize cdpContext=_cdpContext - In the implementation block
+(BOOL)canAuthenticate;
+(void)registerCredentialsFromContext:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(id)peerId;
-(unsigned long long)peerCount;
-(int)circleStatus:(id*)arg1 ;
-(BOOL)_performSOSCBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)peerDeviceNamesByPeerID;
-(BOOL)synchronizeCircleViews;
-(BOOL)removeThisDeviceFromCircle:(id*)arg1 ;
-(BOOL)requestToJoinCircle:(id*)arg1 ;
-(BOOL)requestToJoinCircleAfterRestore:(id*)arg1 ;
-(BOOL)requestToResetCircle:(id*)arg1 ;
-(BOOL)viewMemberForAutofillPasswords:(id*)arg1 ;
-(BOOL)setViewsWithEnableSet:(id)arg1 disableSet:(id)arg2 ;
-(BOOL)hasNonViewAwarePeers;
-(BOOL)removeNonViewAwarePeers:(id*)arg1 ;
-(CDPContext *)cdpContext;
-(void)setCdpContext:(CDPContext *)arg1 ;
@end

