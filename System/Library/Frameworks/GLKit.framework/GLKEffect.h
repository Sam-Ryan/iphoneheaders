/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GLKit/GLKit-Structs.h>
@class NSMutableArray, NSArray, NSString, NSMutableDictionary, GLKShaderBlockNode;

@interface GLKEffect : NSObject {

	NSMutableArray* _properties;
	unsigned char _colorMaterialEnabled;
	unsigned char _lightModelTwoSided;
	GLKVector4 _lightModelAmbientColor;
	unsigned char _texturingEnabled;
	NSArray* _textureOrder;
	NSString* _label;
	unsigned char _perVertexLightingEnabled;
	unsigned char _perPixelLightingEnabled;
	unsigned char _masksInitialized;
	BOOL _textureOrderStale;
	unsigned _numLights;
	unsigned _numTextures;
	int _aColorLoc;
	unsigned _vshName;
	unsigned _fshName;
	unsigned _programName;
	unsigned _numVshStrings;
	unsigned _numFshStrings;
	int _lightModelAmbientColorLoc;
	int _baseLightingColorLoc;
	NSMutableDictionary* _programHash;
	float* _materialAmbientColor;
	float* _materialDiffuseColor;
	id* _effectShaderArray;
	NSMutableArray* _lightProperties;
	GLKShaderBlockNode* _vshRootNode;
	GLKShaderBlockNode* _fshRootNode;
	char** _vshStrings;
	char** _fshStrings;
	unsigned long long _dirtyUniforms;
	GLKBigInt_s* _fshMask;
	GLKBigInt_s* _vshMask;
	GLKVector4 _baseLightingColor;
	GLKBigInt_s _prevFshMask;
	GLKBigInt_s _prevVshMask;

}

