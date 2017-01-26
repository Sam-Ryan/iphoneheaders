/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSInvocation;

@interface RTInvocationRecord : NSObject {

	NSUUID* _identifier;
	NSInvocation* _invocation;
	/*^block*/id _failureBlock;

}

@property (nonatomic,retain) NSUUID * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSInvocation * invocation;              //@synthesize invocation=_invocation - In the implementation block
@property (nonatomic,copy) id failureBlock;                          //@synthesize failureBlock=_failureBlock - In the implementation block
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setInvocation:(NSInvocation *)arg1 ;
-(NSInvocation *)invocation;
-(id)initWithInvocation:(id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(id)failureBlock;
-(void)setFailureBlock:(id)arg1 ;
@end
