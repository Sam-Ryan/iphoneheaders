/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMFSABaseModel.h>

@class SAFmfLocation, UIImage;

@interface FMFSALocation : FMFSABaseModel {

	SAFmfLocation* siriLocation;
	UIImage* _cachedFriendImage;

}

@property (nonatomic,retain) SAFmfLocation * siriLocation; 
@property (nonatomic,retain) UIImage * cachedFriendImage;               //@synthesize cachedFriendImage=_cachedFriendImage - In the implementation block
+(id)friendImageForPersonAttribute:(id)arg1 ;
+(id)friendImageForSAPerson:(id)arg1 ;
+(id)locationWithHandle:(id)arg1 saPerson:(id)arg2 andDictionary:(id)arg3 ;
+(id)locationWithSiriLocation:(id)arg1 ;
+(id)bundle;
-(id)friendHandle;
-(id)friendImage;
-(UIImage *)cachedFriendImage;
-(id)unformattedHandle;
-(id)prettyTimestamp;
-(id)friendLocation:(BOOL)arg1 ;
-(id)friendEmail;
-(SAFmfLocation *)siriLocation;
-(id)unformatPhoneNumber:(id)arg1 ;
-(id)distanceCalculator;
-(void)setCachedFriendImage:(UIImage *)arg1 ;
-(id)friendPhone;
-(void)decodeHandle:(id)arg1 saPerson:(id)arg2 withDictionary:(id)arg3 ;
-(void)setSiriLocation:(SAFmfLocation *)arg1 ;
-(id)initWithSiriLocation:(id)arg1 ;
-(id)initWithHandle:(id)arg1 saPerson:(id)arg2 andDictionary:(id)arg3 ;
-(id)personForEmailFromAddressBook:(id)arg1 ;
-(id)personForPhoneFromAddressBook:(id)arg1 ;
-(id)friendHandlePretty;
-(id)friendName;
-(id)numberFormatter;
-(BOOL)hasCoordinate;
-(id)distanceFromLocation:(id)arg1 ;
-(BOOL)isPhone;
-(id)formatPhoneNumber:(id)arg1 ;
@end

