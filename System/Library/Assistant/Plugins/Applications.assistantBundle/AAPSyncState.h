/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/Applications.assistantBundle/Applications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Applications/Applications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, AAPSyncPrimitiveAnchor, AAPSyncAnchor, NSSet, NSArray;

@interface AAPSyncState : NSObject <NSCopying, NSCoding> {

	NSString* _validity;
	long long _version;
	AAPSyncPrimitiveAnchor* _keyAnchor;
	AAPSyncAnchor* _startAnchor;
	AAPSyncAnchor* _stopAnchor;
	NSSet* _apps;
	NSArray* _deletes;

}

@property (nonatomic,copy,readonly) NSString * validity;                             //@synthesize validity=_validity - In the implementation block
@property (nonatomic,readonly) long long version;                                    //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) AAPSyncPrimitiveAnchor * keyAnchor;              //@synthesize keyAnchor=_keyAnchor - In the implementation block
@property (nonatomic,copy,readonly) AAPSyncAnchor * startAnchor;                     //@synthesize startAnchor=_startAnchor - In the implementation block
@property (nonatomic,copy,readonly) AAPSyncAnchor * stopAnchor;                      //@synthesize stopAnchor=_stopAnchor - In the implementation block
@property (nonatomic,copy,readonly) NSSet * apps;                                    //@synthesize apps=_apps - In the implementation block
@property (nonatomic,copy,readonly) NSArray * deletes;                               //@synthesize deletes=_deletes - In the implementation block
-(id)initWithValidity:(id)arg1 version:(long long)arg2 keyAnchor:(id)arg3 startAnchor:(id)arg4 stopAnchor:(id)arg5 apps:(id)arg6 deletes:(id)arg7 ;
-(AAPSyncPrimitiveAnchor *)keyAnchor;
-(AAPSyncAnchor *)stopAnchor;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)version;
-(void)_validate;
-(NSArray *)deletes;
-(NSSet *)apps;
-(NSString *)validity;
-(AAPSyncAnchor *)startAnchor;
@end

