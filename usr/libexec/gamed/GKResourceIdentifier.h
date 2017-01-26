/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:11 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/gamed-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_semaphore;
@class NSArray, NSObject, NSString;

@interface GKResourceIdentifier : NSObject <NSCopying> {

	NSArray* _keys;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSString* _queueName;

}

@property (nonatomic,retain) NSArray * keys;                                            //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,readonly) NSString * queueName;                                    //@synthesize queueName=_queueName - In the implementation block
+(id)resourceIdentifierForKeys:(id)arg1 ;
+(id)resourceIdentifiersForBagKeys:(id)arg1 ;
-(NSString *)queueName;
-(BOOL)wait:(double)arg1 ;
-(id)initWithKeys:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)keys;
-(void)signal;
-(void)setKeys:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
@end
