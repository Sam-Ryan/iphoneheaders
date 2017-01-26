/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CertInfoTrustDescription <NSObject>
@required
-(unsigned long long)certificateCount;
-(id)certificatePropertiesAtIndex:(unsigned long long)arg1;
-(id)summaryTitle;
-(id)summarySubtitle;
-(id)summaryDescriptionItems;
-(id)certificateSubjectSummaryAtIndex:(unsigned long long)arg1;
-(id)certificateIssuerSummaryAtIndex:(unsigned long long)arg1;
-(id)certificateExpirationDateAtIndex:(unsigned long long)arg1;
-(BOOL)isRootCertificate;
-(BOOL)isTrusted;

@end

