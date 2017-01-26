/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@class TTParagraphStyle;

@interface ICTrackedParagraph : NSObject {

	TTParagraphStyle* _paragraph;
	NSRange _characterRange;

}

@property (nonatomic,retain) TTParagraphStyle * paragraph;              //@synthesize paragraph=_paragraph - In the implementation block
@property (assign,nonatomic) NSRange characterRange;                    //@synthesize characterRange=_characterRange - In the implementation block
-(id)description;
-(NSRange)characterRange;
-(void)setParagraph:(TTParagraphStyle *)arg1 ;
-(void)setCharacterRange:(NSRange)arg1 ;
-(TTParagraphStyle *)paragraph;
@end

