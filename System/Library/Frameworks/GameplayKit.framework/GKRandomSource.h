/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/GKRandom.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GKRandomSource : NSObject <GKRandom, NSSecureCoding, NSCopying>
+(BOOL)supportsSecureCoding;
+(id)sharedRandom;
+(id)systemRandom;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)nextInt;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(float)nextUniform;
-(BOOL)nextBool;
-(id)arrayByShufflingObjectsInArray:(id)arg1 ;
@end

