/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <Pegasus/__PGView.h>

@class NSString;

@interface PGBackdropView : __PGView

@property (nonatomic,copy) NSString * groupName; 
@property (assign,nonatomic) double gaussianBlurRadius; 
@property (assign,nonatomic) double saturationAmount; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(void)setGaussianBlurRadius:(double)arg1 ;
-(void)setSaturationAmount:(double)arg1 ;
-(double)gaussianBlurRadius;
-(double)saturationAmount;
@end

