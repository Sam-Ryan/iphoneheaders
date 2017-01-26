/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol SBWidgetHandling <NSObject>
@property (nonatomic,readonly) NSSet * visibleWidgetIDs; 
@required
-(void)enableAllWidgets:(/*^block*/id)arg1;
-(BOOL)shouldRequestWidgetRemoteViewControllers;
-(NSSet *)visibleWidgetIDs;
-(id)widgetWithIdentifier:(id)arg1;
-(void)updateWidgetsWithIdentifiers:(id)arg1 launchStats:(id)arg2 completion:(/*^block*/id)arg3;
-(void)makeVisibleWidgetWithIdentifier:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

