/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray, NSArray;

@interface RMList : NSObject {

	NSMutableArray* _items;

}

@property (readonly) NSArray * listItems;              //@synthesize items=_items - In the implementation block
@property (readonly) CGPDFPageRef page; 
-(CGRect)bounds;
-(void)addItem:(id)arg1 ;
-(CGPDFPageRef)page;
-(NSArray *)listItems;
@end

