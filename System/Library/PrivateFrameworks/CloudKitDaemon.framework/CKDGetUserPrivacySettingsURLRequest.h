/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDPUserPrivacySettings;

@interface CKDGetUserPrivacySettingsURLRequest : CKDURLRequest {

	CKDPUserPrivacySettings* _userPrivacySettings;

}

@property (nonatomic,retain) CKDPUserPrivacySettings * userPrivacySettings;              //@synthesize userPrivacySettings=_userPrivacySettings - In the implementation block
-(int)operationType;
-(void)setUserPrivacySettings:(CKDPUserPrivacySettings *)arg1 ;
-(CKDPUserPrivacySettings *)userPrivacySettings;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
@end

