/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSAccount, SKUIClientContext, SSVRedeemCodeMetadata, NSError, SKUIRedeemConfiguration;

@interface SKUIRedeemPreflightResult : NSObject {

	SSAccount* _account;
	SKUIClientContext* _clientContext;
	SSVRedeemCodeMetadata* _codeMetadata;
	NSError* _error;
	SKUIRedeemConfiguration* _redeemConfiguration;
	long long _resultType;

}

@property (nonatomic,retain) SSAccount * account;                                        //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                          //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) SSVRedeemCodeMetadata * codeMetadata;                       //@synthesize codeMetadata=_codeMetadata - In the implementation block
@property (nonatomic,copy) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) SKUIRedeemConfiguration * redeemConfiguration;              //@synthesize redeemConfiguration=_redeemConfiguration - In the implementation block
@property (assign,nonatomic) long long resultType;                                       //@synthesize resultType=_resultType - In the implementation block
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setRedeemConfiguration:(SKUIRedeemConfiguration *)arg1 ;
-(long long)resultType;
-(SSAccount *)account;
-(SKUIRedeemConfiguration *)redeemConfiguration;
-(SSVRedeemCodeMetadata *)codeMetadata;
-(void)setAccount:(SSAccount *)arg1 ;
-(void)setCodeMetadata:(SSVRedeemCodeMetadata *)arg1 ;
-(void)setResultType:(long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
@end

