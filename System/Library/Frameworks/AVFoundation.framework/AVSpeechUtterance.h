/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:12:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVSpeechSynthesisVoice, NSString;

@interface AVSpeechUtterance : NSObject <NSCopying, NSSecureCoding> {

	AVSpeechSynthesisVoice* _voice;
	float _rate;
	float _pitchMultiplier;
	float _volume;
	NSString* _speechString;
	double _preUtteranceDelay;
	double _postUtteranceDelay;

}

@property (assign,nonatomic) BOOL processEmoticons; 
@property (assign,nonatomic) BOOL useCompactVoice; 
@property (assign,nonatomic) BOOL useMonarchStyleSpeechRate; 
@property (nonatomic,retain) AVSpeechSynthesisVoice * voice;              //@synthesize voice=_voice - In the implementation block
@property (nonatomic,retain) NSString * speechString;                     //@synthesize speechString=_speechString - In the implementation block
@property (assign,nonatomic) float rate;                                  //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) float pitchMultiplier;                       //@synthesize pitchMultiplier=_pitchMultiplier - In the implementation block
@property (assign,nonatomic) float volume;                                //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) double preUtteranceDelay;                    //@synthesize preUtteranceDelay=_preUtteranceDelay - In the implementation block
@property (assign,nonatomic) double postUtteranceDelay;                   //@synthesize postUtteranceDelay=_postUtteranceDelay - In the implementation block
+(id)speechUtteranceWithString:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(void)initialize;
+(id)speechUtteranceWithString:(id)arg1 ;
-(id)description;
-(id)action;
-(void)setAction:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(void)setUseMonarchStyleSpeechRate:(BOOL)arg1 ;
-(BOOL)useMonarchStyleSpeechRate;
-(void)setUseCompactVoice:(BOOL)arg1 ;
-(BOOL)useCompactVoice;
-(void)setProcessEmoticons:(BOOL)arg1 ;
-(BOOL)processEmoticons;
-(void)setPitchMultiplier:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)speechString;
-(float)pitchMultiplier;
-(double)preUtteranceDelay;
-(double)postUtteranceDelay;
-(void)setSpeechString:(NSString *)arg1 ;
-(void)setPreUtteranceDelay:(double)arg1 ;
-(void)setPostUtteranceDelay:(double)arg1 ;
-(AVSpeechSynthesisVoice *)voice;
-(void)setVoice:(AVSpeechSynthesisVoice *)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)setVolume:(float)arg1 ;
-(float)volume;
@end

