/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIKernel.h>

@interface CIColorKernel : CIKernel

@property (assign,nonatomic) BOOL perservesAlpha; 
+(id)kernelWithString:(id)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 arguments:(id)arg2 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 ;
-(id)_initWithDict:(id)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 options:(id)arg4 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 cpuCallback:(/*^block*/id)arg3 colorManagement:(BOOL)arg4 andArguments:(id)arg5 ;
-(id)applyWithExtent:(CGRect)arg1 arguments:(id)arg2 options:(id)arg3 ;
-(BOOL)perservesAlpha;
-(void)setPerservesAlpha:(BOOL)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 andArguments:(id)arg2 ;
@end

