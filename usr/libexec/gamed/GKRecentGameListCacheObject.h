/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:11 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKListCacheObject.h>

@class NSDate, GKPlayerProfileCacheObject;

@interface GKRecentGameListCacheObject : GKListCacheObject

@property (nonatomic,retain) NSDate * sinceDate; 
@property (nonatomic,retain) GKPlayerProfileCacheObject * player; 
@property (nonatomic,retain) GKPlayerProfileCacheObject * otherPlayer; 
+(Class)entryClass;
+(id)entityName;
-(void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2 ;
-(id)internalRepresentation;
@end

