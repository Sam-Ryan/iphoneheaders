/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIURLResolverDelegate <NSObject>
@optional
-(BOOL)URLResolver:(id)arg1 shouldPerformDefaultActionForURL:(id)arg2;
-(void)URLResolver:(id)arg1 didFinishWithResult:(BOOL)arg2;

@required
-(id)presentationViewControllerForURLResolver:(id)arg1;
-(void)URLResolver:(id)arg1 showURL:(id)arg2 withTabIdentifier:(id)arg3;
-(void)URLResolver:(id)arg1 showTransientViewController:(id)arg2;

@end

