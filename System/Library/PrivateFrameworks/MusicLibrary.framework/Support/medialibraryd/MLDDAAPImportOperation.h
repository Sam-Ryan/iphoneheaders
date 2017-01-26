/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:17:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <medialibraryd/medialibraryd-Structs.h>
#import <medialibraryd/MLDImportOperation.h>

@class NSError;

@interface MLDDAAPImportOperation : MLDImportOperation {

	ML3ImportSession* _importSession;
	NSError* _importError;
	shared_ptr<DAAPParserDelegate>* _delegate;
	unsigned char _updateType;
	long long _totalTrackCount;
	long long _totalContainerCount;
	long long _processedTrackCount;
	long long _processedContainerCount;
	BOOL _importSessionStarted;
	int _sourceType;

}
-(BOOL)performImportOfSourceType:(int)arg1 usingConnection:(id)arg2 ;
-(shared_ptr<MLDDAAPImportItem>*)importItemFromDAAPElement:(shared_ptr<DAAP::Element>*)arg1 ;
-(shared_ptr<MLDDAAPImportItem>*)containerImportItemFromDAAPElement:(shared_ptr<DAAP::Element>*)arg1 withTrackIds:(vector<long long, std::__1::allocator<long long> >*)arg2 ;
-(void)updateImportProgress:(float)arg1 ;
-(BOOL)_importDAAPPayloadFromFile:(id)arg1 shouldProcessPlaylists:(BOOL)arg2 ;
-(BOOL)_startImportSessionIfNeeded;
-(void)_finishParsingWithError:(id)arg1 ;
-(BOOL)_processUpdateType:(unsigned char)arg1 ;
-(BOOL)_processTrackItemCount:(int)arg1 ;
-(BOOL)_processTrackElement:(shared_ptr<DAAP::Element>*)arg1 ;
-(BOOL)_processDeletedTrackId:(long long)arg1 ;
-(BOOL)_processContainerItemCount:(int)arg1 ;
-(BOOL)_processContainerElement:(shared_ptr<DAAP::Element>*)arg1 withTrackIds:(vector<long long, std::__1::allocator<long long> >*)arg2 ;
-(BOOL)_processDeletedContainerId:(long long)arg1 ;
-(void)dealloc;
@end
