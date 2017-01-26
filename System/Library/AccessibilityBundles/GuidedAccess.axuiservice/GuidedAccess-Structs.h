/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	unsigned mode;
	unsigned passcodeWindowContextID;
	unsigned voiceOverItemChooserWindowContextID;
	unsigned tripleClickSheetWindowContextID;
	unsigned assistiveTouchPort;
	unsigned profileConfiguration;
	unsigned shouldBlockAllEvents : 1;
	unsigned restartingAndWasActiveBeforeRestart : 1;
	unsigned verifyingDeviceUnlockInSAM : 1;
	unsigned isPasscodeViewVisible : 1;
	unsigned isRestricted : 1;
	unsigned overrideAllowsAllTouchLockscreenUIIsShowing : 1;
	unsigned overrideAllowsAllTouchSBMiniAlertIsShowing : 1;
	unsigned overrideAllowsAllTouchCallStateIsChanging : 1;
	unsigned overrideAllowsAllTouchMakingEmergencyCall : 1;
	unsigned overrideIgnoresAllTouchWhitelistedAppNotFound : 1;
	unsigned overrideIgnoresAllTouchVerifyingIntegrity : 1;
	unsigned whitelistedLockscreenUIIsShowing : 1;
	unsigned allowsTouch : 1;
	unsigned allowsLockButton : 1;
	unsigned allowsAppExit : 1;
	unsigned allowsHomeButton : 1;
	unsigned allowsVolumeButtons : 1;
	unsigned allowsRingerSwitch : 1;
	unsigned allowsMotion : 1;
	unsigned allowsAutolock : 1;
	unsigned allowsKeyboardTextInput : 1;
	unsigned allowsProximity : 1;
} SCD_Struct_GA0;

typedef struct {
	BOOL field1;
	BOOL field2;
	BOOL field3;
	BOOL field4;
	BOOL field5;
	BOOL field6;
} SCD_Struct_GA1;

typedef struct UIOffset {
	double horizontal;
	double vertical;
} UIOffset;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGPath* CGPathRef;

