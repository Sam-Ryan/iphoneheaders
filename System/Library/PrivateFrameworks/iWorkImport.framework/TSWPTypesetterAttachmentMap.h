/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSWPAttachment, TSDLayout;

@interface TSWPTypesetterAttachmentMap : NSObject {

	BOOL _layoutNeedsRevalidation;
	TSWPAttachment* _attachment;
	TSDLayout* _layout;
	CTLineRef _lineRef;

}

@property (assign,nonatomic) TSWPAttachment * attachment;               //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,retain) TSDLayout * layout;                        //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) BOOL layoutNeedsRevalidation;              //@synthesize layoutNeedsRevalidation=_layoutNeedsRevalidation - In the implementation block
@property (nonatomic,readonly) CTLineRef lineRef;                       //@synthesize lineRef=_lineRef - In the implementation block
+(id)mapWithAttachment:(id)arg1 layout:(id)arg2 pageNumber:(unsigned long long)arg3 pageCount:(unsigned long long)arg4 footnoteMarkProvider:(id)arg5 styleProvider:(id)arg6 colorOverride:(id)arg7 textScalePercent:(unsigned long long)arg8 ;
-(CTLineRef)lineRef;
-(BOOL)layoutNeedsRevalidation;
-(void)setLayoutNeedsRevalidation:(BOOL)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSDLayout *)layout;
-(void)setLayout:(TSDLayout *)arg1 ;
-(void)setAttachment:(TSWPAttachment *)arg1 ;
-(TSWPAttachment *)attachment;
@end

