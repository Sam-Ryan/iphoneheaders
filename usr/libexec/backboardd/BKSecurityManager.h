/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:08 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, BKEntitlementCache;
#import <backboardd/backboardd-Structs.h>
@class NSObject;

@interface BKSecurityManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<BKEntitlementCache> _entitlementCache;

}

@property (nonatomic,retain) id<BKEntitlementCache> entitlementCache; 
+(BOOL)hasEntitlement:(id)arg1 forAuditToken:(SCD_Struct_BK5*)arg2 ;
+(BOOL)hasEntitlement:(id)arg1 forConnection:(id)arg2 ;
+(id)sharedInstance;
-(void)setEntitlementCache:(id<BKEntitlementCache>)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 forAuditToken:(SCD_Struct_BK5*)arg2 ;
-(id<BKEntitlementCache>)entitlementCache;
-(void)dealloc;
-(id)init;
@end

