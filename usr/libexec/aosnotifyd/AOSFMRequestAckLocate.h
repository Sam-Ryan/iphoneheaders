/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:15:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <aosnotifyd/AOSFMRequest.h>

@class NSDictionary, NSURL, NSString;

@interface AOSFMRequestAckLocate : AOSFMRequest {

	NSDictionary* _locateCommand;
	NSURL* _ackURL;
	long long _cmdStatusCode;
	NSString* _cmdStatusMsg;

}

@property (nonatomic,retain) NSDictionary * locateCommand;              //@synthesize locateCommand=_locateCommand - In the implementation block
@property (nonatomic,retain) NSURL * ackURL;                            //@synthesize ackURL=_ackURL - In the implementation block
@property (assign,nonatomic) long long cmdStatusCode;                   //@synthesize cmdStatusCode=_cmdStatusCode - In the implementation block
@property (nonatomic,retain) NSString * cmdStatusMsg;                   //@synthesize cmdStatusMsg=_cmdStatusMsg - In the implementation block
-(id)initWithProvider:(id)arg1 locateCommand:(id)arg2 ackURL:(id)arg3 cmdStatusCode:(long long)arg4 cmdStatusMessage:(id)arg5 ;
-(BOOL)canReplace:(id)arg1 ;
-(void)deinitializeRequest;
-(id)requestUrl;
-(BOOL)canRequestBeRetriedNow;
-(void)setLocateCommand:(NSDictionary *)arg1 ;
-(void)setAckURL:(NSURL *)arg1 ;
-(void)setCmdStatusMsg:(NSString *)arg1 ;
-(void)setCmdStatusCode:(long long)arg1 ;
-(NSURL *)ackURL;
-(NSDictionary *)locateCommand;
-(long long)cmdStatusCode;
-(NSString *)cmdStatusMsg;
-(id)requestBody;
@end

