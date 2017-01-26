/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>

@class UIImage, NSData, NSString;

@interface PTSImageSettings : _UISettings <_UISettingsKeyObserver> {

	BOOL _unarchiving;
	UIImage* _image;
	NSData* _pngData;
	long long _imageOrientation;
	double _imageScale;

}

@property (retain) UIImage * image;                                 //@synthesize image=_image - In the implementation block
@property (retain) NSData * pngData;                                //@synthesize pngData=_pngData - In the implementation block
@property (assign) long long imageOrientation;                      //@synthesize imageOrientation=_imageOrientation - In the implementation block
@property (assign) double imageScale;                               //@synthesize imageScale=_imageScale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)imageOrientation;
-(UIImage *)image;
-(void)applyArchiveValue:(id)arg1 forKey:(id)arg2 ;
-(id)archiveValueForKey:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_updateImageData;
-(void)setImageScale:(double)arg1 ;
-(NSData *)pngData;
-(void)_updateImageProperties;
-(void)setPngData:(NSData *)arg1 ;
-(double)imageScale;
-(void)setImageOrientation:(long long)arg1 ;
@end

