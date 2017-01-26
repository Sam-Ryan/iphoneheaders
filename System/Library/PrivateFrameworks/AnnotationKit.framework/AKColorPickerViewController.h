/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/AKTextAttributesUserInterfaceItem.h>

@class UIColor, AKController, AKColorPaletteView, NSString;

@interface AKColorPickerViewController : UIViewController <AKTextAttributesUserInterfaceItem> {

	UIColor* _color;
	long long _colorAttributeTag;
	AKController* _controller;
	AKColorPaletteView* _colorPalette;
	long long _tag;

}

@property (nonatomic,retain) UIColor * color;                                //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long colorAttributeTag;                    //@synthesize colorAttributeTag=_colorAttributeTag - In the implementation block
@property (assign,nonatomic,__weak) AKController * controller;               //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) AKColorPaletteView * colorPalette;              //@synthesize colorPalette=_colorPalette - In the implementation block
@property (assign,nonatomic) long long tag;                                  //@synthesize tag=_tag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(AKController *)controller;
-(void)setController:(AKController *)arg1 ;
-(void)valueChanged:(id)arg1 ;
-(long long)colorAttributeTag;
-(id)convertTextAttributes:(id)arg1 ;
-(void)syncTextAttributesToUI:(id)arg1 ;
-(void)setColorAttributeTag:(long long)arg1 ;
-(id)initWithController:(id)arg1 ;
-(AKColorPaletteView *)colorPalette;
-(void)setColorPalette:(AKColorPaletteView *)arg1 ;
@end

