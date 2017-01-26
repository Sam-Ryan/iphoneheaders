/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSObservable.h>
#import <libobjc.A.dylib/NSObserver.h>

@class NSString, NSCalendar, NSDate, NSNumberFormatter;

@interface NSDateComponentsFormatter : NSFormatter <NSObservable, NSObserver> {

	opaque_pthread_mutex_t _lock;
	void* _fmt;
	void* _unused;
	NSString* _fmtLocaleIdent;
	NSCalendar* _calendar;
	NSDate* _referenceDate;
	NSNumberFormatter* _unitFormatter;
	unsigned long long _allowedUnits;
	long long _formattingContext;
	long long _unitsStyle;
	unsigned long long _zeroFormattingBehavior;
	long long _maximumUnitCount;
	BOOL _allowsFractionalUnits;
	BOOL _collapsesLargestUnit;
	BOOL _includesApproximationPhrase;
	BOOL _includesTimeRemainingPhrase;
	void* _reserved;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) long long unitsStyle; 
@property (assign) unsigned long long allowedUnits; 
@property (assign) unsigned long long zeroFormattingBehavior; 
@property (copy) NSCalendar * calendar; 
@property (assign) BOOL allowsFractionalUnits; 
@property (assign) long long maximumUnitCount; 
@property (assign) BOOL collapsesLargestUnit; 
@property (assign) BOOL includesApproximationPhrase; 
@property (assign) BOOL includesTimeRemainingPhrase; 
@property (assign) long long formattingContext; 
@property (copy) NSDate * referenceDate; 
+(id)_maps_stringFromTimeInterval:(double)arg1 ;
+(id)_maps_stringLongFromTimeInterval:(double)arg1 ;
+(id)localizedStringFromDateComponents:(id)arg1 unitsStyle:(long long)arg2 ;
-(void)receiveObservedValue:(id)arg1 ;
-(long long)formattingContext;
-(id)stringFromDate:(id)arg1 toDate:(id)arg2 ;
-(BOOL)_mayDecorateAttributedStringForObjectValue:(id)arg1 ;
-(NSDate *)referenceDate;
-(void)_NSDateComponentsFormatter_commonInit;
-(void)_flushFormatterCache;
-(id)_calendarOrCanonicalCalendar;
-(id)_stringFromDateComponents:(id)arg1 ;
-(id)_calendarFromDateComponents:(id)arg1 ;
-(id)_canonicalizedDateComponents:(id)arg1 withCalendar:(id)arg2 usedUnits:(unsigned long long*)arg3 ;
-(void)_ensureUnitFormatterWithLocale:(id)arg1 ;
-(void)setAllowsFractionalUnits:(BOOL)arg1 ;
-(void)setCollapsesLargestUnit:(BOOL)arg1 ;
-(void)setIncludesApproximationPhrase:(BOOL)arg1 ;
-(void)setIncludesTimeRemainingPhrase:(BOOL)arg1 ;
-(void)setMaximumUnitCount:(long long)arg1 ;
-(unsigned long long)allowedUnits;
-(long long)maximumUnitCount;
-(BOOL)allowsFractionalUnits;
-(BOOL)collapsesLargestUnit;
-(long long)unitsStyle;
-(unsigned long long)zeroFormattingBehavior;
-(BOOL)includesApproximationPhrase;
-(BOOL)includesTimeRemainingPhrase;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setFormattingContext:(long long)arg1 ;
-(id)stringFromDateComponents:(id)arg1 ;
-(id)_stringFromTimeInterval:(double)arg1 ;
-(void)setAllowedUnits:(unsigned long long)arg1 ;
-(void)setUnitsStyle:(long long)arg1 ;
-(void)setZeroFormattingBehavior:(unsigned long long)arg1 ;
-(id)stringFromTimeInterval:(double)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(void)finalize;
@end
