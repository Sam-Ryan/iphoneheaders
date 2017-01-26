/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:52:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioPlayEvent.h>

@class NSDate, NSString, NSData, NSDictionary;

@interface RadioMutablePlayEvent : RadioPlayEvent

@property (nonatomic,retain) NSDate * datePlayed; 
@property (assign,nonatomic) long long endReason; 
@property (assign,nonatomic) double endTimeInTrack; 
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (assign,nonatomic) double startTimeInTrack; 
@property (assign,nonatomic) long long storeID; 
@property (nonatomic,copy) NSData * timedMetadata; 
@property (nonatomic,copy) NSDictionary * trackInfo; 
@property (assign,nonatomic) long long type; 
-(void)setTimedMetadata:(NSData *)arg1 ;
-(void)setTrackInfo:(NSDictionary *)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStoreID:(long long)arg1 ;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(void)setDatePlayed:(NSDate *)arg1 ;
-(void)setEndReason:(long long)arg1 ;
-(void)setEndTimeInTrack:(double)arg1 ;
-(void)setStartTimeInTrack:(double)arg1 ;
@end

