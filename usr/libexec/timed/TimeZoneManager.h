/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:36 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/timed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <timed/TMSourceManager.h>
#import <timed/TMTimeZoneManager.h>

@class TMNetworkTimeMap, NSMutableDictionary, NSArray, NSDictionary, NSString;

@interface TimeZoneManager : TMSourceManager <TMTimeZoneManager> {

	NSMutableDictionary* _data;
	NSMutableDictionary* _shouldFetch;
	NSArray* _sortedRuleKeys;
	int _mcc;
	TMNetworkTimeMap* networkTimeMap;

}

@property (nonatomic,retain,readonly) NSDictionary * mostRecentNetworkSource; 
@property (assign,nonatomic) int mcc;                                                      //@synthesize mcc=_mcc - In the implementation block
@property (nonatomic,readonly) NSArray * sortedRuleKeys; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<TMSourceManagerDelegate> delegate; 
@property (nonatomic,retain) TMNetworkTimeMap * networkTimeMap; 
-(id)initWithSources:(id)arg1 clock:(id)arg2 ;
-(id)getSources;
-(BOOL)requiresActiveSource;
-(id)computedSourceIfAvailable;
-(id)lockdownSourceIfAvailable;
-(BOOL)isValidNetworkSource:(id)arg1 ;
-(id)sourceIfAvailable:(id)arg1 ;
-(NSDictionary *)mostRecentNetworkSource;
-(TMNetworkTimeMap *)networkTimeMap;
-(id)combinedSourceFromLocation:(id)arg1 andNetwork:(id)arg2 ;
-(BOOL)isValidSource:(id)arg1 ;
-(BOOL)isNetworkTimeZone:(id)arg1 ;
-(BOOL)isLocationTimeZone:(id)arg1 ;
-(int)mcc;
-(void)setShouldFetch:(BOOL)arg1 forSource:(id)arg2 ;
-(NSArray *)sortedRuleKeys;
-(BOOL)isTimeZone:(id)arg1 usedIn:(id)arg2 ;
-(BOOL)shouldFetchSource:(id)arg1 dueToTimeZone:(id)arg2 ;
-(BOOL)shouldFetchSource:(id)arg1 ;
-(void)setSourceTimeZone:(id)arg1 ;
-(void)resetTimeZone:(id)arg1 ;
-(void)powerOn:(id)arg1 ;
-(void)setMcc:(int)arg1 ;
-(void)setNetworkTimeMap:(TMNetworkTimeMap *)arg1 ;
-(void)dealloc;
-(void)fetch:(id)arg1 ;
@end

