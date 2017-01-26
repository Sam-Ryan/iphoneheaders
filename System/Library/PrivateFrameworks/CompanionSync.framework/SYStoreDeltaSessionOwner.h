/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/SYStoreSessionOwner.h>

@class NSArray;

@interface SYStoreDeltaSessionOwner : SYStoreSessionOwner {

	NSArray* _changes;
	unsigned long long _currentIdx;

}

@property (nonatomic,readonly) unsigned long long changeCount; 
-(unsigned long long)changeCount;
-(id)initWithChanges:(id)arg1 ;
-(long long)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3 ;
@end

