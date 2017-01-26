/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:27:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSKSearchTargetProvider.h>

@class NSArray, NSString;

@interface TSKAggregateSearchTargetProvider : NSObject <TSKSearchTargetProvider> {

	NSArray* _searchTargetProviders;

}

@property (nonatomic,retain) NSArray * searchTargetProviders;              //@synthesize searchTargetProviders=_searchTargetProviders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)rootSearchTargetCountThroughIndex:(unsigned long long)arg1 ;
-(void)withRootSearchTargetAtIndex:(unsigned long long)arg1 executeBlock:(/*^block*/id)arg2 ;
-(unsigned long long)nextRootSearchTargetIndexFromIndex:(unsigned long long)arg1 forString:(id)arg2 options:(unsigned long long)arg3 inDirection:(unsigned long long)arg4 ;
-(void)setSearchTargetProviders:(NSArray *)arg1 ;
-(unsigned long long)p_firstTargetIndexForProvider:(id)arg1 ;
-(void)p_enumerateTargetProvidersFromTargetIndex:(unsigned long long)arg1 direction:(unsigned long long)arg2 action:(/*^block*/id)arg3 ;
-(id)initWithSearchTargetProviders:(id)arg1 ;
-(NSArray *)searchTargetProviders;
-(void)dealloc;
@end

