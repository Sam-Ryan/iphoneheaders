/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UIControl.h>
#import <libobjc.A.dylib/CNAvatarCardControllerDelegate.h>
#import <libobjc.A.dylib/CNContactChangesObserver.h>
#import <libobjc.A.dylib/CNCardTransitioning.h>

@protocol CNAvatarViewDelegate;
@class UIView, UIImage, NSArray, NSString, UIButton, UINavigationController, CNMonogrammer, CNAvatarCardController, CNContact;

@interface CNAvatarView : UIControl <CNAvatarCardControllerDelegate, CNContactChangesObserver, CNCardTransitioning> {

	BOOL _showsContactOnTap;
	BOOL _showsActionsOnTap;
	BOOL _showsActionsOnForcePress;
	BOOL _autoUpdateContact;
	BOOL _asynchronousRendering;
	BOOL _registeredInNotifier;
	BOOL _registeredContactAction;
	BOOL _needsUpdate;
	NSArray* _contacts;
	NSString* _name;
	NSString* _message;
	id<CNAvatarViewDelegate> _delegate;
	UIView* _forcePressView;
	long long _monogrammerStyle;
	UIImage* _overrideImage;
	UIButton* _imageButton;
	UINavigationController* _contactViewNavigationController;
	CNMonogrammer* _serialMonogrammer;
	CNMonogrammer* _concurrentMonogrammer;
	/*^block*/id _monogrammerProvider;
	CNAvatarCardController* _cardController;

}

