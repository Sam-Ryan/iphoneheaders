/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:00:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPOffscreenColumn.h>

@class TPPageController, NSString;

@interface TPVisibleColumnProxy : NSObject <TSWPOffscreenColumn> {

	unsigned long long _pageIndex;
	TPPageController* _pageController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long startCharIndex; 
@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) unsigned long long startAnchoredCharIndex; 
@property (nonatomic,readonly) NSRange anchoredRange; 
@property (nonatomic,readonly) unsigned long long nextWidowPullsDownFromCharIndex; 
-(NSRange)anchoredRange;
-(void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeFootnoteLayoutCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4 ;
-(unsigned long long)startCharIndex;
-(unsigned long long)startAnchoredCharIndex;
-(unsigned long long)nextWidowPullsDownFromCharIndex;
-(id)initWithPageIndex:(unsigned long long)arg1 pageController:(id)arg2 ;
-(const TSWPTargetHint*)p_targetFirstHint;
-(const TSWPTargetHint*)p_targetLastHint;
-(void)dealloc;
-(NSRange)range;
@end
