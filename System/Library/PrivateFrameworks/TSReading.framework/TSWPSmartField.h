/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPObject.h>
#import <TSReading/TSKDocumentObject.h>
#import <TSReading/TSPCopying.h>

@class TSWPStorage;

@interface TSWPSmartField : TSPObject <TSKDocumentObject, TSPCopying> {

	TSWPStorage* _parentStorage;
	unsigned long long _lastTableIndex;

}

@property (assign,nonatomic) TSWPStorage * parentStorage;                //@synthesize parentStorage=_parentStorage - In the implementation block
@property (nonatomic,readonly) unsigned attributeArrayKind; 
@property (nonatomic,readonly) int styleAttributeArrayKind; 
@property (nonatomic,readonly) NSRange range; 
+(id)defaultFieldStyleIdentifier;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(TSWPStorage *)parentStorage;
-(void)setParentStorage:(TSWPStorage *)arg1 ;
-(unsigned)attributeArrayKind;
-(int)styleAttributeArrayKind;
-(BOOL)allowsPasteAsSmartField;
-(BOOL)canCopy:(NSRange)arg1 ;
-(void)dealloc;
-(id)text;
-(id)initWithContext:(id)arg1 ;
-(NSRange)range;
-(BOOL)allowsEditing;
-(int)elementKind;
@end

