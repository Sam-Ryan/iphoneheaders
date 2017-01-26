/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TILexicon.h>

@class NSString;

@interface TIRecentInputs : TILexicon {

	BOOL _needsSync;
	NSString* _filePath;

}

@property (assign,nonatomic) BOOL needsSync;                   //@synthesize needsSync=_needsSync - In the implementation block
@property (nonatomic,retain) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
+(BOOL)identifierIsSystemIdentifier:(id)arg1 ;
+(id)_lexiconPathForLocalIdentifier:(id)arg1 ;
+(void)recentInputForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)requestLexiconForRecentInputIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_sanitizeRecentInputString:(id)arg1 ;
+(void)requestRemovalOfLexiconForRecentInputIdentifier:(id)arg1 ;
+(id)recentInputAtPath:(id)arg1 ;
+(void)storeInput:(id)arg1 forLocalIdentifier:(id)arg2 ;
+(void)clearRecentInputForIdentifier:(id)arg1 ;
+(id)recentInputForIdentifier:(id)arg1 ;
+(void)storeInput:(id)arg1 forSystemIdentifier:(id)arg2 atPath:(id)arg3 ;
-(void)setNeedsSync:(BOOL)arg1 ;
-(BOOL)needsSync;
-(void)storeIfNecessary;
-(id)lexiconWithAdditionalEntry:(id)arg1 maximumSize:(long long)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
@end

