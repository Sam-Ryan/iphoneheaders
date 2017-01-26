/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierMat4 : TSDGLShaderQualifier {

	CATransform3D _transform3D;
	CATransform3D _proposedTransform3D;

}

@property (nonatomic,readonly) CATransform3D transform3D;                    //@synthesize transform3D=_transform3D - In the implementation block
@property (assign,nonatomic) CATransform3D proposedTransform3D;              //@synthesize proposedTransform3D=_proposedTransform3D - In the implementation block
-(void)setGLUniformWithShader:(id)arg1 ;
-(id)initWithTransform3D:(CATransform3D)arg1 ;
-(void)setProposedTransform3D:(CATransform3D)arg1 ;
-(CATransform3D)proposedTransform3D;
-(id)description;
-(CATransform3D)transform3D;
@end

