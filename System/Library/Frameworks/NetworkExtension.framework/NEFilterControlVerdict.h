/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEFilterNewFlowVerdict.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEFilterControlVerdict : NEFilterNewFlowVerdict <NSSecureCoding, NSCopying> {

	BOOL _updateRules;
	BOOL _handledByDataProvider;

}

@property (assign) BOOL updateRules;                        //@synthesize updateRules=_updateRules - In the implementation block
@property (assign) BOOL handledByDataProvider;              //@synthesize handledByDataProvider=_handledByDataProvider - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)updateRules;
+(id)allowVerdictWithUpdateRules:(BOOL)arg1 ;
+(id)dropVerdictWithUpdateRules:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)updateRules;
-(BOOL)handledByDataProvider;
-(void)setUpdateRules:(BOOL)arg1 ;
-(void)setHandledByDataProvider:(BOOL)arg1 ;
@end

