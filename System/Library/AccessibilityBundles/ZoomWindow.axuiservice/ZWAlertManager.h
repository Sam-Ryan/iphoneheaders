/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ZWAlertManager : NSObject {

	NSString* _currentAlertID;

}

@property (nonatomic,retain) NSString * currentAlertID;              //@synthesize currentAlertID=_currentAlertID - In the implementation block
-(void)setCurrentAlertID:(NSString *)arg1 ;
-(BOOL)_shouldShowZoomAlert;
-(NSString *)currentAlertID;
-(void)showZoomEnabledAlertIfAppropriate;
-(void)showZoomDisabledAlertIfAppropriate;
-(void)showOrbZoomToggleOn;
-(void)showOrbZoomToggleOff;
@end

