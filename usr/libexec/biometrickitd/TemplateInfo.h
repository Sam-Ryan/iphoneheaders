/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:08 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/biometrickitd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface TemplateInfo : NSObject {

	short _totalNodeCount;
	short _largestComponentNodeCount;
	short _clusterCount;
	double _totalArea;
	double _largestComponentArea;
	NSDate* _creationTime;
	long long _matchCount;
	long long _updateCount;

}

@property (assign) short totalNodeCount;                         //@synthesize totalNodeCount=_totalNodeCount - In the implementation block
@property (assign) double totalArea;                             //@synthesize totalArea=_totalArea - In the implementation block
@property (assign) short largestComponentNodeCount;              //@synthesize largestComponentNodeCount=_largestComponentNodeCount - In the implementation block
@property (assign) double largestComponentArea;                  //@synthesize largestComponentArea=_largestComponentArea - In the implementation block
@property (assign) short clusterCount;                           //@synthesize clusterCount=_clusterCount - In the implementation block
@property (nonatomic,retain) NSDate * creationTime;              //@synthesize creationTime=_creationTime - In the implementation block
@property (assign,nonatomic) long long matchCount;               //@synthesize matchCount=_matchCount - In the implementation block
@property (assign,nonatomic) long long updateCount;              //@synthesize updateCount=_updateCount - In the implementation block
-(short)totalNodeCount;
-(void)setTotalNodeCount:(short)arg1 ;
-(double)totalArea;
-(void)setTotalArea:(double)arg1 ;
-(short)largestComponentNodeCount;
-(void)setLargestComponentNodeCount:(short)arg1 ;
-(double)largestComponentArea;
-(void)setLargestComponentArea:(double)arg1 ;
-(void)setClusterCount:(short)arg1 ;
-(void)dealloc;
-(short)clusterCount;
-(void)setUpdateCount:(long long)arg1 ;
-(NSDate *)creationTime;
-(long long)updateCount;
-(long long)matchCount;
-(void)setMatchCount:(long long)arg1 ;
-(void)setCreationTime:(NSDate *)arg1 ;
@end
