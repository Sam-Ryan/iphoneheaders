/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSMutableDictionary, NSObject;

@interface SXJSONDictionary : SXJSONObject <NSFastEnumeration> {

	/*^block*/id _objectValueClassBlock;
	/*^block*/id _valueClassBlock;
	NSDictionary* _json;
	NSMutableDictionary* _objects;
	NSObject*<OS_dispatch_queue> _serializationQueue;

}

@property (nonatomic,readonly) id objectValueClassBlock;                                     //@synthesize objectValueClassBlock=_objectValueClassBlock - In the implementation block
@property (nonatomic,readonly) id valueClassBlock;                                           //@synthesize valueClassBlock=_valueClassBlock - In the implementation block
@property (nonatomic,readonly) NSDictionary * json;                                          //@synthesize json=_json - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * objects;                                //@synthesize objects=_objects - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serializationQueue;              //@synthesize serializationQueue=_serializationQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)serializationQueue;
-(id)initWithValueClassBlock:(/*^block*/id)arg1 objectValueClassBlock:(/*^block*/id)arg2 andJSONObject:(id)arg3 ;
-(NSDictionary *)json;
-(id)objectValueClassBlock;
-(id)valueClassBlock;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SX14*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(id)allKeys;
-(id)allObjects;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(NSMutableDictionary *)objects;
@end

