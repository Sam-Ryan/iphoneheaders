/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSData;

@interface JournalRecordInfo : NSObject {

	NSString* _journalName;
	NSDate* _lastUpdate;
	NSData* _journalData;

}

@property (readonly) NSString * journalName;              //@synthesize journalName=_journalName - In the implementation block
@property (readonly) NSDate * lastUpdate;                 //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (readonly) NSData * journalData;                //@synthesize journalData=_journalData - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)journalName;
-(NSDate *)lastUpdate;
-(NSData *)journalData;
-(id)initWithJournalName:(id)arg1 lastUpdate:(id)arg2 journalData:(id)arg3 ;
@end

