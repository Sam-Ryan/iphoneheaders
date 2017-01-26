/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BRCAccountSession, BRCLocalContainer, NSData, BRCDocumentItem, BRCServerZone, BRCRelativePath;

@interface BRCBookmark : NSObject {

	BRCAccountSession* _session;
	BRCLocalContainer* _container;
	NSData* _bookmarkData;
	BRCDocumentItem* _target;
	BRCServerZone* _targetServerZone;
	BRCRelativePath* _targetRelpath;
	BOOL _targetResolved;
	BOOL _dataResolved;
	BOOL _containsItemID;

}

@property (nonatomic,readonly) BOOL containsItemID; 
@property (nonatomic,readonly) BRCServerZone * targetServerZone; 
@property (nonatomic,readonly) BRCDocumentItem * target; 
+(void)unlinkAliasAtPath:(id)arg1 ;
+(id)createName;
-(BRCDocumentItem *)target;
-(id)initWithTarget:(id)arg1 owningContainer:(id)arg2 path:(id)arg3 session:(id)arg4 ;
-(BOOL)resolveWithError:(id*)arg1 ;
-(id)writeUnderParent:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(id)initWithRelpath:(id)arg1 ;
-(void)_computeSignature:(unsigned char)arg1 ;
-(int)_validateSignatureWithFd:(int)arg1 ;
-(BOOL)_resolveTargetWithError:(id*)arg1 ;
-(BOOL)_resolveDataWithError:(id*)arg1 ;
-(BOOL)containsItemID;
-(BRCServerZone *)targetServerZone;
@end

