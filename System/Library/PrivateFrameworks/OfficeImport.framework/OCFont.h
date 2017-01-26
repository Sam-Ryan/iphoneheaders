/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OCFontSubfamily;

@interface OCFont : NSObject {

	BOOL _bold;
	BOOL _italic;
	OCFontSubfamily* _subfamily;

}

@property (nonatomic,readonly) OCFontSubfamily * subfamily;              //@synthesize subfamily=_subfamily - In the implementation block
@property (assign,nonatomic) BOOL bold;                                  //@synthesize bold=_bold - In the implementation block
@property (assign,nonatomic) BOOL italic;                                //@synthesize italic=_italic - In the implementation block
+(id)fontWithSubfamily:(id)arg1 bold:(BOOL)arg2 italic:(BOOL)arg3 ;
-(void)dealloc;
-(BOOL)bold;
-(BOOL)italic;
-(void)setBold:(BOOL)arg1 ;
-(void)setItalic:(BOOL)arg1 ;
-(id)initWithSubfamily:(id)arg1 bold:(BOOL)arg2 italic:(BOOL)arg3 ;
-(OCFontSubfamily *)subfamily;
@end

