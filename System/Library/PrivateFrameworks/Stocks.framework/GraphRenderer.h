/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface GraphRenderer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _cancelled;

}
+(void)clearSharedRenderer;
+(id)sharedRenderer;
-(id)init;
-(void)performRenderOperation:(id)arg1 ;
@end

