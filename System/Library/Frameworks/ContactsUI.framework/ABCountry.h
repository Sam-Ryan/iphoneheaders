/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ABCountry : NSObject {

	NSString* _countryCode;
	NSString* _countryName;
	NSString* _phoneticCountryName;

}

@property (nonatomic,copy) NSString * countryCode;                      //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * countryName;                      //@synthesize countryName=_countryName - In the implementation block
@property (nonatomic,copy) NSString * phoneticCountryName;              //@synthesize phoneticCountryName=_phoneticCountryName - In the implementation block
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)phoneticCountryName;
-(void)setPhoneticCountryName:(NSString *)arg1 ;
-(void)setCountryName:(NSString *)arg1 ;
-(NSString *)countryName;
@end

