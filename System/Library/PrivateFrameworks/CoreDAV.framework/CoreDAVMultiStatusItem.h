/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableArray, CoreDAVLeafItem, NSSet;

@interface CoreDAVMultiStatusItem : CoreDAVItem {

	NSMutableArray* _orderedResponses;
	CoreDAVLeafItem* _responseDescription;

}

@property (nonatomic,readonly) NSSet * responses; 
@property (nonatomic,retain) NSMutableArray * orderedResponses;                  //@synthesize orderedResponses=_orderedResponses - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * responseDescription;              //@synthesize responseDescription=_responseDescription - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSMutableArray *)orderedResponses;
-(void)setOrderedResponses:(NSMutableArray *)arg1 ;
-(NSSet *)responses;
-(void)addResponse:(id)arg1 ;
-(void)setResponseDescription:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)responseDescription;
@end

