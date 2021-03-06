/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface QLDisplayBundleLoader : NSObject {

	NSMutableDictionary* _displayBundlesById;

}
+(id)sharedLoader;
+(BOOL)URLIsAudioOnly:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)defaultWhitePointAdaptivityStyleForPreviewItem:(id)arg1 ;
-(void)_lookForDisplayBundles;
-(Class)loadDisplayBundle:(id)arg1 ;
-(Class)displayBundleClassForPreviewItem:(id)arg1 ;
-(id)copyDisplayBundleWithPreviewItem:(id)arg1 displayBundleIdentifier:(id)arg2 ;
@end

