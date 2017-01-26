/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSEntityDescription, NSArray, NSMutableDictionary, NSDictionary;

@interface NSPropertyDescription : NSObject <NSCoding, NSCopying> {

	NSString* _versionHashModifier;
	id _underlyingProperty;
	NSData* _versionHash;
	NSEntityDescription* _entity;
	NSString* _name;
	NSArray* _validationPredicates;
	NSArray* _validationWarnings;
	struct {
		unsigned _isReadOnly : 1;
		unsigned _isTransient : 1;
		unsigned _isOptional : 1;
		unsigned _isIndexed : 1;
		unsigned _skipValidation : 1;
		unsigned _isIndexedBySpotlight : 1;
		unsigned _isStoredInExternalRecord : 1;
		unsigned _extraIvarsAreInDataBlob : 1;
		unsigned _isOrdered : 1;
		unsigned _reservedPropertyDescription : 23;
	}  _propertyDescriptionFlags;
	void* _extraIvars;
	NSMutableDictionary* _userInfo;
	long long _entitysReferenceIDForProperty;

}

@property (nonatomic,readonly) NSEntityDescription * entity; 
@property (nonatomic,copy) NSString * name; 
@property (getter=isOptional) BOOL optional; 
@property (getter=isTransient) BOOL transient; 
@property (readonly) NSArray * validationPredicates; 
@property (readonly) NSArray * validationWarnings; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@property (getter=isIndexed) BOOL indexed; 
@property (copy,readonly) NSData * versionHash; 
@property (copy) NSString * versionHashModifier; 
@property (getter=isIndexedBySpotlight) BOOL indexedBySpotlight; 
@property (getter=isStoredInExternalRecord) BOOL storedInExternalRecord; 
@property (copy) NSString * renamingIdentifier; 
+(void)initialize;
-(void)setElementID:(id)arg1 ;
-(BOOL)isSpotlightIndexed;
-(void)setSpotlightIndexed:(BOOL)arg1 ;
-(BOOL)isStoredInTruthFile;
-(void)setStoredInTruthFile:(BOOL)arg1 ;
-(BOOL)isStoredInTruth;
-(void)setStoredInTruth:(BOOL)arg1 ;
-(id)elementID;
-(BOOL)_isRelationship;
-(long long)_entitysReferenceID;
-(unsigned long long)_propertyType;
-(NSExtraPropertyIVars*)_extraIVars;
-(void)_throwIfNotEditable;
-(id)_initWithName:(id)arg1 ;
-(id)_rawValidationPredicates;
-(id)_rawValidationWarnings;
-(BOOL)_comparePredicatesAndWarnings:(id)arg1 ;
-(void)_createCachesAndOptimizeState;
-(void)_replaceValidationPredicates:(id)arg1 andWarnings:(id)arg2 ;
-(BOOL)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4 ;
-(void)_versionHash:(char*)arg1 inStyle:(unsigned long long)arg2 ;
-(void)_appendPropertyFieldsToData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 ;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7 ;
-(void)_setEntity:(id)arg1 ;
-(BOOL)_isEditable;
-(void)_setEntitysReferenceID:(long long)arg1 ;
-(void)_stripForMigration;
-(void)_restoreValidation;
-(BOOL)_skipValidation;
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)_isToManyRelationship;
-(BOOL)_isOrdered;
-(void)_initializeExtraIVars;
-(void)_setOrdered:(BOOL)arg1 ;
-(BOOL)isReadOnly;
-(NSString *)renamingIdentifier;
-(NSData *)versionHash;
-(BOOL)isOptional;
-(BOOL)isIndexed;
-(void)setIndexed:(BOOL)arg1 ;
-(NSArray *)validationPredicates;
-(NSArray *)validationWarnings;
-(NSString *)versionHashModifier;
-(void)setRenamingIdentifier:(NSString *)arg1 ;
-(void)setVersionHashModifier:(NSString *)arg1 ;
-(BOOL)isIndexedBySpotlight;
-(BOOL)isStoredInExternalRecord;
-(void)setOptional:(BOOL)arg1 ;
-(void)setValidationPredicates:(id)arg1 withValidationWarnings:(id)arg2 ;
-(void)setIndexedBySpotlight:(BOOL)arg1 ;
-(void)setStoredInExternalRecord:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(BOOL)isTransient;
-(NSEntityDescription *)entity;
-(void)setTransient:(BOOL)arg1 ;
@end

