/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DTexturesMaterial.h>

@interface TSCH3DEnvironmentMaterial : TSCH3DTexturesMaterial {

	BOOL _decalMode;

}

@property (assign,nonatomic) BOOL decalMode;              //@synthesize decalMode=_decalMode - In the implementation block
+(id)instanceWithArchive:(const Chart3DEnvironmentMaterialArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(Chart3DEnvironmentMaterialArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DEnvironmentMaterialArchive*)arg1 unarchiver:(id)arg2 ;
-(void)setDecalMode:(BOOL)arg1 ;
-(BOOL)decalMode;
-(MaterialShaderVariables)defaultShaderVariables;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

