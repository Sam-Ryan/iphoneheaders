/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCProcessAssertion.h>

@interface MCPowerAssertion : MCProcessAssertion {

	BOOL _parked;

}

@property (getter=isParked,nonatomic,readonly) BOOL parked;              //@synthesize parked=_parked - In the implementation block
-(void)unpark;
-(void)park;
-(BOOL)isParked;
-(void)dealloc;
-(id)init;
@end
