/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <libobjc.A.dylib/AVSpeechSynthesizerDelegate.h>

@protocol ZWSmartZoomDelegate;
@class AXElement, AVSpeechSynthesizer, NSString;

@interface ZWSmartZoomManager : NSObject <AVSpeechSynthesizerDelegate> {

	BOOL _enabled;
	id<ZWSmartZoomDelegate> _delegate;
	AXObserverRef _accessibilityRuntimeObserver;
	AXElement* _focusElement;
	AVSpeechSynthesizer* _synthesizer;

}

@property (assign,nonatomic,__weak) id<ZWSmartZoomDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                           //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) CGRect focusRect; 
@property (assign,nonatomic) AXObserverRef accessibilityRuntimeObserver;              //@synthesize accessibilityRuntimeObserver=_accessibilityRuntimeObserver - In the implementation block
@property (nonatomic,retain) AXElement * focusElement;                                //@synthesize focusElement=_focusElement - In the implementation block
@property (nonatomic,retain) AVSpeechSynthesizer * synthesizer;                       //@synthesize synthesizer=_synthesizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AXObserverRef)accessibilityRuntimeObserver;
-(id)_elementForFocus;
-(void)setFocusElement:(AXElement *)arg1 ;
-(AXElement *)focusElement;
-(void)_initializeAccessibility;
-(void)_accessibilitySystemServerDied;
-(void)speakContent;
-(void)disableSmartZoom;
-(void)enableSmartZoom;
-(AVSpeechSynthesizer *)synthesizer;
-(void)setSynthesizer:(AVSpeechSynthesizer *)arg1 ;
-(void)setAccessibilityRuntimeObserver:(AXObserverRef)arg1 ;
-(void)_registerForAccessibilityRuntimeNotifications;
-(void)_unregisterForAccessibilityRuntimeNotifications;
-(void)_updateApplicationAccessibility:(BOOL)arg1 ;
-(id)_accessibilityRuntimeNotifications;
-(void)_handleFirstResponderChangedNotification;
-(void)_handleNativeFocusItemChangedNotification:(CFDataRef)arg1 ;
-(void)_handleUpdateElementVisualsNotification;
-(BOOL)setNativeFocusOnBestElementNearRect:(CGRect)arg1 ;
-(void)setDelegate:(id<ZWSmartZoomDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<ZWSmartZoomDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(CGRect)focusRect;
@end

