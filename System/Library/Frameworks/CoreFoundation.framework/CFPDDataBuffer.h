/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface CFPDDataBuffer : NSObject
+(id)newBufferFromFile:(int)arg1 allowMappingIfSafe:(BOOL)arg2 ;
+(id)newBufferFromPropertyList:(void*)arg1 ;
+(id)newBufferFromCFData:(CFDataRef)arg1 ;
-(BOOL)purgable;
-(BOOL)beginAccessing;
-(void)endAccessing;
-(BOOL)validatePlist;
-(void*)copyPropertyListWithMutability:(unsigned long long)arg1 ;
-(id)copyXPCData;
-(CFDataRef)copyCFData;
-(unsigned long long)length;
-(void*)bytes;
@end

