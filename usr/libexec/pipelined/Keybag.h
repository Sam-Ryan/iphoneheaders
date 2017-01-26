/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/pipelined
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, KeybagDelegate;
@class NSObject;

@interface Keybag : NSObject {

	BOOL _formattedWithProtection;
	int _keybagToken;
	NSObject*<OS_dispatch_queue> _q;
	id<KeybagDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<KeybagDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)afterFirstUserUnlock;
+(BOOL)canRunWhenLocked;
+(BOOL)isLocked;
+(BOOL)supportsMultiUser;
-(void)onQueueUpdateDelegate;
-(void)setDelegate:(id<KeybagDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<KeybagDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end

