/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray;

@interface RWIProtocolCSSPseudoIdMatches : RWIProtocolJSONObject

@property (assign,nonatomic) int pseudoId; 
@property (nonatomic,copy) NSArray * matches; 
-(void)setPseudoId:(int)arg1 ;
-(id)initWithPseudoId:(int)arg1 matches:(id)arg2 ;
-(int)pseudoId;
-(NSArray *)matches;
-(void)setMatches:(NSArray *)arg1 ;
@end
