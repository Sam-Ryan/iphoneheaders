/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WBSJavaScriptDialogCompletionHandler : NSObject {

	long long _dialogMode;
	/*^block*/id _alertCompletionHandler;
	/*^block*/id _confirmCompletionHandler;
	/*^block*/id _promptCompletionHandler;

}

@property (assign,nonatomic) long long dialogMode;                   //@synthesize dialogMode=_dialogMode - In the implementation block
@property (nonatomic,copy) id alertCompletionHandler;                //@synthesize alertCompletionHandler=_alertCompletionHandler - In the implementation block
@property (nonatomic,copy) id confirmCompletionHandler;              //@synthesize confirmCompletionHandler=_confirmCompletionHandler - In the implementation block
@property (nonatomic,copy) id promptCompletionHandler;               //@synthesize promptCompletionHandler=_promptCompletionHandler - In the implementation block
-(void)cancel;
-(id)initWithAlertCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithConfirmCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithPromptCompletionHandler:(/*^block*/id)arg1 ;
-(long long)dialogMode;
-(void)setDialogMode:(long long)arg1 ;
-(id)alertCompletionHandler;
-(void)setAlertCompletionHandler:(id)arg1 ;
-(id)confirmCompletionHandler;
-(void)setConfirmCompletionHandler:(id)arg1 ;
-(id)promptCompletionHandler;
-(void)setPromptCompletionHandler:(id)arg1 ;
@end

