/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ADAdSheetConnectionDelegate <NSObject>
@optional
-(BOOL)shouldConnectToAdSheet;
-(void)adSheetConnectionEstablished;
-(void)adSheetConnectionLost;

@required
-(id)adSheetMachServiceName;
-(void)configureConnection:(id)arg1;

@end

