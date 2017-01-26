/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSArray, NSString;

@interface CUIThemeSchemaLayer : NSObject {

	NSArray* _renditions;
	NSString* _name;
	unsigned long long _index;

}

@property (nonatomic,retain) NSArray * renditions;                  //@synthesize renditions=_renditions - In the implementation block
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
+(id)layerWithRenditions:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3 ;
-(NSArray *)renditions;
-(void)setRenditions:(NSArray *)arg1 ;
-(void)calculateColumLefts:(id*)arg1 rowTops:(id*)arg2 totalSize:(CGSize*)arg3 forPartFeatures:(unsigned long long)arg4 ;
-(id)initWithRenditions:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3 ;
-(double)translateFromWidthsOrHeightsToLeftsOrTops:(id)arg1 leftsOrTops:(id*)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
@end

