/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUDownloadMetadata.h>

@interface SUMutableDownloadMetadata : SUDownloadMetadata

@property (assign,nonatomic) int downloadFeeAgreementStatus; 
@property (assign,nonatomic) int termsAndConditionsAgreementStatus; 
@property (assign,nonatomic) BOOL enforceWifiOnlyOverride; 
-(id)initWithMetadata:(id)arg1 ;
-(void)applyDownloadPolicy:(id)arg1 ;
@end

