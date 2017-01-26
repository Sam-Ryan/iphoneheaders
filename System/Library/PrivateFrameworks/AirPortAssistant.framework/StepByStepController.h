/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/AssistantCallbackController.h>
#import <libobjc.A.dylib/AutoGuessSetup.h>
#import <libobjc.A.dylib/StepByStepUIDelegateResult.h>

@class NSDictionary;

@interface StepByStepController : AssistantCallbackController <AutoGuessSetup, StepByStepUIDelegateResult> {

	StepByStepContextRef _stepByStepContext;
	id _delegate;
	NSDictionary* _restoreRecommendation;

}

@property (assign) id<StepByStepUIDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSDictionary * restoreRecommendation;              //@synthesize restoreRecommendation=_restoreRecommendation - In the implementation block
+(id)stepByStepController;
-(void)setDelegate:(id<StepByStepUIDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<StepByStepUIDelegate>)delegate;
-(int)resume;
-(int)subclassAssistantCallback:(AssistantCallbackContext*)arg1 ;
-(int)setupFromAutoguessRecommendation:(id)arg1 withOptions:(id)arg2 ;
-(void)setRestoreRecommendation:(NSDictionary *)arg1 ;
-(int)cancelStepByStep;
-(void)stepByStepNextStepResult:(int)arg1 withOptions:(id)arg2 ;
-(NSDictionary *)restoreRecommendation;
@end

