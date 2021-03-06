/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, TDPhotoshopRenditionSpec;

@interface TDPhotoshopLayer : NSManagedObject

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) TDPhotoshopLayer * childLayer; 
@property (nonatomic,retain) TDPhotoshopLayer * parentLayer; 
@property (nonatomic,retain) TDPhotoshopRenditionSpec * rendition; 
-(id)hierarchicalLayerNames;
@end

