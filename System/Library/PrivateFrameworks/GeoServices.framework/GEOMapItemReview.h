/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol GEOMapItemReview <NSObject>
@property (getter=_score,nonatomic,readonly) double score; 
@property (getter=_maxScore,nonatomic,readonly) double maxScore; 
@property (getter=_normalizedScore,nonatomic,readonly) double normalizedScore; 
@property (getter=_localizedSnippet,nonatomic,readonly) NSString * localizedSnippet; 
@property (getter=_date,nonatomic,readonly) NSDate * date; 
@property (getter=_reviewerName,nonatomic,readonly) NSString * reviewerName; 
@property (getter=_reviewerImageURLString,nonatomic,readonly) NSString * reviewerImageURLString; 
@property (getter=_identifier,nonatomic,readonly) NSString * identifier; 
@required
-(double)_score;
-(double)_maxScore;
-(id)_date;
-(id)_reviewerImageURLString;
-(id)_reviewerName;
-(id)_localizedSnippet;
-(double)_normalizedScore;
-(id)_identifier;

@end

