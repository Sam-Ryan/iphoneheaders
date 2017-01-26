/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface TIAssetsForInputModeLevel : NSObject {

	NSMutableDictionary* _assetsByType;
	long long _numberOfAssertions;
	NSString* _inputModeLevel;

}

@property (nonatomic,readonly) NSString * inputModeLevel;              //@synthesize inputModeLevel=_inputModeLevel - In the implementation block
-(void)dealloc;
-(BOOL)isEmpty;
-(id)recursiveDescription;
-(void)addAsset:(id)arg1 ;
-(BOOL)hasAssertions;
-(NSString *)inputModeLevel;
-(void)removeAssertion;
-(void)addAssertion;
-(id)assetContentItemsForInputModeLevels:(id)arg1 contentType:(id)arg2 ;
-(void)gatherStatistics:(id)arg1 ;
-(id)purgeableAssets;
-(BOOL)purgeAsset:(id)arg1 ;
-(id)initWithInputModeLevel:(id)arg1 ;
-(id)assetVersionsForType:(id)arg1 ;
-(id)assetForType:(id)arg1 ;
-(void)removeEmptyAssets;
@end

