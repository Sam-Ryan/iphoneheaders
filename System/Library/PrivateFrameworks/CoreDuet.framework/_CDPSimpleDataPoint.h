/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDPDataPoint.h>

@class NSDate, NSArray, NSString;

@interface _CDPSimpleDataPoint : NSObject <_CDPDataPoint> {

	BOOL _userIsSender;
	BOOL _userIsThreadInitiator;
	NSDate* _timestamp;
	NSArray* _peopleIdentifiers;
	NSString* _title;

}

@property (assign,nonatomic) BOOL userIsSender;                        //@synthesize userIsSender=_userIsSender - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSArray * peopleIdentifiers;              //@synthesize peopleIdentifiers=_peopleIdentifiers - In the implementation block
@property (nonatomic,retain) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL userIsThreadInitiator;               //@synthesize userIsThreadInitiator=_userIsThreadInitiator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTitle:(NSString *)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSString *)title;
-(NSArray *)peopleIdentifiers;
-(BOOL)userIsSender;
-(BOOL)userIsThreadInitiator;
-(void)setUserIsSender:(BOOL)arg1 ;
-(void)setPeopleIdentifiers:(NSArray *)arg1 ;
-(void)setUserIsThreadInitiator:(BOOL)arg1 ;
@end

