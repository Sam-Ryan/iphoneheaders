/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:12:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@interface AVAudioTime : NSObject {

	AudioTimeStamp _ats;
	double _sampleRate;
	void* _reserved;

}

@property (getter=isHostTimeValid,nonatomic,readonly) BOOL hostTimeValid; 
@property (nonatomic,readonly) unsigned long long hostTime; 
@property (getter=isSampleTimeValid,nonatomic,readonly) BOOL sampleTimeValid; 
@property (nonatomic,readonly) long long sampleTime; 
@property (nonatomic,readonly) double sampleRate; 
@property (nonatomic,readonly) AudioTimeStamp audioTimeStamp; 
+(id)timeWithAudioTimeStamp:(const AudioTimeStamp*)arg1 sampleRate:(double)arg2 ;
+(double)secondsForHostTime:(unsigned long long)arg1 ;
+(id)timeWithHostTime:(unsigned long long)arg1 ;
+(id)timeWithSampleTime:(long long)arg1 atRate:(double)arg2 ;
+(id)timeWithHostTime:(unsigned long long)arg1 sampleTime:(long long)arg2 atRate:(double)arg3 ;
+(unsigned long long)hostTimeForSeconds:(double)arg1 ;
-(id)init;
-(id)description;
-(double)sampleRate;
-(id)initWithHostTime:(unsigned long long)arg1 ;
-(id)initWithSampleTime:(long long)arg1 atRate:(double)arg2 ;
-(id)initWithHostTime:(unsigned long long)arg1 sampleTime:(long long)arg2 atRate:(double)arg3 ;
-(AudioTimeStamp)audioTimeStamp;
-(id)initWithAudioTimeStamp:(const AudioTimeStamp*)arg1 sampleRate:(double)arg2 ;
-(BOOL)isHostTimeValid;
-(BOOL)isSampleTimeValid;
-(unsigned long long)hostTime;
-(long long)sampleTime;
-(id)extrapolateTimeFromAnchor:(id)arg1 ;
@end

