/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@interface _UISearchControllerView : UIView {

	BOOL __disableSearchBarContainerViewOrdering;

}

@property (assign,nonatomic) BOOL _disableSearchBarContainerViewOrdering;              //@synthesize _disableSearchBarContainerViewOrdering=__disableSearchBarContainerViewOrdering - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)bringSubviewToFront:(id)arg1 ;
-(void)sendSubviewToBack:(id)arg1 ;
-(void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3 ;
-(void)set_disableSearchBarContainerViewOrdering:(BOOL)arg1 ;
-(BOOL)_disableSearchBarContainerViewOrdering;
-(void)_ensureContainerIsOnTop;
@end

