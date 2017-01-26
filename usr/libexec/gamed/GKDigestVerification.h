/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:11 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GKDigestVerification : NSObject
+(id)computeHashForDigest:(id)arg1 withSugar:(id)arg2 ;
+(BOOL)verifyHash:(id)arg1 forDigest:(id)arg2 withSugar:(id)arg3 ;
+(id)digestForSubmitScore:(id)arg1 forBundleID:(id)arg2 shouldScreen:(BOOL)arg3 eligibleChallenges:(id)arg4 ;
+(id)digestForSubmitAchievement:(id)arg1 forBundleID:(id)arg2 shouldScreen:(BOOL)arg3 eligibleChallenges:(id)arg4 ;
+(id)computeVerificationHashForDigest:(id)arg1 ;
+(BOOL)digest:(id)arg1 matchesHash:(id)arg2 ;
@end

