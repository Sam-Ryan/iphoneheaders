/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPointerArray, NSString;

@interface CUState : NSObject {

	/*^block*/id _eventHandler;
	unsigned long long _index;
	NSPointerArray* _lcaMap;
	NSString* _name;
	CUState* _parent;

}

@property (nonatomic,copy) id eventHandler;                       //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)name;
-(void)invalidate;
-(void)setEventHandler:(id)arg1 ;
-(id)initWithName:(id)arg1 parent:(id)arg2 ;
-(id)eventHandler;
@end

