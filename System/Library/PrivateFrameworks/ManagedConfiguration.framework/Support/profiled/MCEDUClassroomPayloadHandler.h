/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:39 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <profiled/MCNewPayloadHandler.h>

@interface MCEDUClassroomPayloadHandler : MCNewPayloadHandler
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)unsetAside;
-(void)setAside;
-(id)configurationWithError:(id*)arg1 ;
-(id)_persistentIDForPayloadUUID:(id)arg1 requireIdentity:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)setConfiguration:(id)arg1 error:(id*)arg2 ;
-(BOOL)_installWithError:(id*)arg1 ;
-(void)_remove;
-(void)remove;
-(BOOL)isInstalled;
@end

