/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDHint.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface TSDDefaultHint : NSObject <TSDHint, NSCoding> {

	CGRect mBounds;
	unsigned long long mEdges;

}

@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) unsigned long long edges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)archivedHintClass;
-(id)initWithBounds:(CGRect)arg1 edges:(unsigned long long)arg2 ;
-(BOOL)isLastPartitionHorizontally:(BOOL)arg1 ;
-(BOOL)overlapsWithSelection:(id)arg1 ;
-(void)offsetByDelta:(int)arg1 ;
-(id)firstChildHint;
-(id)lastChildHint;
-(id)copyForArchiving;
-(CGRect)bounds;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)edges;
@end

