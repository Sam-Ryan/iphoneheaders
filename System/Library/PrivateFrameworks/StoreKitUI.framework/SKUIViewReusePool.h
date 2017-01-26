/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, NSMutableDictionary, NSMutableArray;

@interface SKUIViewReusePool : NSObject {

	UIView* _parentView;
	NSMutableDictionary* _reuseClasses;
	NSMutableArray* _viewPool;

}
-(id)initWithParentView:(id)arg1 ;
-(void)recycleReusableViews:(id)arg1 ;
-(void)hideUnusedViews;
-(void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2 ;
-(id)dequeueReusableViewWithReuseIdentifier:(id)arg1 ;
@end

