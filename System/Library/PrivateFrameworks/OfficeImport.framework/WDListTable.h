/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WDDocument, NSMutableArray, NSMutableDictionary, WDList;

@interface WDListTable : NSObject {

	WDDocument* mDocument;
	NSMutableArray* mLists;
	NSMutableDictionary* mListMapById;
	WDList* mNullList;
	WDList* mDefaultList;

}
-(void)dealloc;
-(id)description;
-(id)initWithDocument:(id)arg1 ;
-(id)listWithListId:(int)arg1 ;
-(id)lists;
-(id)addListWithListId:(int)arg1 listDefinitionId:(int)arg2 ;
-(unsigned long long)listCount;
-(id)listAt:(unsigned long long)arg1 ;
@end

