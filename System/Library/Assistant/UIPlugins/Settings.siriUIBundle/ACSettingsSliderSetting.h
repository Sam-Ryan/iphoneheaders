/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:36 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Settings.siriUIBundle/Settings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Settings/ACSettingsBasicSetting.h>

@interface ACSettingsSliderSetting : ACSettingsBasicSetting

@property (assign,nonatomic,__weak) id<ACSettingsSliderUpdateDelegate> delegate; 
-(void)setValue:(double)arg1 isTracking:(BOOL)arg2 ;
-(void)addDelta:(double)arg1 ;
-(id)rightImage;
-(id)leftImage;
-(double)value;
@end

