/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIModalItemDelegate;
#import <UIKit/UIKit-Structs.h>
@class NSString, NSAttributedString, NSMutableArray, UIView, UIViewController, _UIModalItemContentView, _UIModalItemBackgroundView, _UIModalItemRepresentationView, UITextInputTraits, NSArray;

@interface _UIModalItem : NSObject {

	NSString* _title;
	NSString* _message;
	NSString* _cancelButtonTitle;
	NSString* _defaultButtonTitle;
	NSAttributedString* _titleAttributedString;
	NSAttributedString* _messageAttributedString;
	NSString* _subtitleString;
	long long _titleMaxLineNumber;
	long long _messageMaxLineNumber;
	long long _numberOfButtonsRows;
	BOOL _useUndoStyle;
	BOOL _useWifiPickerLayout;
	BOOL _textFieldsHidden;
	BOOL _dontUpdateFrameForKBChanges;
	NSMutableArray* _otherButtonsTitles;
	long long _itemType;
	id<UIModalItemDelegate> _delegate;
	/*^block*/id _completionBlock;
	long long _modalItemInputStyle;
	UIView* _popoverTargetView;
	CGRect _popoverTargetRect;
	UIViewController* _contentViewController;
	CGSize _contentViewControllerSize;
	long long _presentAnimationType;
	long long _dismissAnimationType;
	BOOL _isPresented;
	BOOL _isVisible;
	BOOL _isBeingDismissed;
	BOOL _isHidden;
	UIViewController* _viewController;
	UIViewController* _hostingViewController;
	UIViewController* _anchorViewController;
	long long _defaultButtonIndex;
	long long _cancelButtonIndex;
	_UIModalItemContentView* _contentView;
	_UIModalItemBackgroundView* _backgroundView;
	_UIModalItemRepresentationView* _representedView;
	NSString* _loginString;
	NSString* _passwordString;
	NSString* _loginPlaceholderString;
	NSString* _passwordPlaceholderString;
	UITextInputTraits* _passwordTraits;
	UITextInputTraits* _loginTraits;
	BOOL _enableFirstOtherButton;
	BOOL _forceVerticalLayout;
	long long _dismissIndex;
	long long cancelButtonIndex;
	NSArray* _buttonTitles;

}

