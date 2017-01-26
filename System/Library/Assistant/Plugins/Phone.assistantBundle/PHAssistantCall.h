/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/Phone.assistantBundle/Phone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAPhoneCall.h>
#import <Accessibility/AFServiceCommand.h>

@class NSBundle, NSString;

@interface PHAssistantCall : SAPhoneCall <AFServiceCommand> {

	NSBundle* _voiceDialBundle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_removeFaceTimeAvailabilityListener;
-(BOOL)_shouldApplyInternationalAssist;
-(BOOL)_isStarkActive;
-(void)_addFaceTimeAvailabilityListener;
-(id)_voiceDialBundle;
-(BOOL)_isEmailAddress;
-(id)_appPunchOutURL;
-(BOOL)_faceTimeVideoIsAvailable;
-(void)_performAppPunchOutWithURL:(id)arg1 withServiceHelper:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_faceTimeAudioIsAvailable;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)_validate;
-(id)_countryCode;
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
-(id)_copyExceptionsForCountryCode:(id)arg1 ;
@end
