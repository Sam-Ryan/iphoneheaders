/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, NSManagedObjectID;

@interface PHChangeRequestHelper : NSObject {

	BOOL _isMutated;
	BOOL _isNew;
	BOOL _didRequestUUID;
	NSMutableDictionary* _mutations;
	id _changeRequest;
	NSString* _uuid;
	NSString* _uuidSaveToken;
	NSManagedObjectID* _objectID;

}

@property (assign,nonatomic,__weak) id changeRequest;                        //@synthesize changeRequest=_changeRequest - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * uuidSaveToken;                     //@synthesize uuidSaveToken=_uuidSaveToken - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectID;                   //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * mutations;              //@synthesize mutations=_mutations - In the implementation block
@property (assign,getter=isNew,nonatomic) BOOL new; 
@property (assign,getter=isMutated,nonatomic) BOOL mutated; 
+(id)changeRequestForObject:(id)arg1 ;
+(id)changeRequestWithXPCDict:(id)arg1 clientEntitled:(BOOL)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5 ;
-(id)init;
-(id)description;
-(NSString *)uuid;
-(void)setObjectID:(NSManagedObjectID *)arg1 ;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initForNewObjectWithUUID:(id)arg1 changeRequest:(id)arg2 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 changeRequest:(id)arg3 ;
-(id)changeRequest;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(NSString *)uuidSaveToken;
-(NSMutableDictionary *)mutations;
-(id)initForNewObjectWithChangeRequest:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 changeRequest:(id)arg2 ;
-(void)generateUUIDIfNecessary;
-(void)didMutate;
-(BOOL)isMutated;
-(void)setMutated:(BOOL)arg1 ;
-(void)setNew:(BOOL)arg1 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)setChangeRequest:(id)arg1 ;
-(BOOL)isNew;
-(NSManagedObjectID *)objectID;
@end

