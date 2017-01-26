/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <MobileSlideShow/PLSTransportCoding.h>

@class NSString, NSDictionary;

@interface PLSItem : NSObject <NSCoding, PLSTransportCoding> {

	NSString* _uuid;
	NSDictionary* _hostInfo;
	id _userInfo;

}

@property (nonatomic,retain) NSString * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSDictionary * hostInfo;              //@synthesize hostInfo=_hostInfo - In the implementation block
@property (nonatomic,retain) id userInfo;                          //@synthesize userInfo=_userInfo - In the implementation block
-(id)initFromPropertyList:(id)arg1 ;
-(id)_itemType;
-(void)setHostInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)hostInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(id)initWithUUID:(id)arg1 ;
-(NSString *)uuid;
-(id)propertyList;
-(void)setUuid:(NSString *)arg1 ;
@end

