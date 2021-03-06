/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface ACUIAppDescription : NSObject {

	NSString* _name;
	NSString* _publisher;
	NSString* _bundleID;
	NSString* _persistentID;
	UIImage* _icon;

}

@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * publisher;                 //@synthesize publisher=_publisher - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,retain) UIImage * icon;                     //@synthesize icon=_icon - In the implementation block
-(void)setPersistentID:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setIcon:(UIImage *)arg1 ;
-(UIImage *)icon;
-(void)setPublisher:(NSString *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(NSString *)persistentID;
-(NSString *)publisher;
@end

