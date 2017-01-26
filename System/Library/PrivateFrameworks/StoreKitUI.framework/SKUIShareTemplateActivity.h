/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class SKUIClientContext, SKUIShareSheetActivityViewElement;

@interface SKUIShareTemplateActivity : UIActivity {

	SKUIClientContext* _clientContext;
	SKUIShareSheetActivityViewElement* _viewElement;

}
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)activityImage;
-(id)_beforeActivity;
-(id)initWithActivityViewElement:(id)arg1 clientContext:(id)arg2 ;
@end
