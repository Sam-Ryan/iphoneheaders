/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIObservableNavigationStack <NSObject>
@property (assign,nonatomic,__weak) id<SKUINavigationStackObserver> navigationStackObserver; 
@property (assign,getter=isShowingNavigationStackRootContent,nonatomic) BOOL showingNavigationStackRootContent; 
@required
-(void)popToNavigationStackRootContentAnimated:(BOOL)arg1 withBehavior:(long long)arg2;
-(id<SKUINavigationStackObserver>)navigationStackObserver;
-(void)setNavigationStackObserver:(id)arg1;
-(BOOL)isShowingNavigationStackRootContent;
-(void)setShowingNavigationStackRootContent:(BOOL)arg1;

@end
