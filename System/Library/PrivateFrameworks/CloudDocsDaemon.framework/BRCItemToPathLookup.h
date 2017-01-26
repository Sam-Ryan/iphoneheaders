/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
@class BRCLocalItem, BRCServerItem, BRCServerZone, BRCRelativePath, NSURL;

@interface BRCItemToPathLookup : NSObject {

	BRCLocalItem* _item;
	BRCServerItem* _serverItem;
	BRCServerZone* _serverZone;
	BRCRelativePath* _parentPath;
	BRCRelativePath* _matchByFileID;
	BRCRelativePath* _matchByDocumentID;
	BRCRelativePath* _matchByEnclosure;
	BRCRelativePath* _matchByPath;
	unsigned long long _parentFileID;
	BOOL _fileSystemIDMayStillExist;
	BOOL _cleanupFaults;
	SCD_Struct_BR5 _fetched;

}

@property (nonatomic,readonly) BRCRelativePath * byFileSystemID; 
@property (nonatomic,readonly) BOOL fileSystemIDMayStillExist; 
@property (nonatomic,readonly) BRCRelativePath * parentPath; 
@property (nonatomic,readonly) BRCRelativePath * byPath; 
@property (nonatomic,readonly) NSURL * coordinatedWriteURL; 
@property (nonatomic,readonly) NSURL * coordinatedReadURL; 
+(id)_resolveEnclosureWithEnclosureFd:(int)arg1 serverZone:(id)arg2 expectedDocumentID:(unsigned)arg3 expectedFileName:(id)arg4 cleanupFaults:(BOOL)arg5 ;
+(id)lookupForItem:(id)arg1 ;
+(id)lookupForServerItem:(id)arg1 cleanupFaults:(BOOL)arg2 ;
+(id)resolveEnclosureWithPath:(id)arg1 cleanupFaults:(BOOL)arg2 ;
-(void)dealloc;
-(id)description;
-(id)initWithItem:(id)arg1 ;
-(NSURL *)coordinatedWriteURL;
-(BRCRelativePath *)byFileSystemID;
-(void)closePaths;
-(BOOL)_fetchByFileID;
-(BOOL)_fetchByDocumentID;
-(BOOL)_fetchByPath;
-(BRCRelativePath *)byPath;
-(id)initWithServerItem:(id)arg1 cleanupFaults:(BOOL)arg2 ;
-(void)_fetchParent;
-(BRCRelativePath *)parentPath;
-(BOOL)computeLogicalPath:(id*)arg1 physicalPath:(id*)arg2 isDirectory:(BOOL*)arg3 ;
-(BOOL)_fetchByEnclosure;
-(NSURL *)coordinatedReadURL;
-(BOOL)fileSystemIDMayStillExist;
@end

