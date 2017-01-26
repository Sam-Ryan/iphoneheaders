/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSString;

@interface ASFolderSyncTask : ASTask {

	NSString* _previousSyncKey;
	BOOL _requireChangedFolders;
	int _numDownloadedElements;
	long long _dataclasses;
	BOOL _isSpinning;

}

@property (assign,nonatomic) BOOL requireChangedFolders;              //@synthesize requireChangedFolders=_requireChangedFolders - In the implementation block
@property (assign,nonatomic) long long dataclasses;                   //@synthesize dataclasses=_dataclasses - In the implementation block
-(void)dealloc;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(long long)dataclasses;
-(void)setDataclasses:(long long)arg1 ;
-(void)_setSpinning:(BOOL)arg1 ;
-(id)initWithPreviousSyncKey:(id)arg1 ;
-(BOOL)requireChangedFolders;
-(void)setRequireChangedFolders:(BOOL)arg1 ;
-(int)numDownloadedElements;
-(void)finishWithError:(id)arg1 ;
@end

