/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/OKActionTransitionExports.h>

@interface OKActionTransition : OKAction <NSSecureCoding, OKActionTransitionExports> {

	float _progress;
	float _velocity;
	unsigned long long _target;

}

@property (nonatomic,readonly) unsigned long long target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) float progress;                         //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) float velocity;                         //@synthesize velocity=_velocity - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)transitionWithState:(unsigned long long)arg1 target:(unsigned long long)arg2 progress:(float)arg3 velocity:(float)arg4 context:(id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(unsigned long long)target;
-(float)velocity;
-(float)progress;
@end

