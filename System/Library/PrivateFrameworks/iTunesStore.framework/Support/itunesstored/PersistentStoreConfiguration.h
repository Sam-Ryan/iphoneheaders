/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:40 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface PersistentStoreConfiguration : NSObject <NSCopying> {

	NSString* _databaseFileName;
	NSArray* _legacyModelVersionIdentifiers;
	NSString* _modelFileName;
	int _storeType;

}

@property (nonatomic,retain) NSString * databaseFileName;                        //@synthesize databaseFileName=_databaseFileName - In the implementation block
@property (nonatomic,readonly) NSString * integrityCookieFileName; 
@property (nonatomic,copy) NSArray * legacyModelVersionIdentifiers;              //@synthesize legacyModelVersionIdentifiers=_legacyModelVersionIdentifiers - In the implementation block
@property (nonatomic,retain) NSString * modelFileName;                           //@synthesize modelFileName=_modelFileName - In the implementation block
@property (assign,nonatomic) int storeType;                                      //@synthesize storeType=_storeType - In the implementation block
-(id)initWithStoreType:(int)arg1 ;
-(int)storeType;
-(NSString *)integrityCookieFileName;
-(NSString *)modelFileName;
-(NSArray *)legacyModelVersionIdentifiers;
-(void)setLegacyModelVersionIdentifiers:(NSArray *)arg1 ;
-(void)setModelFileName:(NSString *)arg1 ;
-(void)setStoreType:(int)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)databaseFileName;
-(void)setDatabaseFileName:(NSString *)arg1 ;
@end

