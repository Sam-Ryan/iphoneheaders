/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBTableRowProperties : NSObject
+(void)mapWordProperties:(WrdTableProperties*)arg1 toProperties:(id)arg2 ;
+(void)mapProperties:(id)arg1 toWordProperties:(WrdTableProperties*)arg2 ;
+(void)readFrom:(id)arg1 wrdProperties:(WrdTableProperties*)arg2 tracked:(WrdTableProperties*)arg3 properties:(id)arg4 ;
+(void)write:(id)arg1 properties:(id)arg2 wrdProperties:(WrdTableProperties*)arg3 tracked:(WrdTableProperties*)arg4 ;
@end

