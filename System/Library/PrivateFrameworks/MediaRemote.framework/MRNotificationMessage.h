/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSMutableArray;

@interface MRNotificationMessage : MRProtocolMessage

@property (nonatomic,readonly) NSMutableArray * notifications; 
-(unsigned long long)type;
-(id)initWithNotification:(id)arg1 ;
-(NSMutableArray *)notifications;
-(id)initWithNotifications:(id)arg1 ;
@end

