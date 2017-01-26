/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Restaurants/Restaurants-Structs.h>
@class NSMutableDictionary, NSString;

@interface SiriRestaurantsLogoProvider : NSObject {

	NSMutableDictionary* _resourceDict;
	NSString* _providerKey;
	NSString* _displayName;

}

@property (nonatomic,copy) NSString * providerKey;              //@synthesize providerKey=_providerKey - In the implementation block
@property (nonatomic,copy) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
-(id)_logoInfoForType:(long long)arg1 ;
-(id)_logoInfoIfExistsForType:(long long)arg1 ;
-(void)getLogoForType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(CGSize)logoSizeForType:(long long)arg1 ;
-(NSString *)providerKey;
-(void)setProviderKey:(NSString *)arg1 ;
-(void)setImageResourceName:(id)arg1 pressed:(id)arg2 punchOut:(id)arg3 forType:(long long)arg4 ;
-(void)setImageResourceWithKey:(id)arg1 pressedKey:(id)arg2 punchOut:(id)arg3 type:(long long)arg4 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
@end

