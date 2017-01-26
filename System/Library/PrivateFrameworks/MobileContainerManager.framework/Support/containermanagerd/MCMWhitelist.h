/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:17:13 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/Support/containermanagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <containermanagerd/containermanagerd-Structs.h>
@class NSDictionary;

@interface MCMWhitelist : NSObject {

	NSDictionary* _systemWhitelist;
	NSDictionary* _systemGroupWhitelist;

}

@property (nonatomic,retain) NSDictionary * systemWhitelist;                   //@synthesize systemWhitelist=_systemWhitelist - In the implementation block
@property (nonatomic,retain) NSDictionary * systemGroupWhitelist;              //@synthesize systemGroupWhitelist=_systemGroupWhitelist - In the implementation block
+(id)sharedWhitelist;
-(id)wellknownSystemGroupContainerForId:(id)arg1 ;
-(BOOL)systemGroupContainerIdIsWellknown:(id)arg1 ;
-(id)initWithSystemContainerMapping:(NSDictionary*)arg1 systemGroupContainerMapping:(NSDictionary*)arg2 ;
-(BOOL)systemContainerIdIsWellknown:(id)arg1 ;
-(id)wellknownContainerForId:(id)arg1 class:(unsigned long long)arg2 ;
-(id)wellknownSystemGroupContainers;
-(id)wellknownSystemContainers;
-(void)setSystemWhitelist:(NSDictionary *)arg1 ;
-(NSDictionary *)systemWhitelist;
-(BOOL)containerIdIsWellknown:(id)arg1 class:(unsigned long long)arg2 ;
-(void)setSystemGroupWhitelist:(NSDictionary *)arg1 ;
-(NSDictionary *)systemGroupWhitelist;
-(id)wellknownSystemContainerForId:(id)arg1 ;
@end

