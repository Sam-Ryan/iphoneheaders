/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListItemsController.h>

@class CNFRegController;

@interface CNFRegCallerIdDetailController : PSListItemsController {

	CNFRegController* _regController;

}

@property (nonatomic,retain,readonly) CNFRegController * regController;              //@synthesize regController=_regController - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(CNFRegController *)regController;
-(id)initWithRegController:(id)arg1 ;
-(void)_setupAccountHandlers;
-(void)reloadCallerIdValues;
@end

