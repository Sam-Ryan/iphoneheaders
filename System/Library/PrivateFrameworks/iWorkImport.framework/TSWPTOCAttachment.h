/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPDrawableAttachment.h>

@class TSWPTOCInfo;

@interface TSWPTOCAttachment : TSWPDrawableAttachment

@property (nonatomic,retain,readonly) TSWPTOCInfo * tocInfo; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(TSWPTOCInfo *)tocInfo;
-(void)loadTOCAttachmentMessage:(const TOCAttachmentArchive*)arg1 fromUnarchiver:(id)arg2 ;
-(void)saveTOCAttachmentMessage:(TOCAttachmentArchive*)arg1 archiver:(id)arg2 ;
-(int)elementKind;
@end

