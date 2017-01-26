/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOCompletionGroup.h>

@class NSString, NSArray;

@interface _GEOPlaceSearchCompletionGroup : NSObject <GEOCompletionGroup> {

	NSString* _localizedSectionHeader;
	NSArray* _items;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * items;                                //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSString * localizedSectionHeader;              //@synthesize localizedSectionHeader=_localizedSectionHeader - In the implementation block
-(void)dealloc;
-(NSArray *)items;
-(NSString *)localizedSectionHeader;
-(id)initWithSection:(id)arg1 traits:(id)arg2 entryListIndex:(int)arg3 mapItems:(id)arg4 ;
@end

