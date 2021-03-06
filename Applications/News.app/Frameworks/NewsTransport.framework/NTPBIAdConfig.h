/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBIAdConfig : PBCodable <NSCopying> {

	long long _segmentsHistoryWindowInterval;
	long long _segmentsMinimumArticleCount;
	long long _segmentsSubmissionFrequency;
	double _segmentsThreshold;
	BOOL _segmentsEnabled;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasSegmentsEnabled; 
@property (assign,nonatomic) BOOL segmentsEnabled;                                 //@synthesize segmentsEnabled=_segmentsEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasSegmentsThreshold; 
@property (assign,nonatomic) double segmentsThreshold;                             //@synthesize segmentsThreshold=_segmentsThreshold - In the implementation block
@property (assign,nonatomic) BOOL hasSegmentsSubmissionFrequency; 
@property (assign,nonatomic) long long segmentsSubmissionFrequency;                //@synthesize segmentsSubmissionFrequency=_segmentsSubmissionFrequency - In the implementation block
@property (assign,nonatomic) BOOL hasSegmentsHistoryWindowInterval; 
@property (assign,nonatomic) long long segmentsHistoryWindowInterval;              //@synthesize segmentsHistoryWindowInterval=_segmentsHistoryWindowInterval - In the implementation block
@property (assign,nonatomic) BOOL hasSegmentsMinimumArticleCount; 
@property (assign,nonatomic) long long segmentsMinimumArticleCount;                //@synthesize segmentsMinimumArticleCount=_segmentsMinimumArticleCount - In the implementation block
-(void)setSegmentsEnabled:(BOOL)arg1 ;
-(void)setHasSegmentsEnabled:(BOOL)arg1 ;
-(BOOL)hasSegmentsEnabled;
-(void)setSegmentsThreshold:(double)arg1 ;
-(void)setHasSegmentsThreshold:(BOOL)arg1 ;
-(BOOL)hasSegmentsThreshold;
-(void)setSegmentsSubmissionFrequency:(long long)arg1 ;
-(void)setHasSegmentsSubmissionFrequency:(BOOL)arg1 ;
-(BOOL)hasSegmentsSubmissionFrequency;
-(void)setSegmentsHistoryWindowInterval:(long long)arg1 ;
-(void)setHasSegmentsHistoryWindowInterval:(BOOL)arg1 ;
-(BOOL)hasSegmentsHistoryWindowInterval;
-(void)setSegmentsMinimumArticleCount:(long long)arg1 ;
-(void)setHasSegmentsMinimumArticleCount:(BOOL)arg1 ;
-(BOOL)hasSegmentsMinimumArticleCount;
-(BOOL)segmentsEnabled;
-(double)segmentsThreshold;
-(long long)segmentsSubmissionFrequency;
-(long long)segmentsHistoryWindowInterval;
-(long long)segmentsMinimumArticleCount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
@end

