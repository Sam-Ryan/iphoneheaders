/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:08 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BKEntitlementCache <NSObject>
@required
-(BOOL)shouldCacheResultForToken:(SCD_Struct_BK5*)arg1;
-(BOOL)hasCacheResultForToken:(SCD_Struct_BK5*)arg1 andEntitlement:(id)arg2 result:(BOOL*)arg3;
-(void)cacheResult:(BOOL)arg1 forToken:(SCD_Struct_BK5*)arg2 andEntitlement:(id)arg3;

@end

