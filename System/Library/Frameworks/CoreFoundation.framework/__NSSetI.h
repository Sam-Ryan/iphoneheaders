/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSSet.h>

@interface __NSSetI : NSSet {

	unsigned _used : 58;
	unsigned _szidx : 6;

}
+(id)__new:(const id*)arg1 :(unsigned long long)arg2 :(BOOL)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(double)clumpingFactor;
-(double)clumpingInterestingThreshold;
-(void)getObjects:(id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS21*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)objectEnumerator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)member:(id)arg1 ;
-(void)finalize;
@end

