/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@interface PLCGPathCache : NSObject {

	CFDictionaryRef _pathCache;

}
+(id)sharedPathCache;
-(void)dealloc;
-(id)init;
-(void)setPath:(CGPathRef)arg1 forKey:(CGRect)arg2 ;
-(CGPathRef)pathForKey:(CGRect)arg1 ;
@end

