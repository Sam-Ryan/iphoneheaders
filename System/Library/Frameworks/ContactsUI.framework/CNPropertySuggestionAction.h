/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyAction.h>

@class CNContactSuggestionViewController;

@interface CNPropertySuggestionAction : CNPropertyAction {

	long long _selectedChoice;
	CNContactSuggestionViewController* _suggestionViewController;

}

@property (assign,nonatomic) long long selectedChoice;                                                  //@synthesize selectedChoice=_selectedChoice - In the implementation block
@property (nonatomic,retain) CNContactSuggestionViewController * suggestionViewController;              //@synthesize suggestionViewController=_suggestionViewController - In the implementation block
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
-(long long)selectedChoice;
-(void)confirm;
-(void)reject;
-(BOOL)_confirmOrReject:(BOOL)arg1 ;
-(void)setSelectedChoice:(long long)arg1 ;
-(void)setSuggestionViewController:(CNContactSuggestionViewController *)arg1 ;
-(CNContactSuggestionViewController *)suggestionViewController;
@end

