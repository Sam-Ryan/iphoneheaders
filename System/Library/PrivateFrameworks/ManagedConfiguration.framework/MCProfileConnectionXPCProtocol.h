/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCProfileConnectionXPCProtocol <NSObject>
@required
-(void)doMCICDidUpdateStatus:(id)arg1 completion:(/*^block*/id)arg2;
-(void)doMCICDidBeginInstallingNextProfileData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)doMCICDidFinishInstallationWithIdentifier:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3;
-(void)doMCICDidRequestUserInput:(id)arg1 completion:(/*^block*/id)arg2;
-(void)doMCICDidFinishPreflightWithError:(id)arg1 completion:(/*^block*/id)arg2;
-(void)doMCICDidRequestShowUserWarnings:(id)arg1 completion:(/*^block*/id)arg2;
-(void)doMCICDidRequestCurrentPasscodeWithCompletion:(/*^block*/id)arg1;

@end

