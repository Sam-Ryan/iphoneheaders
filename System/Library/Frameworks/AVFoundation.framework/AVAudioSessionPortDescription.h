/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:12:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class NSString, NSArray, AVAudioSessionDataSourceDescription;

@interface AVAudioSessionPortDescription : NSObject {

	void* _impl;

}

@property (readonly) NSString * portType; 
@property (readonly) NSString * portName; 
@property (readonly) NSString * UID; 
@property (readonly) NSArray * channels; 
@property (readonly) NSArray * dataSources; 
@property (readonly) AVAudioSessionDataSourceDescription * selectedDataSource; 
@property (readonly) AVAudioSessionDataSourceDescription * preferredDataSource; 
+(id)privateCreateOrConfigureArray:(id)arg1 withRawPortArray:(id)arg2 ;
+(BOOL)privateMatchesInputs:(id)arg1 toRawInputs:(id)arg2 ;
-(NSArray *)channels;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(AVAudioSessionDataSourceDescription *)preferredDataSource;
-(PortDescriptionImpl*)privateGetImplementation;
-(BOOL)privateMatchesRawDescription:(id)arg1 ;
-(BOOL)setPreferredDataSource:(id)arg1 error:(id*)arg2 ;
-(id)privateGetID;
-(BOOL)isEqualToPort:(id)arg1 compareStrict:(BOOL)arg2 ;
-(void)configureChannelsAndDataSources:(id)arg1 ;
-(id)initWithRawPortDescription:(id)arg1 ;
-(BOOL)isHeadphones;
-(NSArray *)dataSources;
-(NSString *)portName;
-(NSString *)UID;
-(NSString *)portType;
-(AVAudioSessionDataSourceDescription *)selectedDataSource;
@end

