/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RTEventPair : NSObject {

	id _firstObject;
	id _secondObject;

}

@property (nonatomic,retain) id firstObject;               //@synthesize firstObject=_firstObject - In the implementation block
@property (nonatomic,retain) id secondObject;              //@synthesize secondObject=_secondObject - In the implementation block
-(id)init;
-(id)firstObject;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithFirstObject:(id)arg1 secondObject:(id)arg2 ;
-(id)secondObject;
-(BOOL)isEqualToEventPair:(id)arg1 ;
-(void)setFirstObject:(id)arg1 ;
-(void)setSecondObject:(id)arg1 ;
@end

