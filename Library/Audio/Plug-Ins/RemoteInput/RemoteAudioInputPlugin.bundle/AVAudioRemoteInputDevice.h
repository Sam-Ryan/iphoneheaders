/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Library/Audio/Plug-Ins/RemoteInput/RemoteAudioInputPlugin.bundle/RemoteAudioInputPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, AVAudioFormat, NSString;


@protocol AVAudioRemoteInputDevice <NSObject>
@property (nonatomic,copy) id audioInputBlock; 
@property (nonatomic,copy) NSArray * supportedFormats; 
@property (nonatomic,retain) AVAudioFormat * format; 
@property (nonatomic,readonly) NSString * deviceIdentifier; 
@required
-(id)audioInputBlock;
-(void)setAudioInputBlock:(/*^block*/id)arg1;
-(void)startRecordingWithCompletionBlock:(/*^block*/id)arg1;
-(NSArray *)supportedFormats;
-(void)setSupportedFormats:(id)arg1;
-(AVAudioFormat *)format;
-(void)setFormat:(id)arg1;
-(void)stopRecordingWithCompletionBlock:(/*^block*/id)arg1;
-(NSString *)deviceIdentifier;

@end

