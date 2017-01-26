/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:01:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Recents/Plugins/GenericAddressHandler.addresshandler/GenericAddressHandler
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GenericAddressHandler/CRAddressHandler.h>

@class NSString;

@interface CRGenericAddressHandler : NSObject <CRAddressHandler>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)syncKeyForAddress:(id)arg1 kind:(id)arg2 ;
-(id)supportedAddressKinds;
-(id)externalAddressFromAddress:(id)arg1 kind:(id)arg2 ;
-(id)addressFromExternalAddress:(id)arg1 kind:(id)arg2 ;
@end

