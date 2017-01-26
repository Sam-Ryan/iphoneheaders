/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:10 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/findmydeviced
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface FMDConcurrentMutableDictionary : NSObject {

	NSMutableDictionary* _underlyingDictionary;
	NSObject*<OS_dispatch_queue> _dictModQueue;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,retain) NSMutableDictionary * underlyingDictionary;              //@synthesize underlyingDictionary=_underlyingDictionary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dictModQueue;               //@synthesize dictModQueue=_dictModQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)dictModQueue;
-(void)setDictModQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)count;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)underlyingDictionary;
-(id)nativeDictionary;
-(void)setUnderlyingDictionary:(NSMutableDictionary *)arg1 ;
@end

