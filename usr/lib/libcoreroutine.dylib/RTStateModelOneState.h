/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, RTStateDepiction, NSMutableDictionary;

@interface RTStateModelOneState : NSObject <NSSecureCoding> {

	NSUUID* _uniqueId;
	RTStateDepiction* _stateDepiction;
	NSMutableDictionary* _stateTransitions;

}

@property (nonatomic,retain) NSUUID * uniqueId;                                   //@synthesize uniqueId=_uniqueId - In the implementation block
@property (nonatomic,retain) RTStateDepiction * stateDepiction;                   //@synthesize stateDepiction=_stateDepiction - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stateTransitions;              //@synthesize stateTransitions=_stateTransitions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(NSUUID *)uniqueId;
-(void)setStateTransitions:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)stateTransitions;
-(void)setUniqueId:(NSUUID *)arg1 ;
-(void)setStateDepiction:(RTStateDepiction *)arg1 ;
-(RTStateDepiction *)stateDepiction;
@end
