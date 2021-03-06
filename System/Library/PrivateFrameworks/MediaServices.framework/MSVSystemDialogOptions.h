/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MSVSystemDialogOptions : NSObject {

	BOOL _showAsTopmost;
	BOOL _forceModalAlertAppearance;
	BOOL _showOnLockscreen;
	BOOL _dismissOverlaysOnLockscreen;
	NSString* _alertHeader;
	NSString* _alertMessage;
	NSArray* _allowedApplicationBundleIDs;
	NSString* _defaultButtonTitle;
	NSString* _alternateButtonTitle;

}

@property (nonatomic,copy) NSString * alertHeader;                             //@synthesize alertHeader=_alertHeader - In the implementation block
@property (nonatomic,copy) NSString * alertMessage;                            //@synthesize alertMessage=_alertMessage - In the implementation block
@property (nonatomic,copy) NSArray * allowedApplicationBundleIDs;              //@synthesize allowedApplicationBundleIDs=_allowedApplicationBundleIDs - In the implementation block
@property (nonatomic,copy) NSString * defaultButtonTitle;                      //@synthesize defaultButtonTitle=_defaultButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * alternateButtonTitle;                    //@synthesize alternateButtonTitle=_alternateButtonTitle - In the implementation block
@property (assign,nonatomic) BOOL showAsTopmost;                               //@synthesize showAsTopmost=_showAsTopmost - In the implementation block
@property (assign,nonatomic) BOOL forceModalAlertAppearance;                   //@synthesize forceModalAlertAppearance=_forceModalAlertAppearance - In the implementation block
@property (assign,nonatomic) BOOL showOnLockscreen;                            //@synthesize showOnLockscreen=_showOnLockscreen - In the implementation block
@property (assign,nonatomic) BOOL dismissOverlaysOnLockscreen;                 //@synthesize dismissOverlaysOnLockscreen=_dismissOverlaysOnLockscreen - In the implementation block
-(NSString *)alertHeader;
-(NSString *)alertMessage;
-(BOOL)showAsTopmost;
-(BOOL)forceModalAlertAppearance;
-(BOOL)showOnLockscreen;
-(BOOL)dismissOverlaysOnLockscreen;
-(NSArray *)allowedApplicationBundleIDs;
-(void)setAlertHeader:(NSString *)arg1 ;
-(void)setAlertMessage:(NSString *)arg1 ;
-(void)setAllowedApplicationBundleIDs:(NSArray *)arg1 ;
-(void)setDefaultButtonTitle:(NSString *)arg1 ;
-(void)setShowAsTopmost:(BOOL)arg1 ;
-(void)setForceModalAlertAppearance:(BOOL)arg1 ;
-(void)setShowOnLockscreen:(BOOL)arg1 ;
-(void)setDismissOverlaysOnLockscreen:(BOOL)arg1 ;
-(NSString *)defaultButtonTitle;
-(NSString *)alternateButtonTitle;
-(void)setAlternateButtonTitle:(NSString *)arg1 ;
@end

