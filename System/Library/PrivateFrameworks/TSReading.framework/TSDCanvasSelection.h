/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKSelection.h>
#import <TSReading/TSDCanvasSelection.h>
@class NSSet;


@protocol TSDCanvasSelection <NSObject>
@property (nonatomic,readonly) NSSet * infos; 
@property (nonatomic,readonly) unsigned long long infoCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) TSDDrawableInfo*<TSDContainerInfo> container; 
@property (nonatomic,readonly) NSSet * unlockedInfos; 
@property (nonatomic,readonly) unsigned long long unlockedInfoCount; 
@required
+(id)emptySelection;
-(BOOL)containsKindOfClass:(Class)arg1;
-(BOOL)containsUnlockedKindOfClass:(Class)arg1;
-(id)infosOfClass:(Class)arg1;
-(id)copyIncludingInfo:(id)arg1;
-(id)copyExcludingInfo:(id)arg1;
-(unsigned long long)infoCount;
-(NSSet *)unlockedInfos;
-(unsigned long long)unlockedInfoCount;
-(BOOL)isEmpty;
-(TSDDrawableInfo*<TSDContainerInfo>)container;
-(NSSet *)infos;

@end

#import <libobjc.A.dylib/NSCopying.h>

@protocol TSDContainerInfo;
@class NSSet, TSDDrawableInfo, NSString;

@interface TSDCanvasSelection : TSKSelection <TSDCanvasSelection, NSCopying> {

	NSSet* mInfos;
	TSDDrawableInfo*<TSDContainerInfo> mContainer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * infos; 
@property (nonatomic,readonly) unsigned long long infoCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) TSDDrawableInfo*<TSDContainerInfo> container; 
@property (nonatomic,readonly) NSSet * unlockedInfos; 
@property (nonatomic,readonly) unsigned long long unlockedInfoCount; 
+(id)emptySelection;
-(id)initWithInfos:(id)arg1 andContainer:(id)arg2 ;
-(id)initWithInfos:(id)arg1 ;
-(BOOL)containsKindOfClass:(Class)arg1 ;
-(BOOL)containsUnlockedKindOfClass:(Class)arg1 ;
-(id)infosOfClass:(Class)arg1 ;
-(id)copyIncludingInfo:(id)arg1 ;
-(id)copyExcludingInfo:(id)arg1 ;
-(unsigned long long)infoCount;
-(NSSet *)unlockedInfos;
-(unsigned long long)unlockedInfoCount;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(TSDDrawableInfo*<TSDContainerInfo>)container;
-(NSSet *)infos;
@end

