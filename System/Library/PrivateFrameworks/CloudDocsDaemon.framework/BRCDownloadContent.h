/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCDownload.h>

@class BRCServerZone, NSIndexSet;

@interface BRCDownloadContent : BRCDownload {

	unsigned long long _liveFileID;
	unsigned _liveDocumentID;
	BOOL _liveItemIsPackage;
	BRCServerZone* _zone;
	BOOL _requiresSecondPhase;
	NSIndexSet* _desiredIndices;

}

@property (nonatomic,readonly) BOOL requiresSecondPhase;                   //@synthesize requiresSecondPhase=_requiresSecondPhase - In the implementation block
@property (nonatomic,readonly) BOOL liveItemIsPackage;                     //@synthesize liveItemIsPackage=_liveItemIsPackage - In the implementation block
@property (nonatomic,readonly) unsigned liveDocumentID;                    //@synthesize liveDocumentID=_liveDocumentID - In the implementation block
@property (nonatomic,readonly) unsigned long long liveFileID;              //@synthesize liveFileID=_liveFileID - In the implementation block
@property (nonatomic,readonly) NSIndexSet * desiredIndices;                //@synthesize desiredIndices=_desiredIndices - In the implementation block
-(id)description;
-(int)kind;
-(BOOL)requiresSecondPhase;
-(id)initWithDocument:(id)arg1 stageID:(id)arg2 ;
-(BOOL)_stageWithSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)_prepareSecondStageWithSession:(id)arg1 manifest:(id)arg2 package:(id)arg3 error:(id*)arg4 ;
-(BOOL)_stageWithSession:(id)arg1 manifest:(id)arg2 package:(id)arg3 error:(id*)arg4 ;
-(BOOL)liveItemIsPackage;
-(unsigned)liveDocumentID;
-(NSIndexSet *)desiredIndices;
-(unsigned long long)liveFileID;
@end

