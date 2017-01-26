/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SBSApplicationShortcutIcon.h>

@class NSString, NSData;

@interface SBSApplicationShortcutContactIcon : SBSApplicationShortcutIcon {

	NSString* _contactIdentifier;
	NSString* _firstName;
	NSString* _lastName;
	NSData* _imageData;

}

@property (nonatomic,readonly) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                      //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                       //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSData * imageData;                        //@synthesize imageData=_imageData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithContactIdentifier:(id)arg1 ;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 ;
-(NSString *)contactIdentifier;
-(NSData *)imageData;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageData:(id)arg3 ;
@end

