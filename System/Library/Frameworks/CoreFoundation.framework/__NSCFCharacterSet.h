/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSMutableCharacterSet.h>

@interface __NSCFCharacterSet : NSMutableCharacterSet
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)bitmapRepresentation;
-(BOOL)longCharacterIsMember:(unsigned)arg1 ;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
-(void)removeCharactersInRange:(NSRange)arg1 ;
-(void)makeCharacterSetCompact;
-(void)makeCharacterSetFast;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(BOOL)_isDeallocating;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(void)formUnionWithCharacterSet:(id)arg1 ;
-(void)addCharactersInString:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)_tryRetain;
-(id)invertedSet;
-(void)removeCharactersInString:(id)arg1 ;
-(void)addCharactersInRange:(NSRange)arg1 ;
-(void)formIntersectionWithCharacterSet:(id)arg1 ;
-(void)finalize;
-(void)invert;
@end

