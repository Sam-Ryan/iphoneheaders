/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAStateElement.h>

@class NSString, CAAnimation;

@interface CAStateAddAnimation : CAStateElement {

	NSString* _key;
	CAAnimation* _animation;

}

@property (nonatomic,copy) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) CAAnimation * animation;              //@synthesize animation=_animation - In the implementation block
-(BOOL)matches:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(NSString *)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyPath;
-(CAAnimation *)animation;
-(void)setAnimation:(CAAnimation *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)apply:(id)arg1 ;
@end

