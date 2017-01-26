/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXEventCenterDelegate;
@class NSMutableArray;

@interface SXEventCenter : NSObject {

	id<SXEventCenterDelegate> _delegate;
	NSMutableArray* _enterBackgroundObservers;

}

@property (assign,nonatomic,__weak) id<SXEventCenterDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSMutableArray * enterBackgroundObservers;              //@synthesize enterBackgroundObservers=_enterBackgroundObservers - In the implementation block
-(void)addApplicationDidEnterBackgroundObserverBlock:(/*^block*/id)arg1 ;
-(void)submitEvent:(id)arg1 ;
-(NSMutableArray *)enterBackgroundObservers;
-(void)setDelegate:(id<SXEventCenterDelegate>)arg1 ;
-(id)init;
-(id<SXEventCenterDelegate>)delegate;
-(void)applicationDidEnterBackground;
@end
