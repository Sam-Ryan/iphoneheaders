/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SYObject.h>
#import <libobjc.A.dylib/SYChange.h>

@class NSString;

@interface SYDeletedObject : NSObject <SYObject, SYChange> {

	NSString* _sequencer;
	NSString* _syncId;

}

@property (nonatomic,retain) NSString * syncId;                          //@synthesize syncId=_syncId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer;                     //@synthesize sequencer=_sequencer - In the implementation block
@property (nonatomic,readonly) long long changeType; 
-(long long)changeType;
-(NSString *)syncId;
-(NSString *)sequencer;
-(id)initWithSyncId:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 sequencer:(id)arg2 ;
-(void)setSyncId:(NSString *)arg1 ;
-(NSString *)objectIdentifier;
@end

