/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLWebViewPrintPageHelper.h>

@class UIWebPaginationInfo;

@interface QLWordProcessorPrintPageRenderer : QLWebViewPrintPageHelper {

	UIWebPaginationInfo* _paginationInfo;

}
-(void)dealloc;
-(long long)numberOfPages;
-(id)pdfDataForPageAtIndex:(long long)arg1 printingDone:(BOOL*)arg2 ;
-(id)_paginationInfo;
@end
