/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PCInterfaceUsabilityMonitorProtocol <PCInterfaceMonitorProtocol>
@property (nonatomic,readonly) BOOL isRadioHot; 
@property (assign,nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate; 
@required
-(void)setTrackedTimeInterval:(double)arg1;
-(void)setThresholdOffTransitionCount:(unsigned long long)arg1;
-(void)setTrackUsability:(BOOL)arg1;
-(BOOL)isRadioHot;
-(void)setDelegate:(id)arg1;
-(id<PCInterfaceUsabilityMonitorDelegate>)delegate;

@end

