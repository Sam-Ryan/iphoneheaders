/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSCHPropertyMutationHelper : NSObject
+(id)convertToStyleSwapTuplesForStyleOwner:(id)arg1 styleSwapType:(int)arg2 nonStyleSwapType:(int)arg3 index:(unsigned long long)arg4 fromMutations:(id)arg5 forImport:(BOOL)arg6 withOptionalStyleValueConversionBlock:(/*^block*/id)arg7 ;
+(int)specificMutationPropertyForGeneric:(int)arg1 styleOwner:(id)arg2 allowSpecificProperties:(BOOL)arg3 ;
+(void)applyMutations:(id)arg1 forImport:(BOOL)arg2 forStyleOwner:(id)arg3 withNonStylePropertyList:(id)arg4 toStylePropertyMap:(id)arg5 andNonStylePropertyMap:(id)arg6 ;
+(int)safe_specificMutationPropertyForGeneric:(int)arg1 styleOwner:(id)arg2 allowSpecificProperties:(BOOL)arg3 ;
+(id)styleSwapTuplesFromMutationTuples:(id)arg1 forImport:(BOOL)arg2 ;
+(void)setValue:(id)arg1 forProperty:(int)arg2 ofStyleOwner:(id)arg3 ;
-(id)init;
@end

