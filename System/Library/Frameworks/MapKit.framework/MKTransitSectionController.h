/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOTransitSystem;
@class MKMapItem, MKTransitSectionPagingFilter, NSSet, NSDate;

@interface MKTransitSectionController : NSObject {

	MKMapItem* _mapItem;
	BOOL _limitNumCellsOnly;
	MKTransitSectionPagingFilter* _pagingFilter;
	NSSet* _linesToShow;
	unsigned long long _numberOfRows;
	unsigned long long _numberOfFilteredRows;
	unsigned long long _numberOfFilteredLines;
	BOOL _needsBuildRows;
	id<GEOTransitSystem> _system;
	NSDate* _departureCutoffDate;
	NSDate* _expiredHighFrequencyCutoffDate;
	NSSet* _incidentEntitiesToExclude;

}

@property (nonatomic,retain) id<GEOTransitSystem> system;                                      //@synthesize system=_system - In the implementation block
@property (nonatomic,retain) NSDate * departureCutoffDate;                                     //@synthesize departureCutoffDate=_departureCutoffDate - In the implementation block
@property (nonatomic,retain) NSDate * expiredHighFrequencyCutoffDate;                          //@synthesize expiredHighFrequencyCutoffDate=_expiredHighFrequencyCutoffDate - In the implementation block
@property (nonatomic,retain) NSSet * incidentEntitiesToExclude;                                //@synthesize incidentEntitiesToExclude=_incidentEntitiesToExclude - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFilteredRows;                        //@synthesize numberOfFilteredRows=_numberOfFilteredRows - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFilteredLines;                       //@synthesize numberOfFilteredLines=_numberOfFilteredLines - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfAdditionalCellsPerPage; 
-(id)init;
-(unsigned long long)numberOfRows;
-(id<GEOTransitSystem>)system;
-(void)setDepartureCutoffDate:(NSDate *)arg1 ;
-(BOOL)hasFilteredLines;
-(NSSet *)incidentEntitiesToExclude;
-(void)setSystem:(id<GEOTransitSystem>)arg1 ;
-(unsigned long long)numberOfAdditionalCellsPerPage;
-(unsigned long long)numberOfFilteredLines;
-(void)_setNeedsBuildRows;
-(void)_buildRows;
-(id)linesToShow;
-(NSDate *)departureCutoffDate;
-(void)setExpiredHighFrequencyCutoffDate:(NSDate *)arg1 ;
-(BOOL)hasFilteredRows;
-(void)setIncidentEntitiesToExclude:(NSSet *)arg1 ;
-(id)initWithMapItem:(id)arg1 system:(id)arg2 limitNumCellsOnly:(BOOL)arg3 ;
-(NSDate *)expiredHighFrequencyCutoffDate;
-(void)incrementPagingFilter;
-(unsigned long long)numberOfFilteredRows;
-(BOOL)_needsBuildRows;
@end
