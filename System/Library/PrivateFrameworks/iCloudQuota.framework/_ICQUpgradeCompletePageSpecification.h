/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCloudQuota/_ICQPageSpecification.h>

@class NSString, ICQLink;

@interface _ICQUpgradeCompletePageSpecification : _ICQPageSpecification {

	NSString* _title;
	NSString* _message;
	ICQLink* _doneLink;

}

@property (nonatomic,retain) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) ICQLink * doneLink;              //@synthesize doneLink=_doneLink - In the implementation block
+(id)upgradeCompletePageSpecificationSampleForLevel:(long long)arg1 ;
-(id)pageIdentifier;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setDoneLink:(ICQLink *)arg1 ;
-(BOOL)hasCancelButtonForBack;
-(ICQLink *)doneLink;
@end

