/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GLKit/GLKEffectProperty.h>

@interface GLKEffectPropertyTransform : GLKEffectProperty {

	GLKMatrix4 _modelviewMatrix;
	GLKMatrix4 _projectionMatrix;
	GLKMatrix3 _normalMatrix;
	int _mvpMatrixLoc;
	int _modelviewMatrixLoc;
	int _projectionMatrixLoc;
	int _normalMatrixLoc;
	int _invModelviewMatrixLoc;
	GLKMatrix4 _invModelviewMatrix;
	GLKMatrix4 _mvpMatrix;

}

@property (assign,nonatomic) _GLKMatrix4 modelviewMatrix;                 //@synthesize modelviewMatrix=_modelviewMatrix - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 projectionMatrix;                //@synthesize projectionMatrix=_projectionMatrix - In the implementation block
@property (nonatomic,readonly) _GLKMatrix3 normalMatrix;                  //@synthesize normalMatrix=_normalMatrix - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 mvpMatrix;                       //@synthesize mvpMatrix=_mvpMatrix - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 invModelviewMatrix;              //@synthesize invModelviewMatrix=_invModelviewMatrix - In the implementation block
@property (assign,nonatomic) int projectionMatrixLoc;                     //@synthesize projectionMatrixLoc=_projectionMatrixLoc - In the implementation block
@property (assign,nonatomic) int modelviewMatrixLoc;                      //@synthesize modelviewMatrixLoc=_modelviewMatrixLoc - In the implementation block
@property (assign,nonatomic) int mvpMatrixLoc;                            //@synthesize mvpMatrixLoc=_mvpMatrixLoc - In the implementation block
@property (assign,nonatomic) int normalMatrixLoc;                         //@synthesize normalMatrixLoc=_normalMatrixLoc - In the implementation block
@property (assign,nonatomic) int invModelviewMatrixLoc;                   //@synthesize invModelviewMatrixLoc=_invModelviewMatrixLoc - In the implementation block
+(void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2 ;
-(void)bind;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)dirtyAllUniforms;
-(void)setShaderBindings;
-(_GLKMatrix3)normalMatrix;
-(_GLKMatrix4)modelviewMatrix;
-(void)loadMatrix:(int)arg1 matrix:(_GLKMatrix4)arg2 ;
-(_GLKMatrix4)invModelviewMatrix;
-(_GLKMatrix4)mvpMatrix;
-(void)loadIdentity:(int)arg1 ;
-(void)setProjectionMatrix:(_GLKMatrix4)arg1 ;
-(void)setModelviewMatrix:(_GLKMatrix4)arg1 ;
-(void)setInvModelviewMatrix:(_GLKMatrix4)arg1 ;
-(void)setMvpMatrix:(_GLKMatrix4)arg1 ;
-(int)mvpMatrixLoc;
-(void)setMvpMatrixLoc:(int)arg1 ;
-(int)modelviewMatrixLoc;
-(void)setModelviewMatrixLoc:(int)arg1 ;
-(int)projectionMatrixLoc;
-(void)setProjectionMatrixLoc:(int)arg1 ;
-(int)normalMatrixLoc;
-(void)setNormalMatrixLoc:(int)arg1 ;
-(int)invModelviewMatrixLoc;
-(void)setInvModelviewMatrixLoc:(int)arg1 ;
-(_GLKMatrix4)projectionMatrix;
@end

