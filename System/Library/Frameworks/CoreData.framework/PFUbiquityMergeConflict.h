/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSMergeConflict.h>

@class NSDictionary;

@interface PFUbiquityMergeConflict : NSMergeConflict {

	NSDictionary* _ancestorSnapshot;

}

@property (retain) NSDictionary * ancestorSnapshot;              //@synthesize ancestorSnapshot=_ancestorSnapshot - In the implementation block
-(id)initWithSource:(id)arg1 newVersion:(unsigned long long)arg2 oldVersion:(unsigned long long)arg3 cachedSnapshot:(id)arg4 persistedSnapshot:(id)arg5 ;
-(NSDictionary *)ancestorSnapshot;
-(void)setAncestorSnapshot:(NSDictionary *)arg1 ;
-(void)dealloc;
@end

