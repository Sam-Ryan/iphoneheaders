/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 11:31:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MessagesNotificationViewService.app/MessagesNotificationViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKMessageEntryViewDelegate <NSObject>
@optional
-(BOOL)getContainerWidth:(double*)arg1 offset:(double*)arg2;

@required
-(void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
-(void)messageEntryViewDidChange:(id)arg1;
-(BOOL)messageEntryViewShouldBeginEditing:(id)arg1;
-(void)messageEntryViewDidBeginEditing:(id)arg1;
-(void)messageEntryViewDidEndEditing:(id)arg1;
-(BOOL)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
-(void)messageEntryView:(id)arg1 didTapMediaObject:(id)arg2;
-(void)messageEntryViewRecordingDidChange:(id)arg1;
-(void)messageEntryViewSendButtonHit:(id)arg1;
-(void)messageEntryViewRaiseGestureAutoSend:(id)arg1;

@end

