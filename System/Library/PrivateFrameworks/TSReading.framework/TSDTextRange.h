/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKit/UITextRange.h>

@interface TSDTextRange : UITextRange {

	NSRange _range;
	BOOL _eolAffinity;
	float _preferredStartPosition;
	float _preferredEndPosition;

}

@property (assign,nonatomic) NSRange range;                               //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) BOOL isAtEndOfLine;                          //@synthesize eolAffinity=_eolAffinity - In the implementation block
@property (nonatomic,readonly) float preferredStartPosition;              //@synthesize preferredStartPosition=_preferredStartPosition - In the implementation block
@property (nonatomic,readonly) float preferredEndPosition;                //@synthesize preferredEndPosition=_preferredEndPosition - In the implementation block
+(id)textRangeWithRange:(NSRange)arg1 ;
+(id)textRangeWithRange:(NSRange)arg1 eolAffinity:(BOOL)arg2 preferredStartPosition:(float)arg3 preferredEndPosition:(float)arg4 ;
-(id)initWithRange:(NSRange)arg1 eolAffinity:(BOOL)arg2 preferredStartPosition:(float)arg3 preferredEndPosition:(float)arg4 ;
-(BOOL)isAtEndOfLine;
-(void)setIsAtEndOfLine:(BOOL)arg1 ;
-(float)preferredStartPosition;
-(float)preferredEndPosition;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(id)start;
-(id)end;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(id)initWithRange:(NSRange)arg1 ;
@end

