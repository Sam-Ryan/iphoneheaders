/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <locationd/CMLogItem.h>

@class NSUUID, NSDate, NSNumber;

@interface CMNatalieData : CMLogItem {

	long long fRecordId;
	double fStartDate;
	long long fSession;
	double fMets;
	double fNatalies;
	double fBasalNatalies;
	NSUUID* fSourceId;

}

@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSNumber * mets; 
@property (nonatomic,readonly) NSNumber * natalies; 
@property (nonatomic,readonly) NSNumber * basalNatalies; 
@property (nonatomic,readonly) long long session; 
@property (nonatomic,readonly) long long recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
+(BOOL)supportsSecureCoding;
+(id)sessionName:(long long)arg1 ;
+(id)maxNatalieEntries;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithStartDate:(double)arg1 recordId:(long long)arg2 session:(long long)arg3 mets:(double)arg4 natalies:(double)arg5 basalNatalies:(double)arg6 timestamp:(double)arg7 sourceId:(id)arg8 ;
-(NSNumber *)mets;
-(NSNumber *)natalies;
-(NSNumber *)basalNatalies;
-(NSUUID *)sourceId;
-(long long)session;
-(NSDate *)startDate;
-(long long)recordId;
@end

