/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSNumber;

@interface MLMovieArtist : NSObject <NSCopying> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,copy) NSString * artistName; 
@property (nonatomic,copy) NSNumber * ITunesStoreIdentifier; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setValueCopy:(id)arg1 forKey:(id)arg2 ;
-(id)initWithMovieArtistDictionary:(id)arg1 ;
-(void)setITunesStoreIdentifier:(NSNumber *)arg1 ;
-(id)copyMovieArtistDictionary;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(NSNumber *)ITunesStoreIdentifier;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
@end

