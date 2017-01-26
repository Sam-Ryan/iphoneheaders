/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXAction.h>

@class NSNumber, NSString;

@interface SXProductAction : SXAction {

	NSNumber* productIdentifier;
	NSString* affiliateIdentifier;
	NSString* campaignIdentifier;

}

@property (nonatomic,readonly) NSNumber * productIdentifier; 
@property (nonatomic,retain) NSString * affiliateIdentifier; 
@property (nonatomic,retain) NSString * campaignIdentifier; 
-(Class)handlerClass;
-(id)initWithProductIdentifier:(id)arg1 addition:(id)arg2 ;
-(void)setCampaignIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAddition:(id)arg1 ;
-(void)setAffiliateIdentifier:(NSString *)arg1 ;
-(NSString *)affiliateIdentifier;
-(NSString *)campaignIdentifier;
-(NSNumber *)productIdentifier;
@end
