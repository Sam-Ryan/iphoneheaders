/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/MobileNotes.migrator/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface ICNotesDataMigrator : DataClassMigrator {

	BOOL _didStartSharedContext;

}

@property (assign,nonatomic) BOOL didStartSharedContext;              //@synthesize didStartSharedContext=_didStartSharedContext - In the implementation block
-(BOOL)didStartSharedContext;
-(void)startSharedContextIfNecessary;
-(void)setDidStartSharedContext:(BOOL)arg1 ;
-(void)clearSharedContextIfNecessary;
-(float)migrationProgress;
-(float)estimatedDuration;
-(BOOL)performMigration;
-(id)dataClassName;
@end

