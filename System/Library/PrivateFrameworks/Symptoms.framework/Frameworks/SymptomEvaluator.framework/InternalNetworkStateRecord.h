/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface InternalNetworkStateRecord : NSObject {

	long long _stateAge;
	long long _stateDayOfWeek;
	long long _stateSlotId;
	NSString* _stateNetworkId;
	long long _stateNetworkState;
	long long _stateDurationSeconds;
	long long _stateSlotLength;

}

@property (readonly) long long stateAge;                          //@synthesize stateAge=_stateAge - In the implementation block
@property (readonly) long long stateDayOfWeek;                    //@synthesize stateDayOfWeek=_stateDayOfWeek - In the implementation block
@property (readonly) long long stateSlotId;                       //@synthesize stateSlotId=_stateSlotId - In the implementation block
@property (readonly) NSString * stateNetworkId;                   //@synthesize stateNetworkId=_stateNetworkId - In the implementation block
@property (readonly) long long stateNetworkState;                 //@synthesize stateNetworkState=_stateNetworkState - In the implementation block
@property (readonly) long long stateDurationSeconds;              //@synthesize stateDurationSeconds=_stateDurationSeconds - In the implementation block
@property (readonly) long long stateSlotLength;                   //@synthesize stateSlotLength=_stateSlotLength - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)_isEqualToNetworkStateRecord:(id)arg1 ;
-(long long)stateAge;
-(long long)stateDayOfWeek;
-(long long)stateSlotId;
-(long long)stateSlotLength;
-(NSString *)stateNetworkId;
-(long long)stateNetworkState;
-(long long)stateDurationSeconds;
-(id)initWithAge:(long long)arg1 dayOfWeek:(long long)arg2 slotId:(long long)arg3 networkId:(id)arg4 networkState:(long long)arg5 stateDurationSeconds:(long long)arg6 stateSlotLength:(long long)arg7 ;
-(void)mergeState:(id)arg1 ;
@end

