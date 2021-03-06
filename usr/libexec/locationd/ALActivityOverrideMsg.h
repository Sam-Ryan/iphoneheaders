/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:18 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ALCLMotionActivity;

@interface ALActivityOverrideMsg : PBCodable <NSCopying> {

	ALCLMotionActivity* _activity;
	int _overrideAction;

}

@property (assign,nonatomic) int overrideAction;                         //@synthesize overrideAction=_overrideAction - In the implementation block
@property (nonatomic,retain) ALCLMotionActivity * activity;              //@synthesize activity=_activity - In the implementation block
-(int)overrideAction;
-(void)setOverrideAction:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(ALCLMotionActivity *)activity;
-(void)setActivity:(ALCLMotionActivity *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
@end

