/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView;

@interface SUSnapshotView : UIView {

	UIView* _imageView;

}
-(void)dealloc;
-(void)layoutSubviews;
-(void)snapshotView:(id)arg1 usingIOSurface:(BOOL)arg2 ;
-(void)_takeIOSurfaceSnapshotOfView:(id)arg1 ;
-(void)_takeCGSnapshotOfView:(id)arg1 ;
@end

