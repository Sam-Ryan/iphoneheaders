/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@interface SBItemInfoLayoutCache : NSObject {

	double _cachedViewHeight;
	CGSize _referenceSize;
	long long _layoutMode;

}
-(double)viewHeightWithReferenceSize:(CGSize)arg1 layoutMode:(long long)arg2 generateBlock:(/*^block*/id)arg3 ;
-(BOOL)_isLayoutValidWithReferenceSize:(CGSize)arg1 layoutMode:(long long)arg2 ;
-(void)invalidateCache;
@end
