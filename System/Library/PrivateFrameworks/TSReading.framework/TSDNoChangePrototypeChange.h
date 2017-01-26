/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSDPrototypeChange.h>

@class NSString;

@interface TSDNoChangePrototypeChange : NSObject <TSDPrototypeChange> {

	id mPrototype;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL prototypeIsBeingReplaced; 
@property (readonly) BOOL prototypeIsBeingModified; 
@property (readonly) BOOL prototypeIsBeingDeleted; 
@property (retain,readonly) id prototype; 
@property (retain,readonly) id replacement; 
@property (retain,readonly) id<TSSPropertySource> propertiesBeforeChange; 
@property (retain,readonly) id<TSSPropertySource> propertiesAfterChange; 
-(BOOL)prototypeIsBeingReplaced;
-(BOOL)prototypeIsBeingDeleted;
-(BOOL)propertyIsChanging:(int)arg1 ;
-(BOOL)propertiesAreChanging:(id)arg1 ;
-(BOOL)prototypeIsBeingModified;
-(id<TSSPropertySource>)propertiesBeforeChange;
-(id<TSSPropertySource>)propertiesAfterChange;
-(id)changedPropertySet;
-(id)initNoChangePrototypeChangeForPrototype:(id)arg1 ;
-(id)prototype;
-(void)dealloc;
-(NSString *)description;
-(id)replacement;
@end

