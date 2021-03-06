/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:26:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/ContainerMigrator.migrator/ContainerMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface MCMPerUserConfiguration : NSObject {

	unsigned _userId;
	NSURL* _userBaseDirectory;
	NSURL* _transientDirectory;
	NSURL* _systemContainerBackupBaseDirectory;
	NSURL* _systemContainerBackupDirectory;
	NSURL* _systemGroupContainerBackupDirectory;
	NSURL* _userHomeDirectory;

}

@property (readonly) NSURL * transientDirectory; 
@property (nonatomic,readonly) NSURL * userHomeDirectory;                      //@synthesize userHomeDirectory=_userHomeDirectory - In the implementation block
@property (readonly) NSURL * systemContainerBackupBaseDirectory; 
@property (readonly) NSURL * systemContainerBackupDirectory; 
@property (readonly) NSURL * systemGroupContainerBackupDirectory; 
@property (readonly) NSURL * oldLibraryDirectoryPath; 
@property (readonly) NSURL * oldLoggingPath; 
-(NSURL *)transientDirectory;
-(NSURL *)systemContainerBackupBaseDirectory;
-(id)containerDirectoryURLForContentClass:(unsigned long long)arg1 transient:(BOOL)arg2 ;
-(id)initWithUserId:(unsigned)arg1 ;
-(NSURL *)oldLoggingPath;
-(NSURL *)systemGroupContainerBackupDirectory;
-(NSURL *)systemContainerBackupDirectory;
-(NSURL *)oldLibraryDirectoryPath;
-(id)userBaseDirectory;
-(BOOL)existsUserBaseDirectory;
-(NSURL *)userHomeDirectory;
@end

