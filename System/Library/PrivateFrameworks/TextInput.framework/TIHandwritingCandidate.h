/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidateSingle.h>

@interface TIHandwritingCandidate : TIKeyboardCandidateSingle {

	unsigned long long _uniqueID;
	unsigned long long _completionUniqueID;

}

@property (nonatomic,readonly) unsigned long long uniqueID;                        //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) unsigned long long completionUniqueID;              //@synthesize completionUniqueID=_completionUniqueID - In the implementation block
+(int)type;
+(BOOL)supportsSecureCoding;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(unsigned long long)completionUniqueID;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 uniqueID:(unsigned long long)arg3 completionUniqueID:(unsigned long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isInlineCompletionCandidate;
-(unsigned long long)uniqueID;
@end

