/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:21:22 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UACornerActionItem.h>

@class UAUserActivityClientProcess;

@interface UALocalCornerActionItem : UACornerActionItem {

	UAUserActivityClientProcess* _originatingClient;

}
-(id)initWithUUID:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3 originatingClient:(id)arg4 ;
-(id)originatingClient;
-(void)setOriginatingClient:(id)arg1 ;
@end

