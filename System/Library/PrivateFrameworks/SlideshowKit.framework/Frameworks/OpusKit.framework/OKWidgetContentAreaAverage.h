/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/JSOKWidgetContentAreaAverage.h>

@class CIVector;

@interface OKWidgetContentAreaAverage : OKWidgetBasicFilter <JSOKWidgetContentAreaAverage> {

	CIVector* _inputExtent;

}

@property (nonatomic,retain) CIVector * inputExtent;              //@synthesize inputExtent=_inputExtent - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithInputExtent:(SCNVector4)arg1 ;
-(void)dealloc;
-(id)outputImage;
-(id)inputKeys;
-(void)setSettingInputExtent:(SCNVector4)arg1 ;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
@end
