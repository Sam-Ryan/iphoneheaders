/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebVideoFullscreenController : NSObject {

	RefPtr<WebVideoFullscreenControllerContext>* _context;
	RefPtr<WebCore::HTMLVideoElement>* _videoElement;

}
-(void)didFinishFullscreen:(WebVideoFullscreenControllerContext*)arg1 ;
-(void)requestHideAndExitFullscreen;
-(HTMLVideoElement*)videoElement;
-(void)setVideoElement:(HTMLVideoElement*)arg1 ;
-(void)enterFullscreen:(id)arg1 mode:(unsigned)arg2 ;
-(id)init;
-(void)exitFullscreen;
@end

