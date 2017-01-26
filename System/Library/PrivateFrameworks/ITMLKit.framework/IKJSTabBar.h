/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSTabBar.h>
@class NSArray, IKJSTabBarItem;


@protocol IKJSTabBar <JSExport>
@property (nonatomic,readonly) NSArray * tabs; 
@property (nonatomic,retain) IKJSTabBarItem * selectedTab; 
@property (nonatomic,readonly) IKJSTabBarItem * transientTab; 
@required
-(IKJSTabBarItem *)transientTab;
-(NSArray *)tabs;
-(IKJSTabBarItem *)selectedTab;
-(void)setSelectedTab:(id)arg1;

@end

#import <libobjc.A.dylib/JSExport.h>

@class NSArray, IKJSTabBarItem, IKAppTabBar;

@interface IKJSTabBar : IKJSObject <IKJSTabBar, JSExport> {

	IKAppTabBar* _appTabBar;
	NSArray* _tabItems;

}

@property (nonatomic,__weak,readonly) IKAppTabBar * appTabBar;              //@synthesize appTabBar=_appTabBar - In the implementation block
@property (retain) NSArray * tabItems;                                      //@synthesize tabItems=_tabItems - In the implementation block
@property (nonatomic,readonly) NSArray * tabs; 
@property (nonatomic,retain) IKJSTabBarItem * selectedTab; 
@property (nonatomic,readonly) IKJSTabBarItem * transientTab; 
-(id)initWithAppContext:(id)arg1 appTabBar:(id)arg2 ;
-(void)onReload;
-(void)onSelect;
-(NSArray *)tabItems;
-(IKAppTabBar *)appTabBar;
-(void)setTabItems:(NSArray *)arg1 ;
-(void)_reload;
-(IKJSTabBarItem *)transientTab;
-(NSArray *)tabs;
-(IKJSTabBarItem *)selectedTab;
-(void)setSelectedTab:(IKJSTabBarItem *)arg1 ;
@end

