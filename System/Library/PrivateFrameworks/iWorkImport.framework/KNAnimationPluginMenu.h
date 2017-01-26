/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSArray;

@interface KNAnimationPluginMenu : NSObject {

	NSMutableDictionary* mLocalizedStringToDirectionMap;
	NSMutableDictionary* mDirectionToLocalizedStringMap;
	unsigned long long mDefaultDirection;
	NSMutableArray* mLocalizedDirections;
	NSMutableArray* mDirections;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * localizedDirections; 
@property (nonatomic,readonly) NSArray * directions; 
@property (assign,nonatomic) unsigned long long defaultDirection; 
+(id)animationPluginMenu;
+(id)localizedStringForDirection:(unsigned long long)arg1 shortVersion:(BOOL)arg2 ;
-(unsigned long long)defaultDirection;
-(void)setDefaultDirection:(unsigned long long)arg1 ;
-(BOOL)containsDirection:(unsigned long long)arg1 ;
-(void)addDirection:(unsigned long long)arg1 localizedMenuString:(id)arg2 ;
-(void)addDirection:(unsigned long long)arg1 useShortString:(BOOL)arg2 ;
-(unsigned long long)indexForDirection:(unsigned long long)arg1 ;
-(unsigned long long)directionForIndex:(unsigned long long)arg1 ;
-(NSArray *)localizedDirections;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(NSArray *)directions;
@end
