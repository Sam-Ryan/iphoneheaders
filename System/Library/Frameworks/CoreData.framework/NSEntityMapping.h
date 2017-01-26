/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSDictionary, NSString, NSData, NSExpression, NSMutableArray, NSArray;

@interface NSEntityMapping : NSObject {

	void* _reserved;
	void* _reserved1;
	NSDictionary* _mappingsByName;
	NSString* _name;
	unsigned long long _mappingType;
	NSString* _sourceEntityName;
	NSData* _sourceEntityVersionHash;
	NSString* _destinationEntityName;
	NSData* _destinationEntityVersionHash;
	NSExpression* _sourceExpression;
	NSDictionary* _userInfo;
	NSString* _entityMigrationPolicyClassName;
	NSMutableArray* _attributeMappings;
	NSMutableArray* _relationshipMappings;
	struct {
		unsigned _isInUse : 1;
		unsigned _reservedEntityMapping : 31;
	}  _entityMappingFlags;

}

@property (copy) NSString * name; 
@property (assign) unsigned long long mappingType; 
@property (copy) NSString * sourceEntityName; 
@property (copy) NSData * sourceEntityVersionHash; 
@property (copy) NSString * destinationEntityName; 
@property (copy) NSData * destinationEntityVersionHash; 
@property (retain) NSArray * attributeMappings; 
@property (retain) NSArray * relationshipMappings; 
@property (retain) NSExpression * sourceExpression; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@property (copy) NSString * entityMigrationPolicyClassName; 
+(void)initialize;
-(void)_throwIfNotEditable;
-(void)_createCachesAndOptimizeState;
-(void)_setIsEditable:(BOOL)arg1 ;
-(id)_initWithSourceEntityDescription:(id)arg1 destinationEntityDescription:(id)arg2 ;
-(id)_mappingsByName;
-(id)_migrationPolicy;
-(void)_addAttributeMapping:(id)arg1 ;
-(void)_addRelationshipMapping:(id)arg1 ;
-(BOOL)_hasInferredMappingNeedingValidation;
-(BOOL)isEditable;
-(unsigned long long)mappingType;
-(NSString *)sourceEntityName;
-(NSString *)destinationEntityName;
-(void)setSourceExpression:(NSExpression *)arg1 ;
-(void)setAttributeMappings:(NSArray *)arg1 ;
-(void)setRelationshipMappings:(NSArray *)arg1 ;
-(void)setSourceEntityName:(NSString *)arg1 ;
-(void)setSourceEntityVersionHash:(NSData *)arg1 ;
-(void)setDestinationEntityName:(NSString *)arg1 ;
-(void)setDestinationEntityVersionHash:(NSData *)arg1 ;
-(void)setMappingType:(unsigned long long)arg1 ;
-(NSData *)sourceEntityVersionHash;
-(NSData *)destinationEntityVersionHash;
-(NSExpression *)sourceExpression;
-(NSString *)entityMigrationPolicyClassName;
-(NSArray *)attributeMappings;
-(NSArray *)relationshipMappings;
-(void)setEntityMigrationPolicyClassName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
@end

