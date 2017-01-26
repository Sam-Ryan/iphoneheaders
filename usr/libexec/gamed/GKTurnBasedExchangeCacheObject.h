/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:11 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKCacheObject.h>

@class NSString, NSOrderedSet, NSData, NSDate, GKTurnBasedSessionCacheObject;

@interface GKTurnBasedExchangeCacheObject : GKCacheObject

@property (nonatomic,retain) NSString * exchangeID; 
@property (assign,nonatomic) int senderIndex; 
@property (nonatomic,retain) NSOrderedSet * recipients; 
@property (nonatomic,retain) NSString * statusString; 
@property (nonatomic,retain) NSData * localizableMessage; 
@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) NSDate * sendDate; 
@property (nonatomic,retain) NSDate * timeoutDate; 
@property (nonatomic,retain) NSDate * completionDate; 
@property (nonatomic,retain) NSOrderedSet * replies; 
@property (nonatomic,retain) GKTurnBasedSessionCacheObject * session; 
+(id)entityName;
-(void)updateWithServerRepresentation:(id)arg1 participants:(id)arg2 ;
-(id)internalRepresentation;
@end

