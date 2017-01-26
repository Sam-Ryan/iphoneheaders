/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FIUIHealthSettingsPickerController.h>

@interface FIUIHealthSettingsSexPickerController : FIUIHealthSettingsPickerController {

	/*^block*/id _sexUpdateHandler;

}

@property (nonatomic,copy) id sexUpdateHandler;              //@synthesize sexUpdateHandler=_sexUpdateHandler - In the implementation block
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)forceUpdate;
-(void)setBiologicalSex:(long long)arg1 ;
-(long long)_biologicalSexForRow:(long long)arg1 ;
-(void)_updateWithBiologicalSex:(long long)arg1 ;
-(id)sexUpdateHandler;
-(void)setSexUpdateHandler:(id)arg1 ;
@end

