/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyAction.h>

@protocol CNContactContentViewControllerDelegate;
@class CNContactContentViewController, CNMutableContact;

@interface CNPropertyLinkedCardsAction : CNPropertyAction {

	id<CNContactContentViewControllerDelegate> _contactDelegate;
	CNContactContentViewController* _contactController;
	CNMutableContact* _linkedContact;

}

@property (__weak) id<CNContactContentViewControllerDelegate> contactDelegate;              //@synthesize contactDelegate=_contactDelegate - In the implementation block
@property (retain) CNContactContentViewController * contactController;                      //@synthesize contactController=_contactController - In the implementation block
@property (retain) CNMutableContact * linkedContact;                                        //@synthesize linkedContact=_linkedContact - In the implementation block
-(void)dealloc;
-(id<CNContactContentViewControllerDelegate>)contactDelegate;
-(void)setContactDelegate:(id<CNContactContentViewControllerDelegate>)arg1 ;
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
-(void)setContactController:(CNContactContentViewController *)arg1 ;
-(CNContactContentViewController *)contactController;
-(void)setLinkedContact:(CNMutableContact *)arg1 ;
-(CNMutableContact *)linkedContact;
-(void)setPreferredForImage;
-(void)setPreferredForName;
-(id)initWithContact:(id)arg1 ;
@end

