/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierPoint2D : TSDGLShaderQualifier {

	SCD_Struct_TS75 _GLPoint2DValue;
	SCD_Struct_TS75 _proposedGLPoint2DValue;

}

@property (getter=LPoint2DValue,nonatomic,readonly) SCD_Struct_TS75 GLPoint2DValue;              //@synthesize GLPoint2DValue=_GLPoint2DValue - In the implementation block
@property (assign,nonatomic) SCD_Struct_TS75 proposedGLPoint2DValue;                             //@synthesize proposedGLPoint2DValue=_proposedGLPoint2DValue - In the implementation block
-(void)setGLUniformWithShader:(id)arg1 ;
-(SCD_Struct_TS75)GLPoint2DValue;
-(void)setProposedGLPoint2DValue:(SCD_Struct_TS75)arg1 ;
-(SCD_Struct_TS75)proposedGLPoint2DValue;
-(id)description;
@end

