/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Silex/Silex-Structs.h>
@class NSDictionary, NSObject, NSMutableDictionary;

@interface SXJSONObject : NSObject {

	NSDictionary* _jsonDictionary;
	NSObject*<OS_dispatch_queue> _serializationQueue;
	NSMutableDictionary* _objectStorage;
	id _context;
	id _backingObject;

}

@property (nonatomic,retain) id context;                                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id backingObject;                                             //@synthesize backingObject=_backingObject - In the implementation block
@property (nonatomic,retain) NSDictionary * jsonDictionary;                                //@synthesize jsonDictionary=_jsonDictionary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serializationQueue;              //@synthesize serializationQueue=_serializationQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * objectStorage;                          //@synthesize objectStorage=_objectStorage - In the implementation block
+(void)initializeObject;
+(id)jsonPropertyNameForObjCPropertyName:(id)arg1 ;
+(/*^block*/id)objectValueClassBlockForPropertyWithName:(id)arg1 ;
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
+(Class)classOverrideAtInitialization:(Class)arg1 type:(id)arg2 ;
+(void)initializeJSONObject;
+(id)propertyDefinitions;
+(id)propertyHashTable;
+(void)initialize;
-(NSObject*<OS_dispatch_queue>)serializationQueue;
-(id)initWithJSONData:(id)arg1 ;
-(id)initWithBackingObject:(id)arg1 ;
-(id)valueForLookupKey:(id)arg1 ;
-(id)backingObject;
-(void)setBackingObject:(id)arg1 ;
-(NSDictionary *)jsonDictionary;
-(void)setObjectStorage:(NSMutableDictionary *)arg1 ;
-(void)setSerializationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setJsonDictionary:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)objectStorage;
-(id)jsonData;
-(void)storeObject:(id)arg1 forLookupKey:(id)arg2 ;
-(id)objectForLookupKey:(id)arg1 ;
-(void)storeValue:(id)arg1 forLookupKey:(id)arg2 ;
-(BOOL)hasJSONStore;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)context;
-(void)setContext:(id)arg1 ;
-(id)initWithJSONObject:(id)arg1 ;
@end
