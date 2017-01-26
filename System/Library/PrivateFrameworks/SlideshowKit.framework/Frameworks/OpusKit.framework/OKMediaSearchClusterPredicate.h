/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKMediaClusterPredicate.h>

@class NSString;

@interface OKMediaSearchClusterPredicate : OKMediaClusterPredicate {

	NSString* _searchString;
	unsigned long long _type;
	unsigned long long _options;

}
-(void)dealloc;
-(id)title;
-(id)evaluateItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(float)efficiencyForItems:(id)arg1 ;
-(id)initWithString:(id)arg1 type:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
@end

