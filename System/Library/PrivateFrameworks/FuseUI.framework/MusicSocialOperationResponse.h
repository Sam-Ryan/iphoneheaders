/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface MusicSocialOperationResponse : NSObject {

	BOOL _serverSuccess;
	id _responseData;
	NSError* _error;

}

@property (assign,nonatomic) BOOL serverSuccess;              //@synthesize serverSuccess=_serverSuccess - In the implementation block
@property (nonatomic,copy) id responseData;                   //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,retain) NSError * error;                 //@synthesize error=_error - In the implementation block
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setServerSuccess:(BOOL)arg1 ;
-(BOOL)serverSuccess;
-(id)responseData;
-(void)setResponseData:(id)arg1 ;
@end

