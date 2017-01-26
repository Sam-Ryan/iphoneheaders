/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSMutableArray, NSMutableDictionary;

@interface CKDAcceptSharesOperation : CKDDatabaseOperation {

	int _numShareAcceptAttempts;
	/*^block*/id _acceptCompletionBlock;
	NSMutableArray* _shareURLsToAccept;
	NSMutableArray* _acceptedShareURLsToFetch;
	NSMutableDictionary* _shareInfosToAcceptByURL;

}

@property (nonatomic,copy) id acceptCompletionBlock;                                     //@synthesize acceptCompletionBlock=_acceptCompletionBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * shareURLsToAccept;                         //@synthesize shareURLsToAccept=_shareURLsToAccept - In the implementation block
@property (nonatomic,retain) NSMutableArray * acceptedShareURLsToFetch;                  //@synthesize acceptedShareURLsToFetch=_acceptedShareURLsToFetch - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareInfosToAcceptByURL;              //@synthesize shareInfosToAcceptByURL=_shareInfosToAcceptByURL - In the implementation block
@property (assign,nonatomic) int numShareAcceptAttempts;                                 //@synthesize numShareAcceptAttempts=_numShareAcceptAttempts - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setAcceptCompletionBlock:(id)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(BOOL)makeStateTransition;
-(NSMutableArray *)shareURLsToAccept;
-(void)_fetchInfoForShares;
-(void)_prepareShareInfo;
-(void)_fetchAcceptedShares;
-(BOOL)_acceptShares;
-(NSMutableArray *)acceptedShareURLsToFetch;
-(id)acceptCompletionBlock;
-(void)_performCallbackForURL:(id)arg1 withShare:(id)arg2 error:(id)arg3 ;
-(NSMutableDictionary *)shareInfosToAcceptByURL;
-(int)numShareAcceptAttempts;
-(void)setNumShareAcceptAttempts:(int)arg1 ;
-(void)_handleShareURLAccepted:(id)arg1 forShare:(id)arg2 responseCode:(id)arg3 ;
-(id)_addSelfIdentityToShareInfoPublicPCS:(id)arg1 forShareWithURL:(id)arg2 error:(id*)arg3 ;
-(void)setShareURLsToAccept:(NSMutableArray *)arg1 ;
-(void)setAcceptedShareURLsToFetch:(NSMutableArray *)arg1 ;
-(void)setShareInfosToAcceptByURL:(NSMutableDictionary *)arg1 ;
@end

