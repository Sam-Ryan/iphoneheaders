/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:52:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioHistoryCategory.h>

@class NSString, NSArray;

@interface RadioMutableHistoryCategory : RadioHistoryCategory

@property (nonatomic,copy) NSString * categoryDescription; 
@property (nonatomic,copy) NSArray * items; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * stationHash; 
@property (assign,nonatomic) long long stationID; 
@property (assign,nonatomic) long long type; 
-(void)setName:(NSString *)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(void)setCategoryDescription:(NSString *)arg1 ;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
@end

