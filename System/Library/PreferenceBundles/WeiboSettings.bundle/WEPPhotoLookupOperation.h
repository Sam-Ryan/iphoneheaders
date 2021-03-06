/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:36:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/WeiboSettings.bundle/WeiboSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class ACAccount, ACAccountStore;

@interface WEPPhotoLookupOperation : NSOperation {

	int _recordID;
	ACAccount* _account;
	ACAccountStore* _store;
	BOOL _isExecuting;
	BOOL _isFinished;

}
-(id)initWithRecordID:(int)arg1 account:(id)arg2 store:(id)arg3 ;
-(BOOL)isConcurrent;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
@end

