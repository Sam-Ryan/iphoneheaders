/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPPageNumberAttachment.h>

@interface KNSlideNumberAttachment : TSWPPageNumberAttachment
+(id)newObjectForUnarchiver:(id)arg1 ;
+(const TextualAttachmentArchive*)textualAttachmentArchiveFromUnarchiver:(id)arg1 ;
-(const TextualAttachmentArchive*)textualAttachmentArchiveFromUnarchiver:(id)arg1 ;
-(BOOL)shouldArchiveStringEquivalent;
-(id)stringWithPageNumber:(unsigned long long)arg1 pageCount:(unsigned long long)arg2 charIndex:(unsigned long long)arg3 ;
@end

