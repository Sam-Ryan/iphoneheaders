/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:39 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <profiled/MCACAccountPayloadHandler.h>
#import <profiled/DAValidityCheckConsumer.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSError, NSString;

@interface MCNewLDAPAccountPayloadHandler : MCACAccountPayloadHandler <DAValidityCheckConsumer> {

	NSObject*<OS_dispatch_semaphore> _doneSema;
	BOOL _validationComplete;
	NSError* _validationError;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)setAsideWithInstaller:(id)arg1 ;
-(void)unsetAside;
-(id)userInputFields;
-(BOOL)preflightUserInputResponses:(id)arg1 outError:(id*)arg2 ;
-(void)setUserInputResponses:(id)arg1 ;
-(id)_errorFromValidationError:(id)arg1 ;
-(id)accountTypeIdentifiers;
-(id)unhashedAccountIdentifier;
-(id)_reallyInstallInstaller:(id)arg1 isInstalledByMDM:(BOOL)arg2 ;
-(id)_installedAccount;
-(id)_accountFromPayloadWithUserInputResponses:(id)arg1 ;
-(void)_preflightWithAccount:(id)arg1 ;
-(void)remove;
-(BOOL)isInstalled;
-(void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3 ;
@end

