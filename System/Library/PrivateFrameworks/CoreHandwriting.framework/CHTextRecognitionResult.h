/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CHRecognitionResult.h>

@class NSString, NSArray;

@interface CHTextRecognitionResult : CHRecognitionResult {

	BOOL _rare;
	NSString* _string;
	NSArray* _wordRanges;
	NSArray* _wordIDs;

}

@property (readonly) BOOL rare;                         //@synthesize rare=_rare - In the implementation block
@property (readonly) NSString * string;                 //@synthesize string=_string - In the implementation block
@property (readonly) NSArray * wordRanges;              //@synthesize wordRanges=_wordRanges - In the implementation block
@property (readonly) NSArray * wordIDs;                 //@synthesize wordIDs=_wordIDs - In the implementation block
-(void)dealloc;
-(NSString *)string;
-(id)initWithString:(id)arg1 score:(double)arg2 rare:(BOOL)arg3 wordRanges:(id)arg4 wordIDs:(id)arg5 ;
-(BOOL)rare;
-(NSArray *)wordIDs;
-(NSArray *)wordRanges;
@end

