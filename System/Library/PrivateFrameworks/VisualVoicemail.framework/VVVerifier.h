/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface VVVerifier : NSObject {

	NSMutableDictionary* _checkpointDictionary;
	NSArray* _keyDescriptions;

}
+(id)sharedVerifier;
-(id)configurationDictionary;
-(id)_checkpointDictionaryFilePath;
-(id)keyDescriptions;
-(id)_checkpointDictionary;
-(void)_saveCheckpointDictionary;
-(BOOL)valueForCheckpointKey:(id)arg1 exists:(BOOL*)arg2 ;
-(void)_mapFromSourceDictionary:(id)arg1 destinationDictionary:(id)arg2 inKey:(id)arg3 outDescription:(id)arg4 ;
-(id)readableError;
-(void)_checkpointDictionaryChanged;
-(id)humanReadableConfigurationDictionary:(id*)arg1 ;
-(void)storeValue:(BOOL)arg1 forCheckpointKey:(id)arg2 ;
@end

