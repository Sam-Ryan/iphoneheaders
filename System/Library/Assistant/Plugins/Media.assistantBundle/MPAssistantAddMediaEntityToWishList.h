/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPAddMediaEntityToWishList.h>
#import <Accessibility/AFServiceCommand.h>

@class NSString;

@interface MPAssistantAddMediaEntityToWishList : SAMPAddMediaEntityToWishList <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_addTrackToWishListWithStoreID:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_addRadioTrackToWishListWithStoreID:(unsigned long long)arg1 stationHash:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fetchCurrentRadioTrackInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