@property (nonatomic,retain) CNContact * contact; 
@property (nonatomic,retain) NSArray * contacts;                                                    //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy) NSString * name;                                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * message;                                                      //@synthesize message=_message - In the implementation block
@property (assign,nonatomic,__weak) id<CNAvatarViewDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsContactOnTap;                                                //@synthesize showsContactOnTap=_showsContactOnTap - In the implementation block
@property (nonatomic,copy) NSArray * actionCategories; 
@property (assign,nonatomic,__weak) UIView * forcePressView;                                        //@synthesize forcePressView=_forcePressView - In the implementation block
@property (assign,nonatomic) BOOL showsActionsOnTap;                                                //@synthesize showsActionsOnTap=_showsActionsOnTap - In the implementation block
@property (assign,nonatomic) BOOL showsActionsOnForcePress;                                         //@synthesize showsActionsOnForcePress=_showsActionsOnForcePress - In the implementation block
@property (assign,nonatomic) long long monogrammerStyle;                                            //@synthesize monogrammerStyle=_monogrammerStyle - In the implementation block
@property (nonatomic,readonly) UIImage * contentImage; 
@property (nonatomic,readonly) CGRect contentImageFrame; 
@property (assign,nonatomic) BOOL autoUpdateContact;                                                //@synthesize autoUpdateContact=_autoUpdateContact - In the implementation block
@property (assign,nonatomic) BOOL asynchronousRendering;                                            //@synthesize asynchronousRendering=_asynchronousRendering - In the implementation block
@property (assign,nonatomic) BOOL bypassActionValidation; 
@property (nonatomic,retain) UIImage * overrideImage;                                               //@synthesize overrideImage=_overrideImage - In the implementation block
@property (nonatomic,retain) UIButton * imageButton;                                                //@synthesize imageButton=_imageButton - In the implementation block
@property (nonatomic,retain) UINavigationController * contactViewNavigationController;              //@synthesize contactViewNavigationController=_contactViewNavigationController - In the implementation block
@property (assign) BOOL registeredInNotifier;                                                       //@synthesize registeredInNotifier=_registeredInNotifier - In the implementation block
@property (assign) BOOL registeredContactAction;                                                    //@synthesize registeredContactAction=_registeredContactAction - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                                                      //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (nonatomic,retain) CNMonogrammer * serialMonogrammer;                                     //@synthesize serialMonogrammer=_serialMonogrammer - In the implementation block
@property (nonatomic,retain) CNMonogrammer * concurrentMonogrammer;                                 //@synthesize concurrentMonogrammer=_concurrentMonogrammer - In the implementation block
@property (nonatomic,copy) id monogrammerProvider;                                                  //@synthesize monogrammerProvider=_monogrammerProvider - In the implementation block
@property (nonatomic,retain) CNAvatarCardController * cardController;                               //@synthesize cardController=_cardController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * transitioningView; 
@property (nonatomic,readonly) CGRect transitioningFrame; 
@property (nonatomic,readonly) CGRect transitioningContentFrame; 
@property (nonatomic,readonly) UIImage * transitioningImage; 
@property (nonatomic,readonly) CGRect transitioningImageFrame; 
@property (assign) BOOL transitioningImageVisible; 
@property (nonatomic,readonly) UIView * transitioningContentView; 
+(id)descriptorForRequiredKeys;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CNAvatarViewDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(id)init;
-(void)layoutSubviews;
-(id<CNAvatarViewDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_commonInit;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(BOOL)shouldTrack;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(NSString *)message;
-(UIView *)transitioningView;
-(CGRect)transitioningFrame;
-(void)setMessage:(NSString *)arg1 ;
-(NSArray *)contacts;
-(BOOL)bypassActionValidation;
-(BOOL)shouldUseLayoutSubviews;
-(void)setAutoUpdateContact:(BOOL)arg1 ;
-(void)_updateEnabled;
-(void)_updateRegistration;
-(void)_updateContactAction;
-(CNMonogrammer *)serialMonogrammer;
-(CNMonogrammer *)concurrentMonogrammer;
-(id)monogrammerProvider;
-(void)setSerialMonogrammer:(CNMonogrammer *)arg1 ;
-(void)setConcurrentMonogrammer:(CNMonogrammer *)arg1 ;
-(id)instanceMonogrammerForSerialWork:(BOOL)arg1 ;
-(double)_diameter;
-(long long)monogrammerStyle;
-(BOOL)autoUpdateContact;
-(void)_updateAvatarView;
-(BOOL)asynchronousRendering;
-(void)performSerialSynchronousWork:(BOOL)arg1 withBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)showsContactOnTap;
-(void)showContact:(id)arg1 ;
-(UINavigationController *)contactViewNavigationController;
-(void)setContactViewNavigationController:(UINavigationController *)arg1 ;
-(void)_updateAvatarViewIfNeeded;
-(NSArray *)actionCategories;
-(UIView *)forcePressView;
-(void)_updateCardActions;
-(UIButton *)imageButton;
-(void)contactDidChange;
-(UIImage *)contentImage;
-(CGRect)contentImageFrame;
-(void)contactDidChange:(id)arg1 ;
-(CGRect)transitioningContentFrame;
-(UIImage *)transitioningImage;
-(CGRect)transitioningImageFrame;
-(BOOL)transitioningImageVisible;
-(void)setTransitioningImageVisible:(BOOL)arg1 ;
-(void)setOverrideImage:(UIImage *)arg1 ;
-(void)dismissContactViewController:(id)arg1 ;
-(void)setShowsActionsOnTap:(BOOL)arg1 ;
-(void)setShowsActionsOnForcePress:(BOOL)arg1 ;
-(BOOL)showsActionsOnTap;
-(BOOL)showsActionsOnForcePress;
-(void)setMonogrammerStyle:(long long)arg1 ;
-(UIImage *)overrideImage;
-(void)setImageButton:(UIButton *)arg1 ;
-(BOOL)registeredInNotifier;
-(void)setRegisteredInNotifier:(BOOL)arg1 ;
-(BOOL)registeredContactAction;
-(void)setRegisteredContactAction:(BOOL)arg1 ;
-(void)setMonogrammerProvider:(id)arg1 ;
-(CNAvatarCardController *)cardController;
-(id)presentingViewControllerForAvatarCardController:(id)arg1 ;
-(long long)avatarCardController:(id)arg1 presentationResultForLocation:(CGPoint)arg2 ;
-(id)avatarCardController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(void)avatarCardController:(id)arg1 willShowActions:(id)arg2 ;
-(BOOL)avatarCardController:(id)arg1 shouldShowContact:(id)arg2 ;
-(void)avatarCardControllerWillDismiss:(id)arg1 ;
-(void)avatarCardControllerDidDismiss:(id)arg1 ;
-(void)setCardController:(CNAvatarCardController *)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(void)setShowsContactOnTap:(BOOL)arg1 ;
-(void)setAsynchronousRendering:(BOOL)arg1 ;
-(void)setBypassActionValidation:(BOOL)arg1 ;
-(void)setForcePressView:(UIView *)arg1 ;
-(void)setActionCategories:(NSArray *)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
@end

