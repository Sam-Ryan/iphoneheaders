/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/ICNoteVisibilityTesting.h>

@class NSString;

@interface NoteCollectionObject : NSManagedObject <ICNoteVisibilityTesting>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)noteVisibilityTestingForSearchingAccount;
-(id)predicateForSearchableAttachments;
-(id)predicateForSearchableNotes;
-(BOOL)supportsVisibilityTestingType:(long long)arg1 ;
-(id)predicateForNotes;
-(id)collectionInfo;
-(id)basicAccountIdentifier;
@end
