/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface TIAssetsForInputMode : NSObject {

	NSMutableDictionary* _assetsByInputModeLevel;
	NSString* _inputMode;

}

@property (nonatomic,readonly) NSString * inputMode;              //@synthesize inputMode=_inputMode - In the implementation block
-(void)dealloc;
-(id)recursiveDescription;
-(NSString *)inputMode;
-(id)assetsForType:(id)arg1 ;
-(id)initWithInputMode:(id)arg1 ;
-(id)assetContentItemsForInputModeLevels:(id)arg1 contentType:(id)arg2 ;
-(void)removeAllInputModeLevels;
-(void)addAssetsForInputModeLevel:(id)arg1 ;
@end
