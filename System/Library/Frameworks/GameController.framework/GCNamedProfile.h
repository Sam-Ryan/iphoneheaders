/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol GCNamedProfile <NSObject>
@property (readonly) NSString * name; 
@optional
-(unsigned)sampleRate;
-(void)appWillResignActive;
-(void)appDidBecomeActive;
-(void)set_motion:(id)arg1;

@required
-(NSString *)name;
-(void)setController:(id)arg1;
-(void)setPlayerIndex:(long long)arg1;
-(/*^block*/id)valueChangedHandler;
-(id)inputForElement:(IOHIDElementRef)arg1;
-(void)handleReport:(unsigned)arg1 data:(id)arg2;
-(id)initWithController:(id)arg1;

@end

