/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:26 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/networkd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NETLedBellyClientDelegate <NSObject>
@property (readonly) int pid; 
@property (readonly) unsigned long long cid; 
@property (nonatomic,readonly) const char* name; 
@required
-(unsigned long long)cid;
-(void)ledBellyStateChanged:(id)arg1;
-(const char*)name;
-(int)pid;

@end
