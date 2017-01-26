/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:00:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TPPageController.h>

@class TPTextWrapController;

@interface TPPaginatedPageController : TPPageController {

	TPTextWrapController* _wrapController;

}
-(id)initWithDocumentRoot:(id)arg1 ;
-(id)textWrapper;
-(BOOL)isPaginated;
-(unsigned long long)pageIndexFromCanvasPoint:(CGPoint)arg1 ;
-(CGRect)pageRectForPageIndex:(unsigned long long)arg1 ;
-(Class)p_pageInfoClass;
-(CGPoint)pageOriginForPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)calculatePageIndexFromCanvasPoint:(CGPoint)arg1 ;
-(void)p_performWithCachedPageLayouts:(/*^block*/id)arg1 ;
-(NSRange)p_pageRangeAffectedByInfo:(id)arg1 ;
-(unsigned long long)p_backupPageIndexForCharIndex:(unsigned long long)arg1 ;
-(void)d_toggleWrapAnimation;
-(CGSize)canvasSizeToFitAllPages;
-(void)processHeaderFooterPropertyChanged;
-(void)syncProcessChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(void)p_rebuildCachedLayoutChildrenFromStartPage:(unsigned long long)arg1 toEndPage:(unsigned long long)arg2 setNeedsLayout:(BOOL)arg3 ;
-(void)dealloc;
-(CGSize)pageSize;
-(void)teardown;
@end

