/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNCardGroupItem.h>

@class NSMutableArray, NSArray;

@interface CNCardActionGroupItem : CNCardGroupItem {

	NSMutableArray* _actions;

}

@property (nonatomic,readonly) NSArray * actions;              //@synthesize actions=_actions - In the implementation block
+(id)actionGroupItemWithAction:(id)arg1 ;
+(id)actionGroupItemWithActions:(id)arg1 ;
-(id)init;
-(NSArray *)actions;
-(Class)cellClass;
-(void)addAction:(id)arg1 ;
-(id)initWithAction:(id)arg1 ;
@end

