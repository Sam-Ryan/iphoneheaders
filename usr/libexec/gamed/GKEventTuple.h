/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:13 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GKEventTuple : NSObject {

	unsigned long long _eventType;
	id _context;

}

@property (assign,nonatomic) unsigned long long eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy) id context;                                  //@synthesize context=_context - In the implementation block
-(void)dealloc;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)setEventType:(unsigned long long)arg1 ;
-(unsigned long long)eventType;
@end