@property (nonatomic,copy) NSString * title;                                                                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                                                                  //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) long long type;                                                                                    //@synthesize itemType=_itemType - In the implementation block
@property (assign,nonatomic) UIView * targetView;                                                                               //@synthesize popoverTargetView=_popoverTargetView - In the implementation block
@property (assign,nonatomic) CGRect targetRect;                                                                                 //@synthesize popoverTargetRect=_popoverTargetRect - In the implementation block
@property (readonly) BOOL isPresented;                                                                                          //@synthesize isPresented=_isPresented - In the implementation block
@property (assign,nonatomic) BOOL enableFirstOtherButton;                                                                       //@synthesize enableFirstOtherButton=_enableFirstOtherButton - In the implementation block
@property (assign,nonatomic) id<UIModalItemDelegate> delegate;                                                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * buttonTitles;                                                                              //@synthesize buttonTitles=_buttonTitles - In the implementation block
@property (assign,nonatomic) long long cancelButtonIndex; 
@property (assign,nonatomic) long long defaultButtonIndex;                                                                      //@synthesize defaultButtonIndex=_defaultButtonIndex - In the implementation block
@property (assign,nonatomic) BOOL forceVerticalLayout;                                                                          //@synthesize forceVerticalLayout=_forceVerticalLayout - In the implementation block
@property (assign,nonatomic) long long modalItemInputStyle;                                                                     //@synthesize modalItemInputStyle=_modalItemInputStyle - In the implementation block
@property (nonatomic,copy) NSString * loginString;                                                                              //@synthesize loginString=_loginString - In the implementation block
@property (nonatomic,copy) NSString * passwordString;                                                                           //@synthesize passwordString=_passwordString - In the implementation block
@property (nonatomic,copy) NSString * loginPlaceholderString;                                                                   //@synthesize loginPlaceholderString=_loginPlaceholderString - In the implementation block
@property (nonatomic,copy) NSString * passwordPlaceholderString;                                                                //@synthesize passwordPlaceholderString=_passwordPlaceholderString - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;                                                               //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;                                                          //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic) CGSize contentViewControllerSize;                                                                  //@synthesize contentViewControllerSize=_contentViewControllerSize - In the implementation block
@property (assign,nonatomic) long long presentAnimationType;                                                                    //@synthesize presentAnimationType=_presentAnimationType - In the implementation block
@property (assign,nonatomic) long long dismissAnimationType;                                                                    //@synthesize dismissAnimationType=_dismissAnimationType - In the implementation block
@property (setter=_setViewController:,getter=_viewController,nonatomic,retain) UIViewController * _viewController; 
@property (nonatomic,copy) NSAttributedString * titleAttributedString;                                                          //@synthesize titleAttributedString=_titleAttributedString - In the implementation block
@property (nonatomic,copy) NSAttributedString * messageAttributedString;                                                        //@synthesize messageAttributedString=_messageAttributedString - In the implementation block
@property (nonatomic,copy) NSString * subtitleString;                                                                           //@synthesize subtitleString=_subtitleString - In the implementation block
@property (assign,nonatomic) long long titleMaxLineNumber;                                                                      //@synthesize titleMaxLineNumber=_titleMaxLineNumber - In the implementation block
@property (assign,nonatomic) long long messageMaxLineNumber;                                                                    //@synthesize messageMaxLineNumber=_messageMaxLineNumber - In the implementation block
@property (assign,nonatomic) long long numberOfButtonsRows;                                                                     //@synthesize numberOfButtonsRows=_numberOfButtonsRows - In the implementation block
@property (assign,nonatomic) BOOL useUndoStyle;                                                                                 //@synthesize useUndoStyle=_useUndoStyle - In the implementation block
@property (assign,nonatomic) BOOL useWifiPickerLayout;                                                                          //@synthesize useWifiPickerLayout=_useWifiPickerLayout - In the implementation block
@property (assign,nonatomic) BOOL textFieldsHidden;                                                                             //@synthesize textFieldsHidden=_textFieldsHidden - In the implementation block
@property (nonatomic,retain) _UIModalItemContentView * contentView;                                                             //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) _UIModalItemBackgroundView * backgroundView;                                                       //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) BOOL isBeingDismissed;                                                                             //@synthesize isBeingDismissed=_isBeingDismissed - In the implementation block
@property (assign,nonatomic) long long dismissIndex;                                                                            //@synthesize dismissIndex=_dismissIndex - In the implementation block
@property (assign,nonatomic) BOOL isHidden;                                                                                     //@synthesize isHidden=_isHidden - In the implementation block
@property (assign,nonatomic) BOOL dontUpdateFrameForKBChanges;                                                                  //@synthesize dontUpdateFrameForKBChanges=_dontUpdateFrameForKBChanges - In the implementation block
+(id)modalItemWithType:(long long)arg1 title:(id)arg2 message:(id)arg3 buttonTitles:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setDelegate:(id<UIModalItemDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isHidden;
-(id)_contentView;
-(void)setTitle:(NSString *)arg1 ;
-(id<UIModalItemDelegate>)delegate;
-(id)_backgroundView;
-(long long)cancelButtonIndex;
-(long long)addButtonWithTitle:(id)arg1 ;
-(void)setCancelButtonIndex:(long long)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSString *)title;
-(_UIModalItemContentView *)contentView;
-(BOOL)isBeingDismissed;
-(void)setContentView:(_UIModalItemContentView *)arg1 ;
-(void)setBackgroundView:(_UIModalItemBackgroundView *)arg1 ;
-(_UIModalItemBackgroundView *)backgroundView;
-(NSString *)subtitleString;
-(NSString *)message;
-(long long)modalItemInputStyle;
-(id)_cancelButtonTitle;
-(id)_otherButtonsTitles;
-(UIViewController *)contentViewController;
-(long long)defaultButtonIndex;
-(id)textFieldAtIndex:(long long)arg1 ;
-(id)_passwordTraits;
-(NSString *)passwordPlaceholderString;
-(double)_maxWidth;
-(double)_maxHeight;
-(void)_passwordFieldTextDidChange;
-(void)_loginFieldTextDidChange;
-(BOOL)enableFirstOtherButton;
-(void)setEnableFirstOtherButton:(BOOL)arg1 ;
-(NSAttributedString *)titleAttributedString;
-(long long)numberOfButtonsRows;
-(BOOL)forceVerticalLayout;
-(BOOL)useUndoStyle;
-(BOOL)useWifiPickerLayout;
-(long long)titleMaxLineNumber;
-(long long)messageMaxLineNumber;
-(CGSize)contentViewControllerSize;
-(BOOL)textFieldsHidden;
-(void)setDontUpdateFrameForKBChanges:(BOOL)arg1 ;
-(UIViewController *)_viewController;
-(UIViewController *)viewController;
-(BOOL)dontUpdateFrameForKBChanges;
-(id)_representedView;
-(void)_setRepresentedView:(id)arg1 ;
-(long long)presentAnimationType;
-(void)setIsHidden:(BOOL)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)setDefaultButtonIndex:(long long)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 otherButtonTitles:(id)arg3 completion:(/*^block*/id)arg4 delegate:(id)arg5 ;
-(void)_updateContentView;
-(void)setPasswordString:(NSString *)arg1 ;
-(void)setLoginString:(NSString *)arg1 ;
-(id)buttonTitleAtIndex;
-(id)_popoverBackgroundView;
-(void)_setViewController:(id)arg1 ;
-(id)_hostingViewController;
-(void)_setHostingViewController:(id)arg1 ;
-(id)_anchorViewController;
-(void)_setAnchorViewController:(id)arg1 ;
-(id)_typeKey;
-(id)_defaultButtonTitle;
-(void)setSubtitleString:(NSString *)arg1 ;
-(void)refreshButtonTitle;
-(void)setTextFieldsHidden:(BOOL)arg1 ;
-(id)_loginTraits;
-(void)setModalItemInputStyle:(long long)arg1 ;
-(BOOL)isPresented;
-(void)setIsBeingDismissed:(BOOL)arg1 ;
-(long long)dismissIndex;
-(void)setDismissIndex:(long long)arg1 ;
-(UIView *)targetView;
-(void)setTargetView:(UIView *)arg1 ;
-(CGRect)targetRect;
-(void)setTargetRect:(CGRect)arg1 ;
-(void)setPresentAnimationType:(long long)arg1 ;
-(long long)dismissAnimationType;
-(void)setDismissAnimationType:(long long)arg1 ;
-(NSString *)loginString;
-(NSString *)passwordString;
-(NSString *)loginPlaceholderString;
-(void)setLoginPlaceholderString:(NSString *)arg1 ;
-(void)setPasswordPlaceholderString:(NSString *)arg1 ;
-(void)setContentViewControllerSize:(CGSize)arg1 ;
-(void)setTitleAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)messageAttributedString;
-(void)setMessageAttributedString:(NSAttributedString *)arg1 ;
-(void)setTitleMaxLineNumber:(long long)arg1 ;
-(void)setMessageMaxLineNumber:(long long)arg1 ;
-(void)setNumberOfButtonsRows:(long long)arg1 ;
-(void)setUseUndoStyle:(BOOL)arg1 ;
-(void)setUseWifiPickerLayout:(BOOL)arg1 ;
-(NSArray *)buttonTitles;
-(void)setButtonTitles:(NSArray *)arg1 ;
-(void)setForceVerticalLayout:(BOOL)arg1 ;
@end

