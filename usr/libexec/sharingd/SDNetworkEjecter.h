/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:29 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SDNetworkEjecterDelegate;
#import <sharingd/sharingd-Structs.h>
@class NSNumber, NSString;

@interface SDNetworkEjecter : NSObject {

	SFNodeRef _node;
	int _mountedCount;
	int _ejectedCount;
	NSNumber* _flags;
	NSString* _protocol;
	id<SDNetworkEjecterDelegate> _delegate;

}

@property (copy) NSNumber * flags;                                     //@synthesize flags=_flags - In the implementation block
@property (copy) NSString * protocol;                                  //@synthesize protocol=_protocol - In the implementation block
@property (__weak) id<SDNetworkEjecterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)ejectMountPoints:(id)arg1 useAssistant:(BOOL)arg2 ;
-(void)notifyClientAboutEject:(int)arg1 ;
-(void)setDelegate:(id<SDNetworkEjecterDelegate>)arg1 ;
-(void)dealloc;
-(id<SDNetworkEjecterDelegate>)delegate;
-(void)stop;
-(int)start;
-(id)initWithNode:(SFNodeRef)arg1 ;
-(NSString *)protocol;
-(void)setProtocol:(NSString *)arg1 ;
-(void)eject;
-(void)setFlags:(NSNumber *)arg1 ;
-(NSNumber *)flags;
@end

