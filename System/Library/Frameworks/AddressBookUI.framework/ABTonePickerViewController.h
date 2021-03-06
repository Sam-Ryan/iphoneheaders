/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPickerViewController.h>

@class TKTonePickerViewController;

@interface ABTonePickerViewController : ABPickerViewController {

	TKTonePickerViewController* _tonePickerViewController;

}

@property (nonatomic,retain,readonly) TKTonePickerViewController * tonePickerViewController; 
-(id)init;
-(void)loadView;
-(void)_getRotationContentSettings:(SCD_Struct_AB0*)arg1 ;
-(double)ab_heightToFitForViewInPopoverView;
-(id)initWithAlertType:(int)arg1 ;
-(TKTonePickerViewController *)tonePickerViewController;
-(void)ringtoneSaveButtonClicked:(id)arg1 ;
-(void)setStyleProvider:(id)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
@end

