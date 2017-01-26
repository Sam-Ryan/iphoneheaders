/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICNoteContainer.h>

@class ICAccount, NSString;

@interface ICAccountProxy : NSObject <ICNoteContainer> {

	ICAccount* _account;

}

@property (retain) ICAccount * account;                             //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)accountProxyWithAccount:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(id)accountName;
-(ICAccount *)account;
-(void)setAccount:(ICAccount *)arg1 ;
-(BOOL)isDeleted;
-(id)predicateForSearchableAttachments;
-(id)predicateForVisibleNotes;
-(id)predicateForSearchableNotes;
-(id)titleForNavigationBar;
-(BOOL)noteIsVisible:(id)arg1 ;
-(id)visibleNotes;
-(unsigned long long)visibleNotesCount;
-(id)titleForTableViewCell;
-(BOOL)supportsEditingNotes;
-(id)noteVisibilityTestingForSearchingAccount;
-(BOOL)supportsVisibilityTestingType:(long long)arg1 ;
-(BOOL)isLeaf;
-(id)visibleNoteContainerChildren;
@end

