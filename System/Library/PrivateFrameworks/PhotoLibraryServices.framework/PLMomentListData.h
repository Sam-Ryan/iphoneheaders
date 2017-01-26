/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:32 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSData, NSOrderedSet, NSArray;


@protocol PLMomentListData <NSObject>
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSDate * representativeDate; 
@property (assign,nonatomic) short granularityLevel; 
@property (nonatomic,retain,readonly) NSObject*<NSCopying> uniqueObjectID; 
@property (assign,nonatomic) int sortIndex; 
@property (nonatomic,retain) NSData * reverseLocationData; 
@property (assign,nonatomic) BOOL reverseLocationDataIsValid; 
@property (assign,nonatomic) short generationType; 
@property (nonatomic,retain) NSOrderedSet * moments; 
@property (nonatomic,retain) NSArray * userTitles; 
@optional
-(id)momentListDebugDescription;

@required
-(void)delete;
-(void)setReverseLocationData:(id)arg1;
-(BOOL)reverseLocationDataIsValid;
-(void)setReverseLocationDataIsValid:(BOOL)arg1;
-(NSObject*<NSCopying>)uniqueObjectID;
-(NSOrderedSet *)moments;
-(void)setGranularityLevel:(short)arg1;
-(void)removeMoments:(id)arg1;
-(void)addMoments:(id)arg1;
-(void)setSortIndex:(int)arg1;
-(short)generationType;
-(void)addMomentToFront:(id)arg1;
-(void)setRepresentativeDate:(id)arg1;
-(void)setGenerationType:(short)arg1;
-(short)granularityLevel;
-(void)setMoments:(id)arg1;
-(int)sortIndex;
-(void)setUserTitles:(id)arg1;
-(NSArray *)userTitles;
-(void)setEndDate:(id)arg1;
-(void)setStartDate:(id)arg1;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSData *)reverseLocationData;
-(BOOL)isDeleted;
-(NSDate *)representativeDate;

@end

