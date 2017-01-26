/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber, NSString;

@interface ASProvisionResponse : ASItem {

	NSArray* _policies;
	NSNumber* _status;
	BOOL _remoteWipe;
	NSString* _policyType;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
-(id)policyType;
-(id)init;
-(id)description;
-(id)status;
-(id)policies;
-(id)asParseRules;
-(void)_setPolicies:(id)arg1 ;
-(void)_setRemoteWipe:(id)arg1 ;
-(void)setPolicyType:(id)arg1 ;
-(BOOL)remoteWipe;
-(id)initWithPolicyType:(id)arg1 ;
-(void)_setStatus:(id)arg1 ;
@end

