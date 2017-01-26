/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:44:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class NSString, NSDate;

@interface GKFriendRequestInternal : GKFamiliarPlayerInternal {

	NSString* _message;
	NSDate* _date;

}

@property (nonatomic,retain) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSDate * date;                   //@synthesize date=_date - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(NSDate *)date;
-(NSString *)message;
-(void)setDate:(NSDate *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(int)defaultFamiliarity;
@end

