/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSString, SASTTemplatePercentageRating;

@interface SASTMovieStatItem : AceObject <SASTTemplateItem>

@property (nonatomic,copy) NSString * contentRating; 
@property (nonatomic,retain) SASTTemplatePercentageRating * reviewerRating; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)movieStatItem;
+(id)movieStatItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SASTTemplatePercentageRating *)reviewerRating;
-(void)setReviewerRating:(SASTTemplatePercentageRating *)arg1 ;
-(void)setContentRating:(NSString *)arg1 ;
-(NSString *)contentRating;
-(id)encodedClassName;
@end

