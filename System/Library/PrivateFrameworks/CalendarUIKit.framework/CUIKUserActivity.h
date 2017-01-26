/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet;

@interface CUIKUserActivity : NSObject {

	unsigned long long _type;
	NSString* _activityTitle;
	NSString* _activitySubtitle;
	NSSet* _activityKeywords;
	unsigned long long _version;

}

@property (assign,nonatomic) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * activityTitle;                 //@synthesize activityTitle=_activityTitle - In the implementation block
@property (nonatomic,retain) NSString * activitySubtitle;              //@synthesize activitySubtitle=_activitySubtitle - In the implementation block
@property (nonatomic,retain) NSSet * activityKeywords;                 //@synthesize activityKeywords=_activityKeywords - In the implementation block
@property (assign,nonatomic) unsigned long long version;               //@synthesize version=_version - In the implementation block
+(unsigned long long)_typeFromDictionary:(id)arg1 ;
+(unsigned long long)_unsignedIntegerFromDictionary:(id)arg1 key:(id)arg2 error:(BOOL*)arg3 ;
+(id)activityForDictionary:(id)arg1 ;
+(id)activityForActivity:(id)arg1 ;
+(long long)_integerFromDictionary:(id)arg1 key:(id)arg2 error:(BOOL*)arg3 ;
+(double)_doubleFromDictionary:(id)arg1 key:(id)arg2 error:(BOOL*)arg3 ;
+(id)_stringFromDictionary:(id)arg1 key:(id)arg2 error:(BOOL*)arg3 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionary;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(NSString *)activityTitle;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(void)setActivityTitle:(NSString *)arg1 ;
-(void)setActivitySubtitle:(NSString *)arg1 ;
-(void)setActivityKeywords:(NSSet *)arg1 ;
-(NSString *)activitySubtitle;
-(NSSet *)activityKeywords;
-(void)updateActivity:(id)arg1 ;
@end

