/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CAMediaTimingFunction : NSObject <NSCoding> {

	CAMediaTimingFunctionPrivate* _priv;

}
+(id)sigmoidFunction;
+(id)_kbTimingFunction;
+(id)uiFunctionWithControlPoints:(const CGPoint*)arg1 ;
+(void)CAMLParserEndElement:(id)arg1 content:(id)arg2 ;
+(id)functionWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4 ;
+(id)functionWithName:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLType;
-(float)_solveForInput:(float)arg1 ;
-(void)_getPoints:(double*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4 ;
-(void)getControlPointAtIndex:(unsigned long long)arg1 values:(float)arg2 ;
@end

