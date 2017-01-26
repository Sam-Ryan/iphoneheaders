/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:15:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AOSConfigurationManager : NSObject {

	NSMutableDictionary* _theConfig;
	NSMutableDictionary* _serviceDict;
	BOOL _hasLegacySubscriptions;

}
+(id)sharedInstance;
-(void)_readConfigs;
-(void)_readDefaultsPlistConfiguration:(id)arg1 intoConfiguration:(id)arg2 ;
-(void)_readLocalDefaultsIntoConfig:(id)arg1 ;
-(id)urlForRequestType:(id)arg1 ;
-(id)serviceProperty:(id)arg1 forServiceName:(id)arg2 ;
-(BOOL)hasLegacySubscriptions;
-(void)removeLegacySubscriptions;
-(id)init;
-(id)objectForKey:(id)arg1 ;
@end

