/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSSpeechSynthesizerDelegate <NSObject>
@optional
-(void)speechSynthesizerDidStartSpeaking:(id)arg1;
-(void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2 withError:(id)arg3;
-(void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2 phonemesSpoken:(id)arg3 withError:(id)arg4;
-(void)speechSynthesizerDidPauseSpeaking:(id)arg1;
-(void)speechSynthesizerDidContinueSpeaking:(id)arg1;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2;
-(void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 withError:(id)arg4;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;
-(void)speechSynthesizer:(id)arg1 didPauseSpeakingRequest:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didContinueSpeakingRequest:(id)arg2;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2 forRequest:(id)arg3;

@end
