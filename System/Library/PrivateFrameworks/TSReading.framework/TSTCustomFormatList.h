/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSTTableDataList.h>

@class NSMutableDictionary;

@interface TSTCustomFormatList : TSTTableDataList {

	NSMutableDictionary* mNamesList;

}
-(BOOL)supportsIDMapForType:(int)arg1 ;
-(TSUCustomFormat*)customFormatForKey:(unsigned)arg1 ;
-(id)newUniqueNameFromName:(id)arg1 preserveSeed:(BOOL)arg2 ;
-(unsigned)addCustomFormat:(TSUCustomFormat*)arg1 duringImport:(BOOL)arg2 ;
-(void)p_setupNamesList;
-(unsigned)addCustomFormat:(TSUCustomFormat*)arg1 withOldKey:(unsigned)arg2 ;
-(id)customFormatWrapperForKey:(unsigned)arg1 ;
-(unsigned)maxKey;
-(id)allNumberKeys;
-(id)newUniqueNameFromName:(id)arg1 ;
-(void)dealloc;
-(long long)count;
-(id)init;
-(id)initWithContext:(id)arg1 ;
@end

