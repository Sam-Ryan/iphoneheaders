/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/libTextInputCore.dylib-Structs.h>
#import <libTextInputCore.dylib/TILanguageModelOfflineLearningHandle.h>

@interface TILanguageModelOfflineLearningHandleFavonius : TILanguageModelOfflineLearningHandle {

	RefPtr<KB::DictionaryContainer>* _dictionaries;
	shared_ptr<KB::LanguageModel>* _currentModel;

}

@property (assign,nonatomic) shared_ptr<KB::LanguageModel>* currentModel;                  //@synthesize currentModel=_currentModel - In the implementation block
@property (nonatomic,readonly) RefPtr<KB::DictionaryContainer>* dictionaries;              //@synthesize dictionaries=_dictionaries - In the implementation block
-(void)load;
-(id)initWithInputMode:(id)arg1 ;
-(void)didFinishLearning;
-(shared_ptr<KB::LanguageModel>*)currentModel;
-(void)setCurrentModel:(shared_ptr<KB::LanguageModel>*)arg1 ;
-(RefPtr<KB::DictionaryContainer>*)dictionaries;
-(void)updateAdaptationContext:(id)arg1 ;
-(void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3 ;
@end

