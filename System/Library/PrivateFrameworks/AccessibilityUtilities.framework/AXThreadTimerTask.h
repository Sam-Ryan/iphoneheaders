/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXThreadTimerTask : NSObject {

	BOOL cancel;
	BOOL finished;
	BOOL active;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                                       //@synthesize block=_block - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancel; 
@property (assign,getter=isFinished,nonatomic) BOOL finished; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
-(void)dealloc;
-(BOOL)isActive;
-(BOOL)isCancelled;
-(void)setActive:(BOOL)arg1 ;
-(void)run;
-(BOOL)isFinished;
-(void)setFinished:(BOOL)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)runAfterDelay:(float)arg1 ;
-(void)setCancel:(BOOL)arg1 ;
@end

