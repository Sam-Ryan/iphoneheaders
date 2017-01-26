/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVGetAccountPropertiesTaskGroup.h>

@class NSSet;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {

	NSSet* _addressBookHomes;
	NSSet* _directoryGatewayURLs;

}

@property (nonatomic,readonly) NSSet * addressBookHomes;                  //@synthesize addressBookHomes=_addressBookHomes - In the implementation block
@property (nonatomic,readonly) NSSet * directoryGatewayURLs;              //@synthesize directoryGatewayURLs=_directoryGatewayURLs - In the implementation block
-(void)dealloc;
-(id)description;
-(id)directoryGatewayURL;
-(NSSet *)addressBookHomes;
-(NSSet *)directoryGatewayURLs;
-(id)_copyAccountPropertiesPropFindElements;
-(void)_setPropertiesFromParsedResponses:(id)arg1 ;
-(id)homeSet;
@end

