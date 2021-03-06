/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierPoint4D : TSDGLShaderQualifier {

	SCD_Struct_TS80 _GLPoint4DValue;
	SCD_Struct_TS80 _proposedGLPoint4DValue;

}

@property (getter=LPoint4DValue,nonatomic,readonly) SCD_Struct_TS80 GLPoint4DValue;              //@synthesize GLPoint4DValue=_GLPoint4DValue - In the implementation block
@property (assign,nonatomic) SCD_Struct_TS80 proposedGLPoint4DValue;                             //@synthesize proposedGLPoint4DValue=_proposedGLPoint4DValue - In the implementation block
-(void)setGLUniformWithShader:(id)arg1 ;
-(SCD_Struct_TS80)GLPoint4DValue;
-(void)setProposedGLPoint4DValue:(SCD_Struct_TS80)arg1 ;
-(SCD_Struct_TS80)proposedGLPoint4DValue;
-(id)description;
@end

