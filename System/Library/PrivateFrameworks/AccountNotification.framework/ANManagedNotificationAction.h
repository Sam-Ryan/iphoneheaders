/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, ANManagedAccountNotification;

@interface ANManagedNotificationAction : NSManagedObject

@property (nonatomic,retain) NSString * url; 
@property (nonatomic,retain) id options; 
@property (nonatomic,retain) NSNumber * isInternal; 
@property (nonatomic,retain) ANManagedAccountNotification * notificationToActivate; 
@property (nonatomic,retain) ANManagedAccountNotification * notificationToDismiss; 
@property (nonatomic,retain) ANManagedAccountNotification * notificationToClear; 
-(void)takeValuesFromNotificationAction:(id)arg1 ;
@end

