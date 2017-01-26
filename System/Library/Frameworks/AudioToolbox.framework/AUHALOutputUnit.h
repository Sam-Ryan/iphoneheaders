/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <AudioToolbox/AUAudioUnitV2Bridge.h>

@interface AUHALOutputUnit : AUAudioUnitV2Bridge {

	/*^block*/id _outputProvider;
	/*^block*/id _inputHandler;
	BOOL _inputWasEnabled;
	BOOL _outputWasEnabled;

}

@property (assign,getter=isInputEnabled,nonatomic) BOOL inputEnabled; 
@property (assign,getter=isOutputEnabled,nonatomic) BOOL outputEnabled; 
-(BOOL)startHardwareAndReturnError:(id*)arg1 ;
-(void)stopHardware;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(/*^block*/id)outputProvider;
-(/*^block*/id)_inputHandler;
-(void)setOutputProvider:(/*^block*/id)arg1 ;
-(void)setInputHandler:(/*^block*/id)arg1 ;
-(BOOL)canPerformInput;
-(BOOL)canPerformOutput;
-(BOOL)isOutputEnabled;
-(void)setInputEnabled:(BOOL)arg1 ;
-(void)setOutputEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isInputEnabled;
@end

