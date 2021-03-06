/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUModelObject.h>

@class NSString, MPUModelArtist, NSDate;

@interface MPUModelAlbum : MPUModelObject {

	BOOL _explicitAlbum;
	BOOL _compilation;
	NSString* _title;
	MPUModelArtist* _artist;
	unsigned long long _trackCount;
	unsigned long long _discCount;
	NSDate* _releaseDate;
	/*^block*/id _artworkCatalogBlock;

}

@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) MPUModelArtist * artist;                                //@synthesize artist=_artist - In the implementation block
@property (assign,nonatomic) unsigned long long trackCount;                          //@synthesize trackCount=_trackCount - In the implementation block
@property (assign,nonatomic) unsigned long long discCount;                           //@synthesize discCount=_discCount - In the implementation block
@property (assign,getter=isExplicitAlbum,nonatomic) BOOL explicitAlbum;              //@synthesize explicitAlbum=_explicitAlbum - In the implementation block
@property (assign,getter=isCompilation,nonatomic) BOOL compilation;                  //@synthesize compilation=_compilation - In the implementation block
@property (nonatomic,copy) NSDate * releaseDate;                                     //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,copy) id artworkCatalogBlock;                                   //@synthesize artworkCatalogBlock=_artworkCatalogBlock - In the implementation block
+(id)__artist__KEY;
+(id)__trackCount__KEY;
+(id)__discCount__KEY;
+(id)__explicitAlbum__KEY;
+(id)__compilation__KEY;
+(id)__releaseDate__KEY;
+(id)__artworkCatalogBlock__KEY;
+(id)__title__KEY;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)artworkCatalogBlock;
-(BOOL)isExplicitAlbum;
-(void)setArtworkCatalogBlock:(id)arg1 ;
-(void)setArtist:(MPUModelArtist *)arg1 ;
-(unsigned long long)trackCount;
-(MPUModelArtist *)artist;
-(void)setTrackCount:(unsigned long long)arg1 ;
-(id)artworkCatalog;
-(NSDate *)releaseDate;
-(unsigned long long)discCount;
-(BOOL)isCompilation;
-(id)descriptionWithType:(unsigned long long)arg1 ;
-(void)setDiscCount:(unsigned long long)arg1 ;
-(void)setExplicitAlbum:(BOOL)arg1 ;
-(void)setCompilation:(BOOL)arg1 ;
-(void)setReleaseDate:(NSDate *)arg1 ;
@end

