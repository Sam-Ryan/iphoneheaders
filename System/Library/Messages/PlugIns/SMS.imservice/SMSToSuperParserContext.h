/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:17:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMFoundation/IMHTMLToSuperParserContext.h>

@class NSMutableArray, SMSTextPart, NSArray;

@interface SMSToSuperParserContext : IMHTMLToSuperParserContext {

	NSMutableArray* _orderedParts;
	SMSTextPart* _currentTextPart;

}

@property (nonatomic,retain,readonly) NSArray * orderedParts;              //@synthesize orderedParts=_orderedParts - In the implementation block
-(void)dealloc;
-(id)name;
-(NSArray *)orderedParts;
-(void)_addPart:(id)arg1 ;
@end

