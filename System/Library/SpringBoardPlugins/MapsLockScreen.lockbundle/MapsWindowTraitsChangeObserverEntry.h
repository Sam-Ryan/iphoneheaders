/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MapsWindowTraitsChangeObserverEntry : NSObject {

	/*^block*/id _willChangeHandler;
	/*^block*/id _changeHandler;
	/*^block*/id _didChangeHandler;

}

@property (nonatomic,copy) id willChangeHandler;              //@synthesize willChangeHandler=_willChangeHandler - In the implementation block
@property (nonatomic,copy) id changeHandler;                  //@synthesize changeHandler=_changeHandler - In the implementation block
@property (nonatomic,copy) id didChangeHandler;               //@synthesize didChangeHandler=_didChangeHandler - In the implementation block
-(id)didChangeHandler;
-(void)setDidChangeHandler:(id)arg1 ;
-(void)setWillChangeHandler:(id)arg1 ;
-(id)willChangeHandler;
-(void)setChangeHandler:(id)arg1 ;
-(id)changeHandler;
@end

