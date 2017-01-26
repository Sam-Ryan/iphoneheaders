/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSMutableArray, NSData, NSArray;

@interface CKDFetchNotificationChangesURLRequest : CKDURLRequest {

	NSMutableArray* _resultChangedNotifications;
	BOOL _wantsChanges;
	BOOL _moreComing;
	unsigned long long _resultsLimit;
	NSData* _resultServerChangeTokenData;
	NSData* _serverChangeTokenData;

}

@property (assign,nonatomic) unsigned long long resultsLimit;                     //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) BOOL wantsChanges;                                   //@synthesize wantsChanges=_wantsChanges - In the implementation block
@property (nonatomic,retain) NSData * resultServerChangeTokenData;                //@synthesize resultServerChangeTokenData=_resultServerChangeTokenData - In the implementation block
@property (nonatomic,readonly) NSArray * resultChangedNotifications;              //@synthesize resultChangedNotifications=_resultChangedNotifications - In the implementation block
@property (assign,nonatomic) BOOL moreComing;                                     //@synthesize moreComing=_moreComing - In the implementation block
@property (nonatomic,retain) NSData * serverChangeTokenData;                      //@synthesize serverChangeTokenData=_serverChangeTokenData - In the implementation block
-(int)operationType;
-(unsigned long long)resultsLimit;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(void)setWantsChanges:(BOOL)arg1 ;
-(BOOL)wantsChanges;
-(NSData *)serverChangeTokenData;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(NSArray *)resultChangedNotifications;
-(id)initWithServerChangeTokenData:(id)arg1 ;
-(NSData *)resultServerChangeTokenData;
-(BOOL)moreComing;
-(void)setMoreComing:(BOOL)arg1 ;
-(void)setServerChangeTokenData:(NSData *)arg1 ;
-(void)setResultServerChangeTokenData:(NSData *)arg1 ;
@end

