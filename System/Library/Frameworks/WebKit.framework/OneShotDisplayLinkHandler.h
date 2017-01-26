/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class CADisplayLink;

@interface OneShotDisplayLinkHandler : NSObject {

	RemoteLayerTreeDrawingAreaProxy* _drawingAreaProxy;
	CADisplayLink* _displayLink;

}
-(void)dealloc;
-(void)invalidate;
-(void)schedule;
-(id)initWithDrawingAreaProxy:(RemoteLayerTreeDrawingAreaProxy*)arg1 ;
-(void)displayLinkFired:(id)arg1 ;
@end
