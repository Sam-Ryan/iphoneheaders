/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:01:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol CNVCardNameDataSource <NSObject>
@property (readonly) NSString * firstName; 
@property (readonly) NSString * lastName; 
@property (readonly) NSString * middleName; 
@property (readonly) NSString * title; 
@property (readonly) NSString * suffix; 
@property (readonly) NSString * companyName; 
@property (readonly) BOOL isCompany; 
@required
-(NSString *)middleName;
-(NSString *)title;
-(NSString *)companyName;
-(BOOL)isCompany;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)suffix;

@end

