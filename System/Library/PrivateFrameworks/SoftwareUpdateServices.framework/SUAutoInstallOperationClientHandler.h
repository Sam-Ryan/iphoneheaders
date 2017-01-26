/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUAutoInstallOperationClientHandler <NSObject>
@required
-(id)uniqueIdentifier;
-(void)_noteAutoInstallOperationWasCancelled;
-(void)_noteAutoInstallOperationDidExpire;
-(void)_noteAutoInstallOperationDidConsent;
-(void)_noteAutoInstallOperationIsReadyToInstall:(/*^block*/id)arg1;

@end

