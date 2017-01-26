/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:17:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableString;

@interface SMSTextPart : NSObject {

	NSString* _contentLocation;
	NSMutableString* _text;

}

@property (nonatomic,retain,readonly) NSString * contentLocation;              //@synthesize contentLocation=_contentLocation - In the implementation block
@property (nonatomic,retain,readonly) NSString * text;                         //@synthesize text=_text - In the implementation block
-(void)dealloc;
-(NSString *)text;
-(NSString *)contentLocation;
-(id)initWithContentLocation:(id)arg1 ;
-(void)appendText:(id)arg1 ;
@end

