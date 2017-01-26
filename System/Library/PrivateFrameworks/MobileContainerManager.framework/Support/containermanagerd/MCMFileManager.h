/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:17:13 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/Support/containermanagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <containermanagerd/containermanagerd-Structs.h>
@interface MCMFileManager : NSObject
+(id)defaultManager;
-(BOOL)standardizeOwnershipAtURL:(id)arg1 toUID:(unsigned)arg2 GID:(unsigned)arg3 error:(id*)arg4 ;
-(void)printDirectoryStructureAtURL:(id)arg1 ;
-(BOOL)_CreateSystemUserACEInACL:(acl*)arg1 withPermissions:(int)arg2 andFlags:(int)arg3 withError:(id*)arg4 ;
-(BOOL)standardizeAllSystemContainerACLsAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 mode:(unsigned short)arg3 owner:(unsigned)arg4 error:(id*)arg5 ;
-(BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 mode:(unsigned short)arg3 owner:(unsigned)arg4 class:(int)arg5 error:(id*)arg6 ;
-(unsigned long long)diskUsageForURL:(id)arg1 ;
-(aclRef)_CopyTopLevelSystemContainerACLWithError:(id*)arg1 ;
-(id)urlsForItemsInDirectoryAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)setTopLevelSystemContainerACLAtURL:(id)arg1 error:(id*)arg2 ;
-(aclRef)_CopySystemContainerACLWithNumACEs:(int)arg1 isDir:(BOOL)arg2 inheritOnly:(BOOL)arg3 withError:(id*)arg4 ;
-(BOOL)standardizeACLsAtURL:(id)arg1 isSystemContainer:(BOOL)arg2 error:(id*)arg3 ;
-(id)createTemporaryDirectoryInDirectoryURL:(id)arg1 owner:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)standardizeACLsForSystemContainerAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeItemAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)itemDoesNotExistAtURL:(id)arg1 ;
-(BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 mode:(unsigned short)arg3 class:(int)arg4 error:(id*)arg5 ;
-(BOOL)_copyItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)_moveItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(BOOL)arg3 error:(id*)arg4 ;
-(id)realPathForURL:(id)arg1 ifChildOfURL:(id)arg2 ;
-(BOOL)_traverseDirectory:(id)arg1 error:(id*)arg2 withBlock:(/*^block*/id)arg3 ;
-(BOOL)copyItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)moveItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)itemExistsAtURL:(id)arg1 ;
-(id)_realPathForURL:(id)arg1 allowNonExistentPathComponents:(BOOL)arg2 ;
-(id)_realPathWhatExistsInPath:(id)arg1 ;
-(BOOL)_validateSymlink:(id)arg1 withStartingDepth:(unsigned)arg2 andEndingDepth:(unsigned*)arg3 ;
-(BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 mode:(unsigned short)arg3 error:(id*)arg4 ;
-(id)createTemporaryDirectoryInDirectoryURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)dataProtectionClassOfItemAtURL:(id)arg1 class:(int*)arg2 error:(id*)arg3 ;
-(BOOL)setDataProtectionClassOfItemAtURL:(id)arg1 toClass:(int)arg2 ifPredicate:(/*^block*/id)arg3 error:(id*)arg4 ;
@end