@property (nonatomic,retain) NSMutableArray * properties;                         //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) unsigned char colorMaterialEnabled;                  //@synthesize colorMaterialEnabled=_colorMaterialEnabled - In the implementation block
@property (assign,nonatomic) unsigned char lightModelTwoSided;                    //@synthesize lightModelTwoSided=_lightModelTwoSided - In the implementation block
@property (assign,nonatomic) _GLKVector4 lightModelAmbientColor;                  //@synthesize lightModelAmbientColor=_lightModelAmbientColor - In the implementation block
@property (assign,nonatomic) unsigned char texturingEnabled;                      //@synthesize texturingEnabled=_texturingEnabled - In the implementation block
@property (assign,nonatomic) unsigned char perVertexLightingEnabled;              //@synthesize perVertexLightingEnabled=_perVertexLightingEnabled - In the implementation block
@property (assign,nonatomic) unsigned char perPixelLightingEnabled;               //@synthesize perPixelLightingEnabled=_perPixelLightingEnabled - In the implementation block
@property (nonatomic,copy) NSString * label;                                      //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSArray * textureOrder;                                //@synthesize textureOrder=_textureOrder - In the implementation block
@property (assign,nonatomic) unsigned vshName;                                    //@synthesize vshName=_vshName - In the implementation block
@property (assign,nonatomic) unsigned fshName;                                    //@synthesize fshName=_fshName - In the implementation block
@property (assign,nonatomic) unsigned numLights;                                  //@synthesize numLights=_numLights - In the implementation block
@property (assign,nonatomic) unsigned numTextures;                                //@synthesize numTextures=_numTextures - In the implementation block
@property (assign,nonatomic) unsigned programName;                                //@synthesize programName=_programName - In the implementation block
@property (nonatomic,readonly) GLKShaderBlockNode * vshRootNode;                  //@synthesize vshRootNode=_vshRootNode - In the implementation block
@property (nonatomic,readonly) GLKShaderBlockNode * fshRootNode;                  //@synthesize fshRootNode=_fshRootNode - In the implementation block
@property (assign,nonatomic) char** vshStrings;                                   //@synthesize vshStrings=_vshStrings - In the implementation block
@property (assign,nonatomic) char** fshStrings;                                   //@synthesize fshStrings=_fshStrings - In the implementation block
@property (assign,nonatomic) unsigned numVshStrings;                              //@synthesize numVshStrings=_numVshStrings - In the implementation block
@property (assign,nonatomic) unsigned numFshStrings;                              //@synthesize numFshStrings=_numFshStrings - In the implementation block
@property (assign,nonatomic) id* effectShaderArray;                               //@synthesize effectShaderArray=_effectShaderArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * lightProperties;                    //@synthesize lightProperties=_lightProperties - In the implementation block
@property (assign,nonatomic) unsigned char masksInitialized;                      //@synthesize masksInitialized=_masksInitialized - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * programHash;                 //@synthesize programHash=_programHash - In the implementation block
@property (assign,nonatomic) int lightModelAmbientColorLoc;                       //@synthesize lightModelAmbientColorLoc=_lightModelAmbientColorLoc - In the implementation block
@property (assign,nonatomic) int baseLightingColorLoc;                            //@synthesize baseLightingColorLoc=_baseLightingColorLoc - In the implementation block
@property (assign,nonatomic) int aColorLoc;                                       //@synthesize aColorLoc=_aColorLoc - In the implementation block
@property (assign,nonatomic) _GLKVector4 baseLightingColor;                       //@synthesize baseLightingColor=_baseLightingColor - In the implementation block
@property (nonatomic,readonly) float* materialAmbientColor;                       //@synthesize materialAmbientColor=_materialAmbientColor - In the implementation block
@property (nonatomic,readonly) float* materialDiffuseColor;                       //@synthesize materialDiffuseColor=_materialDiffuseColor - In the implementation block
@property (assign,nonatomic) GLKBigInt_s* vshMask;                                //@synthesize vshMask=_vshMask - In the implementation block
@property (assign,nonatomic) GLKBigInt_s* fshMask;                                //@synthesize fshMask=_fshMask - In the implementation block
@property (assign,nonatomic) GLKBigInt_s prevVshMask;                             //@synthesize prevVshMask=_prevVshMask - In the implementation block
@property (assign,nonatomic) GLKBigInt_s prevFshMask;                             //@synthesize prevFshMask=_prevFshMask - In the implementation block
@property (assign,nonatomic) unsigned long long dirtyUniforms;                    //@synthesize dirtyUniforms=_dirtyUniforms - In the implementation block
@property (assign,nonatomic) BOOL textureOrderStale;                              //@synthesize textureOrderStale=_textureOrderStale - In the implementation block
+(void)initialize;
+(void)initializeStaticMasks;
+(BOOL)parseXMLFile:(id)arg1 rootNode:(id)arg2 ;
+(void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2 ;
+(void)unrollLoopNodesForStaticTreeWithRoot:(id)arg1 ;
+(id)programInfoLogForName:(unsigned)arg1 effectLabel:(id)arg2 msg:(const char*)arg3 ;
+(id)shaderInfoLogForName:(unsigned)arg1 effectLabel:(id)arg2 msg:(const char*)arg3 ;
-(void)bind;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSMutableArray *)properties;
-(void)setProperties:(NSMutableArray *)arg1 ;
-(void)setLightModelAmbientColor:(_GLKVector4)arg1 ;
-(void)setColorMaterialEnabled:(unsigned char)arg1 ;
-(void)setLightModelTwoSided:(unsigned char)arg1 ;
-(id)initWithPropertyArray:(id)arg1 ;
-(void)setTextureOrder:(NSArray *)arg1 ;
-(unsigned char)perVertexLightingEnabled;
-(unsigned char)perPixelLightingEnabled;
-(unsigned char)colorMaterialEnabled;
-(unsigned char)lightModelTwoSided;
-(_GLKVector4)lightModelAmbientColor;
-(NSArray *)textureOrder;
-(unsigned)programName;
-(void)setProgramName:(unsigned)arg1 ;
-(void)dirtyAllUniforms;
-(void)setPerPixelLightingEnabled:(unsigned char)arg1 ;
-(void)setPerVertexLightingEnabled:(unsigned char)arg1 ;
-(void)setTexturingEnabled:(unsigned char)arg1 ;
-(void)addTransformProperty;
-(void)setDirtyUniforms:(unsigned long long)arg1 ;
-(unsigned long long)dirtyUniforms;
-(BOOL)includeVshShaderTextForRootNode:(id)arg1 ;
-(void)updateVshStringsWithRoot:(id)arg1 enabled:(GLKBigInt_s)arg2 ;
-(BOOL)includeFshShaderTextForRootNode:(id)arg1 ;
-(void)updateFshStringsWithRoot:(id)arg1 enabled:(GLKBigInt_s)arg2 ;
-(void)initializeMasks;
-(void)setShaderBindings;
-(BOOL)useTexCoordAttrib;
-(BOOL)useColorAttrib;
-(void)setTextureIndices;
-(void)createAndUseProgramWithShadingHash:(id)arg1 ;
-(void)setMasksInitialized:(unsigned char)arg1 ;
-(BOOL)includeShaderTextForRootNode:(id)arg1 ;
-(GLKBigInt_s*)vshMasks;
-(GLKBigInt_s*)fshMasks;
-(unsigned)vshMaskCt;
-(unsigned)fshMaskCt;
-(char**)vshMaskStr;
-(char**)fshMaskStr;
-(NSMutableDictionary *)programHash;
-(unsigned)numLights;
-(void)setNumLights:(unsigned)arg1 ;
-(unsigned)numTextures;
-(void)setNumTextures:(unsigned)arg1 ;
-(unsigned char)texturingEnabled;
-(float*)materialAmbientColor;
-(float*)materialDiffuseColor;
-(_GLKVector4)baseLightingColor;
-(void)setBaseLightingColor:(_GLKVector4)arg1 ;
-(unsigned char)masksInitialized;
-(int)aColorLoc;
-(void)setAColorLoc:(int)arg1 ;
-(id*)effectShaderArray;
-(void)setEffectShaderArray:(id*)arg1 ;
-(NSMutableArray *)lightProperties;
-(void)setLightProperties:(NSMutableArray *)arg1 ;
-(GLKShaderBlockNode *)vshRootNode;
-(GLKShaderBlockNode *)fshRootNode;
-(unsigned)vshName;
-(void)setVshName:(unsigned)arg1 ;
-(unsigned)fshName;
-(void)setFshName:(unsigned)arg1 ;
-(char**)vshStrings;
-(void)setVshStrings:(char**)arg1 ;
-(char**)fshStrings;
-(void)setFshStrings:(char**)arg1 ;
-(unsigned)numVshStrings;
-(void)setNumVshStrings:(unsigned)arg1 ;
-(unsigned)numFshStrings;
-(void)setNumFshStrings:(unsigned)arg1 ;
-(BOOL)textureOrderStale;
-(void)setTextureOrderStale:(BOOL)arg1 ;
-(int)lightModelAmbientColorLoc;
-(void)setLightModelAmbientColorLoc:(int)arg1 ;
-(int)baseLightingColorLoc;
-(void)setBaseLightingColorLoc:(int)arg1 ;
-(GLKBigInt_s*)fshMask;
-(void)setFshMask:(GLKBigInt_s*)arg1 ;
-(GLKBigInt_s*)vshMask;
-(void)setVshMask:(GLKBigInt_s*)arg1 ;
-(GLKBigInt_s)prevFshMask;
-(void)setPrevFshMask:(GLKBigInt_s)arg1 ;
-(GLKBigInt_s)prevVshMask;
-(void)setPrevVshMask:(GLKBigInt_s)arg1 ;
@end

