/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:35:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RUILoaderDelegate <NSObject>
@optional
-(void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
-(void)loader:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3;
-(id)sessionConfigurationForLoader:(id)arg1;

@required
-(void)loader:(id)arg1 didFailWithError:(id)arg2;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;

@end
