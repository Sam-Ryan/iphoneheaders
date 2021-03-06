/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, ICNote, NSSet, ICAuthor;

@interface ICGroup : NSManagedObject

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSNumber * shareTimestamp; 
@property (nonatomic,retain) ICNote * notes; 
@property (nonatomic,retain) NSSet * authors; 
@property (nonatomic,readonly) ICAuthor * owner; 
@property (nonatomic,readonly) NSSet * sharedWith; 
@property (nonatomic,readonly) NSSet * sharedWithDevices; 
-(ICAuthor *)owner;
-(NSSet *)sharedWith;
-(NSSet *)sharedWithDevices;
@end

