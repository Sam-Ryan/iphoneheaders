/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface STVocabularyUpdater : NSObject
+(void)initialize;
+(id)_addErrorObserver:(id)arg1 selector:(SEL)arg2 ;
+(void)clearAllCustomVocabulary;
-(void)setCustomVocabulary:(id)arg1 forIntentSlot:(id)arg2 ;
-(void)_postVocabularyErrorNotificationWithUnderlyingError:(id)arg1 ;
-(id)_sanitizeIntentSlot:(id)arg1 ;
-(id)_sanityCheckCustomVocabulary:(id)arg1 ;
@end
