/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TableViewManagerDelegate
@optional
-(void)touchInCellAtIndexPath:(id)arg1;
-(void)accessoryButtonTappedForRowWithIndexPath:(id)arg1;
-(BOOL)shouldHandleReturnForTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3;
-(BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4;
-(void)switchTouchedInCellAtIndexPath:(id)arg1 forSwitchIndex:(unsigned long long)arg2 isOn:(BOOL)arg3;
-(void)segmentedControlTouchedInCellAtIndexPath:(id)arg1 forSegmentedControlIndex:(long long)arg2 selectedSegment:(long long)arg3;
-(void)textFieldDidChangeAtIndexPath:(id)arg1;
-(void)textFieldDidEndEditingAtIndexPath:(id)arg1;
-(void)buttonTouchedInCellAtIndexPath:(id)arg1 forButtonIndex:(unsigned long long)arg2;
-(void)selectedDateChangedInCellAtIndexPath:(id)arg1 forDatePickerIndex:(unsigned long long)arg2 withDate:(id)arg3;
-(id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned long long)arg2 inCellWithTag:(long long)arg3;
-(id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned long long)arg2 inCellAtIndexPath:(id)arg3;
-(void)commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
-(BOOL)shouldIndentWhileEditingRowAtIndexPath:(id)arg1;
-(BOOL)isRepresentedObject:(id)arg1 identicalToRepresentedObject:(id)arg2;

@end

