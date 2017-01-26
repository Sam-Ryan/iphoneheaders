/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUISettingDescription.h>
#import <libobjc.A.dylib/SKUIControllableSettingDescription.h>

@class SKUISettingsGroupController, NSMutableDictionary, NSString;

@interface SKUIFieldSettingDescription : SKUISettingDescription <SKUIControllableSettingDescription> {

	SKUISettingsGroupController* _controller;
	long long _fieldType;
	NSMutableDictionary* _fieldValues;

}

@property (nonatomic,readonly) long long fieldType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) SKUISettingsGroupController * controller;              //@synthesize controller=_controller - In the implementation block
+(Class)_viewClassForSettingDescription:(id)arg1 ;
+(long long)_fieldTypeFromElement:(id)arg1 ;
+(id)_inputViewElementFromElement:(id)arg1 ;
-(BOOL)allowsSelection;
-(SKUISettingsGroupController *)controller;
-(void)setController:(SKUISettingsGroupController *)arg1 ;
-(id)initWithViewElement:(id)arg1 parent:(id)arg2 ;
-(void)handleSelectionOnCompletion:(/*^block*/id)arg1 ;
-(void)setFieldValue:(id)arg1 forKey:(id)arg2 ;
-(id)fieldValueForKey:(id)arg1 ;
-(void)_dispatchEventOfType:(unsigned long long)arg1 extraInfo:(id)arg2 ;
-(long long)fieldType;
@end

