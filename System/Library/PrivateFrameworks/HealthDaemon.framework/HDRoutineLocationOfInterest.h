/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSArray;

@interface HDRoutineLocationOfInterest : NSObject {

	double _latitude;
	double _longitude;
	double _uncertainty;
	double _confidence;
	NSUUID* _identifier;
	long long _type;
	NSArray* _visits;

}

@property (assign,nonatomic) double latitude;                  //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                 //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) double uncertainty;               //@synthesize uncertainty=_uncertainty - In the implementation block
@property (assign,nonatomic) double confidence;                //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * visits;                 //@synthesize visits=_visits - In the implementation block
-(id)initWithCodable:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(double)confidence;
-(void)setConfidence:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(double)latitude;
-(double)longitude;
-(id)initWithLocationOfInterest:(id)arg1 ;
-(double)uncertainty;
-(void)setUncertainty:(double)arg1 ;
-(NSArray *)visits;
-(void)setVisits:(NSArray *)arg1 ;
@end

