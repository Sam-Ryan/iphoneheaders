/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKMaterial.h>

@class NSURL, SCNNode, NSArray, OKWidgetNode;

@interface OKColladaFileMaterial : OKMaterial {

	NSURL* _url;
	SCNNode* _sceneLoaded;
	NSArray* _nodeNames;

}

@property (nonatomic,readonly) OKWidgetNode * parentNode; 
+(id)supportedSettings;
-(void)dealloc;
-(OKWidgetNode *)parentNode;
-(void)load;
-(id)settingUrl;
-(void)setSettingUrl:(id)arg1 ;
-(id)settingNodeNames;
-(void)setSettingNodeNames:(id)arg1 ;
-(void)unload;
@end
