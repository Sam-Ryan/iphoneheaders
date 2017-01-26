/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:41 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSMutableSet, ISSoftwareApplication, NSDate, NSSet;

@interface AppReceiptOperationResult : NSObject {

	NSError* _error;
	NSMutableSet* _expiring;
	NSMutableSet* _refreshed;
	NSMutableSet* _revoked;
	ISSoftwareApplication* _soonestExpiring;
	NSDate* _soonestExpirationDate;

}

@property (nonatomic,readonly) NSSet * expiring;                                   //@synthesize expiring=_expiring - In the implementation block
@property (nonatomic,readonly) NSSet * refreshed;                                  //@synthesize refreshed=_refreshed - In the implementation block
@property (nonatomic,retain) NSError * resultingError;                             //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSSet * revoked;                                    //@synthesize revoked=_revoked - In the implementation block
@property (nonatomic,retain) ISSoftwareApplication * soonestExpiring;              //@synthesize soonestExpiring=_soonestExpiring - In the implementation block
@property (nonatomic,retain) NSDate * soonestExpirationDate;                       //@synthesize soonestExpirationDate=_soonestExpirationDate - In the implementation block
-(void)addExpiring:(id)arg1 expirationDate:(id)arg2 ;
-(void)addRefreshed:(id)arg1 ;
-(void)addRevoked:(id)arg1 ;
-(NSError *)resultingError;
-(void)setResultingError:(NSError *)arg1 ;
-(void)setSoonestExpirationDate:(NSDate *)arg1 ;
-(void)setSoonestExpiring:(ISSoftwareApplication *)arg1 ;
-(NSSet *)expiring;
-(NSSet *)refreshed;
-(ISSoftwareApplication *)soonestExpiring;
-(NSDate *)soonestExpirationDate;
-(NSSet *)revoked;
-(void)dealloc;
@end

