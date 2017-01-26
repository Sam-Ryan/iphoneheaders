/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:39 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCDependencyReader.h>

@class NSMutableDictionary;

@interface MCDependencyManager : MCDependencyReader {

	NSMutableDictionary* _memberQueueSystemOrphansDict;
	NSMutableDictionary* _memberQueueUserOrphansDict;

}

@property (nonatomic,retain) NSMutableDictionary * memberQueueSystemOrphansDict;              //@synthesize memberQueueSystemOrphansDict=_memberQueueSystemOrphansDict - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueUserOrphansDict;                //@synthesize memberQueueUserOrphansDict=_memberQueueUserOrphansDict - In the implementation block
+(id)sharedManager;
-(void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4 ;
-(void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4 toSystem:(BOOL)arg5 user:(BOOL)arg6 ;
-(void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4 fromSystem:(BOOL)arg5 user:(BOOL)arg6 ;
-(void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 ;
-(void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 ;
-(void)commitChangesCompletion:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)memberQueueSystemOrphansDict;
-(NSMutableDictionary *)memberQueueUserOrphansDict;
-(id)memberQueueOrphanedParentsInSystemDomain:(id)arg1 ;
-(id)memberQueueOrphanedParentsInUserDomain:(id)arg1 ;
-(void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 toSystem:(BOOL)arg4 user:(BOOL)arg5 ;
-(void)memberQueueAddDependent:(id)arg1 toParent:(id)arg2 inDomain:(id)arg3 toSystem:(BOOL)arg4 user:(BOOL)arg5 ;
-(void)memberQueueRemoveOrphanParent:(id)arg1 inDomain:(id)arg2 fromSystem:(BOOL)arg3 user:(BOOL)arg4 ;
-(void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 fromSystem:(BOOL)arg4 user:(BOOL)arg5 ;
-(void)memberQueueRemoveDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 fromSystem:(BOOL)arg4 user:(BOOL)arg5 ;
-(void)memberQueueAddOrphanParent:(id)arg1 inDomain:(id)arg2 toSystem:(BOOL)arg3 user:(BOOL)arg4 ;
-(id)orphanedParentsForDomain:(id)arg1 ;
-(id)orphanedParentsForSystemDomain:(id)arg1 ;
-(id)orphanedParentsForUserDomain:(id)arg1 ;
-(void)memberQueueAddDependent:(id)arg1 toParent:(id)arg2 inDomain:(id)arg3 ;
-(void)memberQueueRemoveDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 ;
-(void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4 ;
-(void)setMemberQueueSystemOrphansDict:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueUserOrphansDict:(NSMutableDictionary *)arg1 ;
-(id)init;
-(id)_init;
-(void)commitChanges;
@end
