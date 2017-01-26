/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:05:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearchOperationGetCandidates.h>

@class NSArray;

@interface TIWordSearchPinyinOperationGetCandidates : TIWordSearchOperationGetCandidates {

	NSArray* _initiallyHiddenCandidates;
	unsigned long long _selectedHiddenCandidateIndex;

}

@property (nonatomic,retain,readonly) NSArray * initiallyHiddenCandidates;                   //@synthesize initiallyHiddenCandidates=_initiallyHiddenCandidates - In the implementation block
@property (nonatomic,readonly) unsigned long long selectedHiddenCandidateIndex;              //@synthesize selectedHiddenCandidateIndex=_selectedHiddenCandidateIndex - In the implementation block
-(void)dealloc;
-(unsigned long long)selectedHiddenCandidateIndex;
-(NSArray *)initiallyHiddenCandidates;
-(id)initWithWordSearch:(id)arg1 inputString:(id)arg2 initiallyHiddenCandidates:(id)arg3 selectedHiddenCandidateIndex:(unsigned long long)arg4 predictionEnabled:(BOOL)arg5 reanalysisMode:(BOOL)arg6 target:(id)arg7 action:(SEL)arg8 geometryModelData:(id)arg9 candidateContext:(id)arg10 stringContext:(id)arg11 ;
@end

