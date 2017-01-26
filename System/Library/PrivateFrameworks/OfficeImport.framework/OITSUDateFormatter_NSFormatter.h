/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSString, TSULocale;

@interface OITSUDateFormatter_NSFormatter : NSFormatter {

	NSString* mPreferredFormat;
	BOOL isDateOnly;
	BOOL isTimeOnly;
	TSULocale* locale;

}

@property (assign,nonatomic) BOOL isDateOnly; 
@property (assign,nonatomic) BOOL isTimeOnly; 
@property (nonatomic,retain) TSULocale * locale; 
@property (nonatomic,retain) NSString * preferredFormat; 
-(void)dealloc;
-(id)init;
-(void)setLocale:(TSULocale *)arg1 ;
-(TSULocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)isDateOnly;
-(BOOL)isTimeOnly;
-(void)setPreferredFormat:(NSString *)arg1 ;
-(NSString *)preferredFormat;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(void)setIsDateOnly:(BOOL)arg1 ;
-(void)setIsTimeOnly:(BOOL)arg1 ;
@end
