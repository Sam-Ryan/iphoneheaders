/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/_VTStatePolicy.h>

@interface _VTVoiceTriggerEnabledPolicy : _VTStatePolicy {

	int _notificationToken;
	BOOL _enabled;
	BOOL _primedPhraseSpotter;

}
-(void)dealloc;
-(BOOL)isEnabled;
-(void)_update;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_listenForReload;
@end

