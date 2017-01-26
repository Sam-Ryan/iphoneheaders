/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:32 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PLPhotoEffect : NSObject {

	NSString* _filterIdentifier;
	NSString* _displayName;
	NSString* _CIFilterName;

}

@property (nonatomic,copy,readonly) NSString * filterIdentifier;              //@synthesize filterIdentifier=_filterIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * CIFilterName;                  //@synthesize CIFilterName=_CIFilterName - In the implementation block
@property (nonatomic,readonly) long long latestVersion; 
+(id)effectWithCIFilterName:(id)arg1 ;
+(id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3 ;
+(BOOL)isEffectWithIdentifier:(id)arg1 equalToEffectWithIdentifier:(id)arg2 ;
+(BOOL)isEffectNoneForIdentifier:(id)arg1 ;
+(id)effectWithIdentifier:(id)arg1 ;
+(id)allEffects;
+(unsigned long long)indexOfEffectWithIdentifier:(id)arg1 ;
-(id)description;
-(NSString *)displayName;
-(NSString *)CIFilterName;
-(id)newEffectFilter;
-(NSString *)filterIdentifier;
-(long long)latestVersion;
@end

