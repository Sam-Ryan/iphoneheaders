/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSManagedObjectID, NSManagedObjectContext, ICAttachmentModel;

@interface ICAttachmentPreviewGeneratorOperation : NSOperation {

	NSManagedObjectID* _attachmentID;
	NSManagedObjectContext* _managedObjectContext;
	ICAttachmentModel* _attachmentModel;

}

@property (retain) NSManagedObjectID * attachmentID;                           //@synthesize attachmentID=_attachmentID - In the implementation block
@property (retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (retain) ICAttachmentModel * attachmentModel;                        //@synthesize attachmentModel=_attachmentModel - In the implementation block
-(void)cancel;
-(void)main;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(ICAttachmentModel *)attachmentModel;
-(void)setAttachmentID:(NSManagedObjectID *)arg1 ;
-(NSManagedObjectID *)attachmentID;
-(void)setAttachmentModel:(ICAttachmentModel *)arg1 ;
-(id)initWithAttachmentManagedObjectID:(id)arg1 ;
@end

