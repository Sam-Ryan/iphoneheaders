/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSWPFontCacheValue : NSObject {

	CTFontRef _ctFont;

}

@property (nonatomic,readonly) CTFontRef ctFont;              //@synthesize ctFont=_ctFont - In the implementation block
+(id)cacheValueWithCTFont:(CTFontRef)arg1 ;
-(id)initWithCTFont:(CTFontRef)arg1 ;
-(CTFontRef)ctFont;
-(void)dealloc;
@end

