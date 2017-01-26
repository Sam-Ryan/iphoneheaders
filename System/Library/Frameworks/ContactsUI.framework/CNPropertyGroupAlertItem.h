/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyGroupItem.h>

@class NSString;

@interface CNPropertyGroupAlertItem : CNPropertyGroupItem {

	long long _alertKind;

}

@property (assign,nonatomic) long long alertKind;                       //@synthesize alertKind=_alertKind - In the implementation block
@property (nonatomic,readonly) NSString * alertIdentifier; 
+(id)emptyValueForLabel:(id)arg1 ;
-(id)description;
-(void)updateLabeledValueWithValue:(id)arg1 ;
-(BOOL)isEquivalentToItem:(id)arg1 whenEditing:(BOOL)arg2 ;
-(BOOL)canRemove;
-(long long)alertKind;
-(NSString *)alertIdentifier;
-(id)displayStringForValue:(id)arg1 ;
-(id)activityAlertKey;
-(void)setLabeledValue:(id)arg1 ;
-(void)setAlertKind:(long long)arg1 ;
-(BOOL)isValidValue:(id)arg1 ;
-(id)labeledValue;
-(id)_toneManager;
-(id)_vibrationManager;
-(id)displayLabel;
@end

