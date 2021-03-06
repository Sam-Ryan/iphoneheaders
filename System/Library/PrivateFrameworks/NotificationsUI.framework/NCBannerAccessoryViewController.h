/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NCBannerAccessoryServiceInterface.h>

@class NSDictionary;

@interface NCBannerAccessoryViewController : UIViewController <NCBannerAccessoryServiceInterface> {

	NSDictionary* _context;

}

@property (nonatomic,copy) NSDictionary * context;              //@synthesize context=_context - In the implementation block
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)dealloc;
-(NSDictionary *)context;
-(void)dismiss;
-(void)setContext:(NSDictionary *)arg1 ;
-(void)_setContext:(id)arg1 ;
-(void)_getPreferredContentSizeWithCompletion:(/*^block*/id)arg1 ;
-(void)becomeSticky;
-(void)setSticky:(BOOL)arg1 ;
@end

