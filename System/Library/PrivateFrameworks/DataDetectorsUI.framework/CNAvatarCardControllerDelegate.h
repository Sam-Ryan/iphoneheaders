/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAvatarCardControllerDelegate <NSObject>
@optional
-(long long)avatarCardController:(id)arg1 presentationResultForLocation:(CGPoint)arg2;
-(id)avatarCardController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
-(void)avatarCardController:(id)arg1 willShowActions:(id)arg2;
-(BOOL)avatarCardController:(id)arg1 shouldShowContact:(id)arg2;
-(void)avatarCardControllerWillDismiss:(id)arg1;
-(void)avatarCardControllerDidDismiss:(id)arg1;
-(BOOL)avatarCardController:(id)arg1 shouldPresentForLocation:(CGPoint)arg2;

@required
-(id)presentingViewControllerForAvatarCardController:(id)arg1;

@end

