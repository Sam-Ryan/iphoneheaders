/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLSensorRecorderAccelMeta : NSObject <NSSecureCoding> {

	BOOL _movement;
	unsigned _offset;
	unsigned _dataSize;
	unsigned long long _identifier;
	double _startTime;
	unsigned long long _timestamp;
	unsigned long long _dataIdentifier;

}

@property (assign) unsigned long long identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (assign) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (assign) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) unsigned long long dataIdentifier;              //@synthesize dataIdentifier=_dataIdentifier - In the implementation block
@property (assign) unsigned offset;                                //@synthesize offset=_offset - In the implementation block
@property (assign) unsigned dataSize;                              //@synthesize dataSize=_dataSize - In the implementation block
@property (assign) BOOL movement;                                  //@synthesize movement=_movement - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)timestamp;
-(unsigned long long)identifier;
-(void)setStartTime:(double)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(void)setOffset:(unsigned)arg1 ;
-(unsigned)offset;
-(double)startTime;
-(unsigned long long)dataIdentifier;
-(unsigned)dataSize;
-(void)setDataIdentifier:(unsigned long long)arg1 ;
-(void)setDataSize:(unsigned)arg1 ;
-(BOOL)movement;
-(void)setMovement:(BOOL)arg1 ;
@end

