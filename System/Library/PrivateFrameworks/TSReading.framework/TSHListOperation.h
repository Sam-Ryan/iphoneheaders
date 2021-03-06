/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSHListPropertiesOperation.h>

@class NSMutableArray;

@interface TSHListOperation : TSHListPropertiesOperation {

	NSMutableArray* mSubPaths;

}
-(id)initWithAccount:(id)arg1 andPath:(id)arg2 delegate:(id)arg3 ;
-(id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 persistence:(unsigned long long)arg4 delegate:(id)arg5 ;
-(void)start:(id)arg1 notifyWhenFinished:(id)arg2 ;
-(id)subPaths;
-(void)dealloc;
-(void)parserDidEndDocument:(id)arg1 ;
@end

