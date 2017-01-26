/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, SSItemArtworkImage;

@interface SUItemContentRating : NSObject <NSCopying> {

	NSDictionary* _dictionary;
	long long _rank;
	NSString* _ratingDescription;
	NSString* _ratingLabel;
	long long _ratingSystem;
	SSItemArtworkImage* _ratingSystemLogo;
	BOOL _shouldHideWhenRestricted;

}

@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (assign,nonatomic) long long rank;                                               //@synthesize rank=_rank - In the implementation block
@property (nonatomic,copy) NSString * ratingDescription;                                   //@synthesize ratingDescription=_ratingDescription - In the implementation block
@property (nonatomic,copy) NSString * ratingLabel;                                         //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (assign,nonatomic) long long ratingSystem;                                       //@synthesize ratingSystem=_ratingSystem - In the implementation block
@property (nonatomic,copy) SSItemArtworkImage * ratingSystemLogo;                          //@synthesize ratingSystemLogo=_ratingSystemLogo - In the implementation block
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted; 
@property (assign,nonatomic) BOOL shouldHideWhenRestricted;                                //@synthesize shouldHideWhenRestricted=_shouldHideWhenRestricted - In the implementation block
+(long long)ratingSystemFromString:(id)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(void)setRank:(long long)arg1 ;
-(long long)rank;
-(BOOL)_isRatingSystemForApps:(long long)arg1 ;
-(BOOL)_isRatingSystemForMovies:(long long)arg1 ;
-(BOOL)_isRatingSystemForTV:(long long)arg1 ;
-(BOOL)_isRatingSystemForMusic:(long long)arg1 ;
-(NSString *)ratingDescription;
-(void)setRatingDescription:(NSString *)arg1 ;
-(NSString *)ratingLabel;
-(void)setRatingLabel:(NSString *)arg1 ;
-(long long)ratingSystem;
-(void)setRatingSystem:(long long)arg1 ;
-(BOOL)shouldHideWhenRestricted;
-(SSItemArtworkImage *)ratingSystemLogo;
-(void)setRatingSystemLogo:(SSItemArtworkImage *)arg1 ;
-(void)setShouldHideWhenRestricted:(BOOL)arg1 ;
-(BOOL)isRestricted;
-(BOOL)isExplicitContent;
@end

