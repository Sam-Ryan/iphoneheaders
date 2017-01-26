/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>
#import <libobjc.A.dylib/CMMapperRoot.h>

@class PDPresentation, NSMutableArray, NSString, CMArchiveManager, OIXMLDocument, OIXMLElement;

@interface PMPresentationMapper : CMMapper <CMMapperRoot> {

	int mWidth;
	PDPresentation* mPresentation;
	NSMutableArray* mSlideNames;
	NSMutableArray* mSlideGuids;
	NSString* mResourceUrlPrefix;
	NSString* mResourceUrlProtocol;
	CMArchiveManager* mArchiver;
	OIXMLDocument* mXhtmlDoc;
	OIXMLElement* mBodyElement;
	unsigned mNextCommit;
	unsigned mCurrentSlide;
	BOOL mHasPushedFirstSlides;
	float mSlideOriginY;

}
-(void)mapDefaultCssStylesAt:(id)arg1 ;
-(void)setHtmlDocumentSizeInArchiver;
-(void)dealloc;
-(id)blipAtIndex:(unsigned)arg1 ;
-(CGSize)pageSizeForDevice;
-(id)documentTitle;
-(id)archiver;
-(void)startMappingWithState:(id)arg1 ;
-(void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(BOOL)arg4 ;
-(void)finishMappingWithState:(id)arg1 ;
-(CGSize)slideSize;
-(void)_pushEmptySlideWithMessage:(id)arg1 ;
-(id)initWithPDPresentation:(id)arg1 archiver:(id)arg2 ;
@end

