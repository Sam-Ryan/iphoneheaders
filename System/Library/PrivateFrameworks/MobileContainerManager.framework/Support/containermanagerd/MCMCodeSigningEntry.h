/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:17:13 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/Support/containermanagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface MCMCodeSigningEntry : NSObject {

	BOOL _invalid;
	BOOL _placeholder;
	BOOL _registeredByCaller;
	NSDictionary* _codeSigningInfo;
	NSArray* _childBundleIdentifiers;
	unsigned long long _dataContainerClass;

}

@property (nonatomic,retain) NSDictionary * codeSigningInfo;                                   //@synthesize codeSigningInfo=_codeSigningInfo - In the implementation block
@property (nonatomic,retain) NSArray * childBundleIdentifiers;                                 //@synthesize childBundleIdentifiers=_childBundleIdentifiers - In the implementation block
@property (assign,getter=isInvalid,nonatomic) BOOL invalid;                                    //@synthesize invalid=_invalid - In the implementation block
@property (assign,getter=isPlaceholder,nonatomic) BOOL placeholder;                            //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,getter=isRegisteredByCaller,nonatomic) BOOL registeredByCaller;              //@synthesize registeredByCaller=_registeredByCaller - In the implementation block
@property (assign,nonatomic) unsigned long long dataContainerClass;                            //@synthesize dataContainerClass=_dataContainerClass - In the implementation block
-(id)initWithCodeSigningInfo:(id)arg1 andDataContainerClass:(unsigned long long)arg2 ;
-(NSArray *)childBundleIdentifiers;
-(void)setRegisteredByCaller:(BOOL)arg1 ;
-(void)setChildBundleIdentifiers:(NSArray *)arg1 ;
-(void)setDataContainerClass:(unsigned long long)arg1 ;
-(id)initWithSerializedDictionary:(id)arg1 ;
-(unsigned long long)dataContainerClass;
-(BOOL)isRegisteredByCaller;
-(void)setCodeSigningInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)codeSigningInfo;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setPlaceholder:(BOOL)arg1 ;
-(BOOL)isInvalid;
-(BOOL)isPlaceholder;
-(void)setInvalid:(BOOL)arg1 ;
-(id)serialize;
@end

