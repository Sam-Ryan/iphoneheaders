/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIFormPeripheral.h>

@protocol UIWebFormControl;
@class DOMHTMLInputElement;

@interface UIWebFormDateTimePeripheral : NSObject <UIFormPeripheral> {

	DOMHTMLInputElement* _inputElement;
	id<UIWebFormControl> _control;

}

@property (nonatomic,retain) DOMHTMLInputElement * _inputElement;              //@synthesize inputElement=_inputElement - In the implementation block
@property (nonatomic,retain) id<UIWebFormControl> _control;                    //@synthesize control=_control - In the implementation block
+(id)createPeripheralWithDOMHTMLInputElement:(id)arg1 ;
-(void)dealloc;
-(void)beginEditing;
-(void)endEditing;
-(id<UIWebFormControl>)_control;
-(id)assistantView;
-(void)set_inputElement:(DOMHTMLInputElement *)arg1 ;
-(DOMHTMLInputElement *)_inputElement;
-(long long)_datePickerModeForInputType:(id)arg1 ;
-(void)set_control:(id<UIWebFormControl>)arg1 ;
-(id)initWithDOMHTMLInputElement:(id)arg1 ;
@end

