/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKAssertion : NSObject {

	BOOL _invalidateWhenBackgrounded;
	NSString* _reason;
	unsigned long long _type;
	long long _state;
	/*^block*/id _invalidationHandler;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * reason;                          //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long state;                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL invalidateWhenBackgrounded;              //@synthesize invalidateWhenBackgrounded=_invalidateWhenBackgrounded - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                         //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
+(void)preheatConnection;
+(BOOL)assertionExistsOfType:(unsigned long long)arg1 ;
+(void)acquireAssertionOfType:(unsigned long long)arg1 withReason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)invalidate;
-(NSString *)identifier;
-(unsigned long long)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSString *)reason;
-(void)setInvalidateWhenBackgrounded:(BOOL)arg1 ;
-(id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 reason:(id)arg3 ;
-(BOOL)invalidateWhenBackgrounded;
@end

