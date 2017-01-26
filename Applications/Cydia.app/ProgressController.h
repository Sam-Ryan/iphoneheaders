/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:01:19 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Cydia/Cydia-Structs.h>
#import <Cydia/CydiaWebViewController.h>
#import <Cydia/ProgressDelegate.h>

@class Database;

@interface ProgressController : CydiaWebViewController <ProgressDelegate> {

	Database* database_;
	MenesObjectHandle<CydiaProgressData, 1> progress_;
	unsigned cancel_;

}
-(void)addProgressEvent:(id)arg1 ;
-(void)setProgressPercent:(id)arg1 ;
-(void)updateCancel;
-(void)setProgressStatus:(id)arg1 ;
-(void)setProgressCancellable:(id)arg1 ;
-(BOOL)isProgressCancelled;
-(id)initWithDatabase:(id)arg1 delegate:(id)arg2 ;
-(void)invoke:(id)arg1 withTitle:(id)arg2 ;
-(void)setCancellable:(BOOL)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)close;
-(void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3 ;
-(id)leftButton;
-(id)rightButton;
-(void)updateProgress;
@end

