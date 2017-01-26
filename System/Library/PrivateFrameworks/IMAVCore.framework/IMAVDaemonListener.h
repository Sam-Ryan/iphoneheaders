/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface IMAVDaemonListener : NSObject {

	NSMutableArray* _handlers;
	BOOL _setupComplete;
	BOOL _postedSetupComplete;

}

@property (nonatomic,readonly) BOOL isSetupComplete;              //@synthesize setupComplete=_setupComplete - In the implementation block
-(void)dealloc;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setupComplete:(BOOL)arg1 info:(id)arg2 ;
-(void)_noteDisconnected;
-(void)addHandler:(id)arg1 ;
-(void)removeHandler:(id)arg1 ;
-(BOOL)isSetupComplete;
@end

