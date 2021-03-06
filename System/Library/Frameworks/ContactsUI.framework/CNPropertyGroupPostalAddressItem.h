/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyGroupItem.h>

@class CNPostalAddress;

@interface CNPropertyGroupPostalAddressItem : CNPropertyGroupItem

@property (nonatomic,readonly) CNPostalAddress * address; 
+(id)emptyValueForLabel:(id)arg1 ;
-(BOOL)isEquivalentToItem:(id)arg1 whenEditing:(BOOL)arg2 ;
-(id)normalizedValue;
-(id)defaultActionURL;
-(id)displayStringForValue:(id)arg1 ;
-(id)bestValue:(id)arg1 ;
-(BOOL)_isMinimalAddress:(id)arg1 ;
-(CNPostalAddress *)address;
@end

