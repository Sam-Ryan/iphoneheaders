/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
#import <libobjc.A.dylib/WFWebPageProtocol.h>

@class NSString, NSMutableDictionary, NSMutableArray;

@interface WFTreeXMLDocumentStripper : NSObject <WFWebPageProtocol> {

	xmlDoc* xmlDocument;
	NSString* pageTitle;
	NSMutableDictionary* metaTagsLabeled;
	NSMutableArray* metaTagsUnlabeled;
	NSMutableArray* scriptBlocks;
	NSMutableArray* images;
	NSString* pageContent;
	NSMutableArray* links;
	BOOL hasFrameset;
	BOOL hasShortRefresh;

}
+(id)treeStripperWithXMLDocument:(xmlDoc*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)images;
-(id)links;
-(id)URLString;
-(id)pageTitle;
-(void)setPageTitle:(id)arg1 ;
-(void)strip;
-(id)pageContent;
-(id)initWithXMLDocument:(xmlDoc*)arg1 ;
-(void)setXMLDocument:(xmlDoc*)arg1 ;
-(void)processXMLDocument:(xmlDoc*)arg1 ;
-(id)processXMLDocument:(xmlDoc*)arg1 blockComments:(BOOL)arg2 ;
-(id)metaTagDescription;
-(id)metaTagKeywords;
-(id)metaTagsLabeled;
-(id)metaTagsUnlabeled;
-(id)scriptBlocks;
-(BOOL)hasFrameset;
-(BOOL)hasShortRefresh;
-(id)metaTagRating;
@end
