/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSUPair, TSCH3DPyramidBlurFBOResource;

@interface TSCH3DPyramidLevelResources : NSObject {

	TSUPair* mResourcePair;

}

@property (nonatomic,readonly) TSCH3DPyramidBlurFBOResource * finalResource; 
@property (nonatomic,readonly) TSCH3DPyramidBlurFBOResource * temporaryResource; 
@property (nonatomic,readonly) tvec2<int> size; 
+(id)resourcesWithFBOSize:(tvec2<int>)arg1 ;
-(id)initWithFBOSize:(tvec2<int>)arg1 ;
-(TSCH3DPyramidBlurFBOResource *)temporaryResource;
-(tvec2<int>)size;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(TSCH3DPyramidBlurFBOResource *)finalResource;
@end

