/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/JSOKWidgetContentColorControlsFilter.h>

@class NSNumber;

@interface OKWidgetContentColorControlsFilter : OKWidgetBasicFilter <JSOKWidgetContentColorControlsFilter> {

	NSNumber* _inputSaturation;
	NSNumber* _inputBrightness;
	NSNumber* _inputContrast;

}

@property (nonatomic,retain) NSNumber * inputSaturation;              //@synthesize inputSaturation=_inputSaturation - In the implementation block
@property (nonatomic,retain) NSNumber * inputBrightness;              //@synthesize inputBrightness=_inputBrightness - In the implementation block
@property (nonatomic,retain) NSNumber * inputContrast;                //@synthesize inputContrast=_inputContrast - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithInputSaturation:(id)arg1 inputBrightness:(id)arg2 inputContrast:(id)arg3 ;
-(void)dealloc;
-(id)outputImage;
-(id)inputKeys;
-(void)setInputSaturation:(NSNumber *)arg1 ;
-(void)setInputBrightness:(NSNumber *)arg1 ;
-(void)setInputContrast:(NSNumber *)arg1 ;
-(id)settingInputSaturation;
-(void)setSettingInputSaturation:(id)arg1 ;
-(id)setttingInputBrightness;
-(void)setSettingInputBrightness:(id)arg1 ;
-(id)settingInputContrast;
-(void)setSettingInputContrast:(id)arg1 ;
-(NSNumber *)inputSaturation;
-(NSNumber *)inputBrightness;
-(NSNumber *)inputContrast;
@end

