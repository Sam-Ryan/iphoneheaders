/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray;

@interface TSUDateFormatCategory : NSObject {

	CFDateFormatterRef mInitialFormatter;
	NSMutableArray* mEntries;

}
-(void)dealloc;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 forceAllowAMPM:(BOOL)arg2 successfulFormatString:(const _CFString*)arg3 perfect:(BOOL*)arg4 ;
-(id)initWithInitialPattern:(id)arg1 locale:(CFLocaleRef)arg2 ;
-(void)addSeparator:(unsigned short)arg1 format:(id)arg2 locale:(CFLocaleRef)arg3 ;
-(id)entryForSeparator:(unsigned short)arg1 ;
@end

