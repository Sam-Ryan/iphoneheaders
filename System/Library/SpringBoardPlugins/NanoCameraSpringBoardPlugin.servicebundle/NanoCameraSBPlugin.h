/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/NanoCameraSpringBoardPlugin.servicebundle/NanoCameraSpringBoardPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBPluginBundleController.h>

@interface NanoCameraSBPlugin : NSObject <SBPluginBundleController> {

	int _noteHandle;

}
+(id)sharedInstance;
+(void)awakeFromBundle;
-(void)openCamera;
-(void)dealloc;
-(id)init;
@end

